#include <iostream>
#include<fstream>
#include<vector>
#include<streambuf>
#include<strstream>
#include<string>
#include<cstring>
using namespace std;



const int MaxSize=500 ;
char buffer[MaxSize];
/// my class for using my variable.
///****************************************************************************************************************///
class Book
{
public :

    /// Default Values.
    char ISBN[6]={0} ; ///max 5
    char title[50]={0} ; ///max 49
    char AuthorName[50]={0} ;///max 49
    char namePages[100]={0};///max 99
    char price[1000]={0};///max 999
    char years[1000]={0};///max 999

};
///****************************************************************************************************************///
/// my all operations like ((1)add,(2)delete,(3)update,(4)search,(5)print one book,(6)print all books)Book.
/// and i will use input and output operation.
/// and menu
///****************************************************************************************************************///


///OK.
///(00)function input.
/// first function for input stream.
/// for each book.
istream& operator>>(istream&input ,Book& b)
{


    cout << "Dear user,Enter ISBN of Book : ";                                     input>>b.ISBN ;cout <<endl;
    cout << "Dear user,Enter title of Book : ";                                       input>>b.title   ;cout <<endl;
    cout << "Dear user,Enter author name of Book : ";                          input>>b.AuthorName ;cout <<endl;
    cout << "Dear user,Enter name pages of Book : ";                           input>>b.namePages  ;cout <<endl;
    cout << "Dear user,Enter price of Book : ";                                      input>>b.price ;cout <<endl;
    cout << "Dear user,Enter years of Book : ";                                      input>>b.years;cout <<endl;

    return input ;
}



///OK.
///(00)function output.
/// second function for output stream.
/// for each book.
ostream & operator << (ostream&output ,Book&b)
{
    cout << "**************************************************************************************************************"<<endl;
    cout << "The ISBN of Book: "; output<<b.ISBN; cout <<endl;
    cout << "The title of Book: ";   output<<b.title;cout <<endl;
    cout << "The author name of Book: "; output<<b.AuthorName ;cout <<endl;
    cout << "The name pages of Book: ";  output<<b.namePages ;cout <<endl;
    cout << "The price of Book: ";  output<<b.price ;cout <<endl;
    cout << "The years of Book: ";  output<<b.years;cout <<endl;
    cout << "***************************************************************************************************************"<<endl;

    return output ;
}




///OK.
///(01) function for add book.
int  add_book(ofstream & stream , Book&b)///write to file for i used OFstream.
{
///**************************************************///
strcpy(buffer ,b.ISBN)                 ;strcat(buffer , "|");
strcat(buffer  ,b.title)                  ;strcat(buffer , "|");
strcat(buffer  ,b.AuthorName)   ;strcat(buffer , "|");
strcat(buffer  ,b.namePages)     ;strcat(buffer , "|");
strcat(buffer  ,b.price)                 ;strcat(buffer , "|");
strcat(buffer  ,b.years)                ;strcat(buffer , "|");
///**************************************************///
long length = strlen(buffer);
///************************************************///
stream.write((char*)&length ,sizeof(length)); /// i enter address of length char by char and size of length.
///***********************************************///
///********************************///
stream.write(buffer , length) ;
///********************************///
return length ;

}


///(02) function for delete book.
void  delete_book(ofstream & stream , Book&b)
{
  string line, name;
  cout << "Please Enter the name of record you want to delete: ";
  cin >> name;
  ifstream myfile;
  ofstream temp;
  myfile.open("record.txt");
  temp.open("temp.txt");
  while (getline(myfile, line))
  {
    if (line != name)
      temp << line << endl;
  }
  cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
  myfile.close();
  temp.close();
  remove("record.txt");
  rename("temp.txt", "record.txt");

}




///(03) function for update book.
void  update_book(fstream & io, int rrn) /// IO : Input Output stream.    RRN : relative record number.
{
///**************************************///
Book b ;
io.seekg(rrn * sizeof(b) , ios::beg);
io.read((char*)&b , sizeof(b));
///***************************************///


/// Old data.
    cout << "My data at RRN : " << rrn << endl;
    cout << "**************************************************************************************************************"<<endl;
    cout << "The ISBN of Book: "<<b.ISBN;
    cout << "The title of Book: " <<b.title;
    cout << "The author name of Book: "<<b.AuthorName ;
    cout << "The name pages of Book: "<<b.namePages ;
    cout << "The price of Book: "<<b.price ;
    cout << "The years of Book: "<<b.years;
    cout << "***************************************************************************************************************"<<endl;


/// New data (Update).
    cout << "Enter your update : " <<endl;
    cout << "**************************************************************************************************************"<<endl;
    cout << "The ISBN of Book: ";cin.getline(b.ISBN,6);
    cout << "The title of Book: " ;cin.getline(b.title,50);
    cout << "The author name of Book: ";cin.getline(b.AuthorName,50) ;
    cout << "The name pages of Book: ";cin.getline(b.namePages,100)  ;
    cout << "The price of Book: ";cin.getline(b.price,1000)  ;
    cout << "The years of Book: ";cin.getline(b.years,1000) ;
    cout << "**************************************************************************************************************"<<endl;



    io.seekp(rrn*sizeof(b),ios::beg);
    io.write((char*)&b,sizeof(b));

}





