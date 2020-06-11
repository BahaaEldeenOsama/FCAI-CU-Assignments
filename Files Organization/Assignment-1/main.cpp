#include<bits/stdc++.h>
using namespace std;

class Datetime
{
private:
    int day, month, year;

public:

    Datetime():day(0), month(0), year(0){}

    /// getters
    int getDay() { return day; }
    int getMonth() { return month;}
    int getYear() { return year;}


    friend istream& operator >>(istream &in, Datetime &d){
        in >> d.day;
        in.ignore(); /// to ignore the "-" letter
        in >> d.month;
        in.ignore(); /// to ignore the "-" letter
        in >> d.year;

        return in;
    }

    friend ostream& operator <<(ostream &out, Datetime &d){
        out << d.day << "-" << d.month << "-" << d.year;
    }
};

class Student
{
private:
    int StudentId;
    char StudentName[100];
    float GPA;
    Datetime StudentDOB;
    int level;

public:

    /// add student to the file
    void addStudent(fstream& stream){
        stream << StudentId   << "|";
        stream << StudentName << "|";
        stream << GPA         << "|";
        stream << StudentDOB  << "|";
        stream << level       << "|";
        stream << "#";
    }

    /// get the student data from the file
    void getStudent(fstream& stream, int pos){

        /// seeks to the desired record
        stream.seekg(pos, stream.beg);

        stream >> StudentId;
        stream.ignore(); /// to ignore the | letter
        stream.getline(StudentName, 100, '|');
        stream >> GPA;
        stream.ignore();
        stream >> StudentDOB;
        stream.ignore();
        stream >> level;
    }

    void updateStudent(char name[], int lvl){
        strcpy(StudentName, name);
        level = lvl;
    }

    int calcAge(){
        /// given that we're in 2020 the age = 2020 - the birth year
        return 2020 - StudentDOB.getYear();
    }

    friend istream& operator >>(istream &in, Student &s){
        cout << "ID: ";
        in >> s.StudentId;

        cout << "Name: ";
        in.ignore();
        in.getline(s.StudentName, 100);

        cout << "GPA: ";
        in >> s.GPA;

        cout << "Date of Birth (ex: d-m-y): ";
        in >> s.StudentDOB;

        cout << "Level: ";
        in >> s.level;
        cout << endl;

        return in;
    }

    friend ostream& operator <<(ostream &out, Student &s){
        out << "ID: " << s.StudentId << endl;
        out << "Name: " << s.StudentName << endl;
        out << "GPA: " << s.GPA << endl;
        out << "Date of Birth: " << s.StudentDOB << endl;
        out << "Level: " << s.level << endl;

        return out;
    }
};

void menu();
int validateInput();

int main(){

    menu();

    return 0;
}

/// Input integer validation
int validateInput(){
    int choose;
///    int INT_MAX;
    cout << "> ";
    cin >> choose;

    // input validation
    while(true){
        if( cin.fail() ){
            cin.clear(); // clear the stream
            cin.ignore(INT_MAX,'\n'); // ignore any thing afterwards

            cout << "\nNot valid choice .. please, try again!\n" << endl;

            cout << "> ";
            cin >> choose;
        }

        if( !cin.fail() ) break;
    }

    return choose;
}

