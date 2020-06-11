#ifndef FCI-VECTOR_H_INCLUDED
#define FCI-VECTOR_H_INCLUDED
#include <bits/stdc++.h>
#include "FCI_COURS.h"
#include "Menu.h"
using namespace std;
template<class T>



class FCIvector
{
private:

    T* elements ;
    T number_OF_Elments;
    T*arr;
    T*temp;
    int capacity;
    int sz;
//    vector<T>vec;

public:
    FCIvector();

    FCIvector(T*vec[],int Size)
    {
        temp =new T[Size];
        sz=Size;
        for(int i=0;i<sz;++i)
        {
            temp[i]=vec[i];
        }
    }
/*
    T print_iformation()
    {

    }
*/


    void set_elements(T* elements);                      T* get_elements();
    void set_number_OF_Elments(T number_OF_Elments);     T  get_number_OF_Elments();

/*
    void set_capacity(int capacity){this->capacity=capacity;}
*/
    int  get_capacity(){ return 1e3;}


    int Size();
    int Capacity();
    bool Empty();

    T&Operation(int idx) ;
    T&Begin();
    T&Front();
    T&Back();
    T&print_item_in_vector(int pos);

    void Insert(int position,T val);
    void Push_back(T val);
    void Pop_back();
    void Clear();
    void Erase(int position) ;
/*
    friend ostream&operator<<(ostream&output,FCIvector&obj)
    {

        for(int i=0; i<sz;++i)
        {
            cout << *(temp+i) << " " ;
        }

      return output ;
    }
*/

};








class Course
{

public:
    string courseName;
    string courseCode;
    char courseGrade[100];
    float coursePoint;
    int courseYear;
    int courseSemester;

public :

    Course(){}

    void set_courseName(string courseName);             string get_courseName();
    void set_courseCode(string courseCode);             string get_courseCode();
    void set_courseGrade(char grade[]);                 char* get_courseGrade(){return courseGrade;}
    void set_coursePoint(float point);                  float get_coursePoint();
    void set_courseYear(int courseYear);                int get_courseYear();
    void set_courseSemester(int courseSemester);        int get_courseSemester();

    friend istream&operator>>(istream&inpu,Course&obj);
    friend ostream&operator<<(ostream&output,Course&obj);


    void print_Course_Info();
};




class Student : public Course
{

protected :

    FCIvector<Course>vec;
    string sName;
    string sDepartment;
    int sID;

public :

    Student(){}

    void set_sName(string sname);                string get_sName();
    void set_sDepartment(string sDepartment);    string get_sDepartment();
    void set_sID(int sID);                       int get_sID();


    friend istream&operator>>(istream&input,Student&obj);
    friend ostream&operator<<(ostream&output,Student&obj);

    void printInfo();
};











#endif // FCI-VECTOR_H_INCLUDED