///(04) function for search book.
void  search_book(ifstream & input , Book&b)
{
ifstream  myfile ;
string str,line ;
cout << "Enter Name of your book : " ; cin >> str ;
myfile.open(str) ;
cout << "Enter your ISBN for search : " ; cin >> b.ISBN ;


for (unsigned int curLine = 0; getline(myfile, line); curLine++)
  {

    if (line.find(b.ISBN) != string::npos)
    {
      cout << "found: " << b.ISBN<< " on line: " << curLine << endl;
    }
    else
    {
      cout << "Error! Not found on Line" << curLine << endl;
    }

}

}

///(05)function for printing book.
void  print_book(ifstream & stream , Book&b)
{

long length=0 ;
stream.read((char*)&length , sizeof(length));

///***********************************///
char* buffer = new char [length];
stream.read(buffer ,length);
istrstream  stringbuffer (buffer) ;
///***********************************///

///***************************************************///
stringbuffer.getline(b.ISBN, 6, '|');
stringbuffer.getline(b.title, 50, '|');
stringbuffer.getline(b.AuthorName, 50, '|');
stringbuffer.getline(b.namePages,100, '|');
stringbuffer.getline(b.price, 1000, '|');
stringbuffer.getline(b.years, 1000, '|');
///*****************************************************///
cout << b ;
delete buffer;
}

///(06) function for print all book.
void  print_all_books()
{


}



///(07) function for menu(collection all operators).
void menu()
{



menu00 :
cout << "*************************************************"<<endl;
cout << "For add book...............Enter(1)"<<"            ***"<<endl;
cout << "For delete book............Enter(2)"<<"            ***"<<endl;
cout << "For Update book............Enter(3)"<<"            ***"<<endl;
cout << "For Print one book.........Enter(4)"<<"            ***"<<endl;
cout << "For Print all books........Enter(5)"<<"            ***"<<endl;
cout << "For search book............Enter(6)"<<"            ***"<<endl;
cout << "**************************************************"<<endl;

char c ;cin >>c ;
string str ;
Book b ;

if (c=='1')
{

cout << "Enter count of book : " ; int num;cin >> num ;
for(int i=0 ; i<num ;i++)
{


cout << "Book number [" << i+1 <<"]" <<endl;
fstream myfile ;
myfile.open("Book.txt",ios::app ) ;


///*********************************///
/*
cout << "Enter name of your file : ";
cin >> str ;
*/
///***********************************///

cout <<"********************************************************"<<endl;
cout << "Enter your info of the book : "                               <<endl;
cout <<"********************************************************"<<endl;
cout <<endl;
cin   >> b.AuthorName ;
add_book(myfile , b) ;
myfile.close();
cout << "__________________________________" <<endl;
cout <<endl;
cout <<endl;
}

}

else if (c=='2')
{

cout << "Enter name of file to delete : ";
string str ;cin >>str ;
ofstream myfile ;
myfile.open(str);
delete_book(myfile , b);

}

else if (c=='3')
{

cout << "Enter name of book to update : " ; cin >>str ;
fstream myfile(str, ios::out|ios::in | ios::trunc | ios::binary);
update_book(myfile , 1) ;   /// 1 for RRN.

}

else if (c=='4')
{

ifstream file ;
cout<< "Enter name of the book to print : " ;cin>>str ;
file.open(str);
print_book(file,b);
file.close();

}

else if (c=='5')
{
int num=0 ;
cout << "Enter count of books to print : ";cin >> num ;
for (int i=0 ;i<num ;i++)
{

ifstream file ;
cout<< "Enter name of the book to print : " ;cin>>str ;
file.open(str);
print_book(file,b);
file.close();


}

}



else if (c=='6')
{
ifstream myfile ;
Book b ;
search_book(myfile , b) ;
myfile.close();



/*
cout << "Enter count of books to search : ";cin >> num ;
for (int i=0 ;i<num ;i++)
{

ifstream file ;
cout<< "Enter name of the book to print : " ;cin>>str ;
file.open(str);
print_book(file,b);
file.close();
*/
}

else
{
    cout <<endl;
    cout << "Wrong choice!"<<endl;
    cout <<endl;
    goto menu00 ;
}


}

///******************************************************** The End ***************************************************///













int main()
{
cout << "\t\t\t\t\t\t You are welcome at FCI-CU.\n\n\n\n\n\n\n ";

while(true)
{

menu() ;

}






    return 0;
}