void menu()
{
    int choice;
    fstream file;
    Student stud;

    cout << "------------------------------------------------------" << endl;
    cout << "[1] Add Student" << endl;
    cout << "[2] Delete student" << endl;
    cout << "[3] Update student info" << endl;
    cout << "[4] Print student" << endl;
    cout << "[5] Print all" << endl;
    cout << "[6] Print students with less than or equal a given GPA" << endl;
    cout << "[7] Calculate student age" << endl;
    cout << "[8] Print students in a specific level" << endl;
    cout << "------------------------------------------------------" << endl;

    choice = validateInput();
    cout << endl;

    /// add a student to the file
    if(choice == 1){
        cin >> stud;
        file.open("students.txt", ios::out | ios::app);

        stud.addStudent(file);

        file.close();
    }
    else if(choice==2)
    {
        file.open("students.txt", ios::in);

        char c;
        int field, id = 0;
        bool found = false, status = false, first = true;
        int record_beg = 0, record_end = 0;

        cout << "Student ID: ";
        cin.ignore();
        cin >> id;

        file.seekg(0, file.end);

        /// to calculate the file size so if it's empty it won't cause an error
        int file_size = file.tellg();
        file.seekg(0);

        /// ============= getting the positions =============
        while(!file.eof() && file_size != 0)
        {

            file >> c;

            /// to see if it's first records or the records afterwards
            /// and get the beginning of the record if not found yet
            if( !status && (first || c == '#') )
            {

                /// so if it's the first record resets the get pointer to 0
                /// to put the id value from the first digit
                if(first)
                {
                    file.seekg(0);
                    first = false;
                }
                record_beg = file.tellg();

                file >> field;
                file >> c; // to escape the current hash to not corrupt the comparing
            }

            if(field == id)
            {
                found = true;
                status = true;
            }

            /// if the id is found and reached to the end of the record
            /// store the end position
            if(status && c == '#')
            {
                record_end = file.tellg();

                break;
            }

        }
        //// if found
        if(found){

            /// ============= Updating the object =============
            cout << endl << "record starts at: " << record_beg << endl;
            cout << "record ends at: " << record_end << endl;

            stud.getStudent(file, record_beg);

            /// ============= Delete record from  the file =============

            string before="", after="";


            file.seekg(0); /// resets the reading pointer
            while(!file.eof()){
                file.get(c);

                /// gets all the character before the updated record
                if(file.tellg() <= record_beg && file.tellg() >= 0){
                    before += c;
                }

                /// gets all the character after the updated record
                if(file.tellg() > record_end){
                    after += c;
                }

            }

            file.close(); /// end for reading

            /// open for writing
            file.open("students.txt", ios::out);

            /// concatenate all in the file (with the updated record)
            file << before;
            file << after;
            file.close();


        }
        else
        {
            cout << endl;
            cout << "-----------------" << endl;
            cout << " ID is not found " << endl;
            cout << "-----------------" << endl;
            cout << endl;
        }
    }


        /// Updating the student info (name, level) given the ID
    else if(choice == 3){
        file.open("students.txt", ios::in);

        char c;
        int field, id = 0;
        bool found = false, status = false, first = true;
        int record_beg = 0, record_end = 0;

        cout << "Student ID: ";
        cin.ignore();
        cin >> id;

        file.seekg(0, file.end);

        /// to calculate the file size so if it's empty it won't cause an error
        int file_size = file.tellg();
        file.seekg(0);

        /// ============= getting the positions =============
        while(!file.eof() && file_size != 0){

            file >> c;

            /// to see if it's first records or the records afterwards
            /// and get the beginning of the record if not found yet
            if( !status && (first || c == '#') ){

                /// so if it's the first record resets the get pointer to 0
                /// to put the id value from the first digit
                if(first){
                    file.seekg(0);
                    first = false;
                }
                record_beg = file.tellg();

                file >> field;
                file >> c; // to escape the current hash to not corrupt the comparing
            }

            if(field == id){
                found = true;
                status = true;
            }

            /// if the id is found and reached to the end of the record
            /// store the end position
            if(status && c == '#'){
                record_end = file.tellg();

                break;
            }

        }


        if(found){

            /// ============= Updating the object =============
            cout << endl << "record starts at: " << record_beg << endl;
            cout << "record ends at: " << record_end << endl;

            char name[100];
            int level;

            stud.getStudent(file, record_beg);

            cout << "Student New Name: ";
            cin.ignore();
            cin.getline(name, 100);
            cout << "Student New Level: ";
            cin >> level;

            stud.updateStudent(name, level);

            /// ============= Updating the file =============

            string before="", after="";


            file.seekg(0); /// resets the reading pointer
            while(!file.eof()){
                file.get(c);

                /// gets all the character before the updated record
                if(file.tellg() <= record_beg && file.tellg() >= 0){
                    before += c;
                }

                /// gets all the character after the updated record
                if(file.tellg() > record_end){
                    after += c;
                }

            }

            file.close(); /// end for reading

            /// open for writing
            file.open("students.txt", ios::out);

            /// concatenate all in the file (with the updated record)
            file << before;
            stud.addStudent(file);
            file << after;

            file.close();


        } else {
            cout << endl;
            cout << "-----------------" << endl;
            cout << " ID is not found " << endl;
            cout << "-----------------" << endl;
            cout << endl;
        }
    }

        /// print student data given the student name
    else if(choice == 4){
        file.open("students.txt", ios::in);

        char field[100], name[100], c;
        bool found = false;
        int record_pos = 0, counter=0;

        cout << "Student Name: ";
        cin.ignore();
        cin.getline(name, 100);

        while(!file.eof()){

            file >> c;

            /// identify the field character to count number of fields
            if(c == '|') counter++;

            /// if this is the field of the name get it and compare
            if(counter%5 == 1){
                file.getline(field, 100, '|');
                counter++;

                if(!strcmp(field, name)){
                    found = true;
                    break;
                }

            }

            /// identify the record start
            if(c == '#') record_pos = file.tellg();


        }

        if(found){
            stud.getStudent(file, record_pos);

            cout << stud;
        } else {
            cout << endl;
            cout << "-------------------" << endl;
            cout << " Name is not found " << endl;
            cout << "-------------------" << endl;
            cout << endl;
        }

        file.close();
    }

    else if(choice == 5){
        file.open("students.txt", ios::in);

        char c;
        int field, id;
        bool found = false;
        int record_beg = 0, record_end = 0, counter=0;

        file.seekg(0, file.end);
        int file_end = file.tellg();

        /// to calculate the file size so if it's empty it won't cause an error
        int file_size = file.tellg();
        file.seekg(0);

        while(!file.eof() && file_size != 0){

            file >> c;

            /// so if it's the last hash does not print
            if(file.tellg() == file_end) break;

            if(counter == 0 || c == '#' ){
                /// so if it's the first record resets the get pointer to 0
                /// to put the id value from the first digit
                if(counter == 0) file.seekg(0);
                record_beg = file.tellg();

                stud.getStudent(file, record_beg);
                cout << stud << endl;
            }

            counter++;

        }

        file.close();

    }

        /// Print students who have GPA less than or equal a specific GPA.
    else if(choice == 6)
    {

        file.open("students.txt", ios::in);

        file.seekg(0, file.end);
        int file_size = file.tellg();  /// to calculate the file size so if it's empty it won't cause an error


        if(file_size != 0)
        {
            int cnt_delimiter=0,cnt_hash=0 ,record_beg = 0, counter=0,loop=0 ;/// he tell us ,just 20 student.
            char c;///read character by character.
            float g,/// GPA form file.
                    gpa;/// GPA form user.
            bool Valid = false;
            cout << "Student GPA: ";
            cin >> gpa;

            file.seekg(0);
            while(!file.eof())
            {
                file>>c;

                if(file.tellg()==file_size){break;}
                if(c=='|')++cnt_delimiter;

                if(c=='#')
                {
                    ++cnt_hash;
                    record_beg = file.tellg();

                }
                if( (cnt_delimiter-2)%5==0)
                {
                    if(cnt_hash==0)
                    {
                        record_beg=0;

                    }
                    file>>g;
                    /// cout << "Outer GPA =" << g ;

                    if(gpa>=g)
                    {

                        /// cout << "    Inner GPA ="<<g<<endl;

                        stud.getStudent(file,record_beg);
                        cout << stud <<endl;
                        cout <<"\n";

                        Valid = true;
                    }
                }
            }

            if(!Valid)
            {
                cout << endl;
                cout << "-------------------------------" << endl;
                cout << "This GPA not exist in file.    " << endl;
                cout << "-------------------------------" << endl;
                cout << endl;
            }
        }

        else
        {
            cout << endl;
            cout << "-------------------" << endl;
            cout << " File is empty     " << endl;
            cout << "-------------------" << endl;
            cout << endl;
        }

        file.close();
        cout << endl;
        menu();


    }




        /// Calculate the student age given the id
    else if(choice == 7){
        file.open("students.txt", ios::in);

        char c;
        int field, id;
        bool found = false;
        int record_pos = 0, counter=0;

        cout << "Student ID: ";
        cin.ignore();
        cin >> id;

        file.seekg(0, file.end);

        /// to calculate the file size so if it's empty it won't cause an error
        int file_size = file.tellg();
        file.seekg(0);

        while(!file.eof() && file_size != 0){

            file >> c;

            /// to see if it's first records or the records afterwards
            if(counter == 0 || c == '#'){
                /// so if it's the first record resets the get pointer to 0
                /// to put the id value from the first digit
                if(counter == 0) file.seekg(0);
                record_pos = file.tellg();
                file >> field;
            }

            if(field == id){
                found = true;
                break;
            }

            counter++;

        }

        if(found){

            stud.getStudent(file, record_pos);

            cout << stud.calcAge() << endl;
        } else {
            cout << endl;
            cout << "-----------------" << endl;
            cout << " ID is not found " << endl;
            cout << "-----------------" << endl;
            cout << endl;
        }

        file.close();
        cout << endl;
        menu();

    }
        ///Print students in a specific level, the students’ level to be printed.
    else if(choice == 8)
    {

        file.open("students.txt", ios::in);

        file.seekg(0, file.end);
        int file_size = file.tellg();  /// to calculate the file size so if it's empty it won't cause an error


        if(file_size != 0)
        {
            int cnt_delimiter=0,cnt_hash=0 ,record_beg = 0, counter=0,loop=0 ;
            char c;///read character by character.
            int l,/// level form file.
                    level;/// level form user.
            bool Valid = false;
            cout << "Student Level: ";
            cin >> level;

            file.seekg(0);
            while(!file.eof())
            {
                file>>c;

                if(file.tellg()==file_size){break;}
                if(c=='|')++cnt_delimiter;
                if(c=='#')
                {
                    ++cnt_hash;
                    record_beg = file.tellg();

                }
                if( (cnt_delimiter-4)%5 == 0 )/// With each record increase 2 with original record.
                {
                    if(cnt_hash==0)
                    {
                        record_beg=0;

                    }
                    file>>l;

                    if(level==l)
                    {
                        stud.getStudent(file,record_beg);
                        cout << stud <<endl;
                        cout <<"\n";
                        Valid = true;
                    }


                }

            }

            if(!Valid)
            {
                cout << endl;
                cout << "-------------------------------" << endl;
                cout << "This level not exist in file.    " << endl;
                cout << "-------------------------------" << endl;
                cout << endl;
            }


        }

        else
        {
            cout << endl;
            cout << "-------------------" << endl;
            cout << " File is empty     " << endl;
            cout << "-------------------" << endl;
            cout << endl;
        }

        file.close();


    }


    cout << endl;
    menu();
}
