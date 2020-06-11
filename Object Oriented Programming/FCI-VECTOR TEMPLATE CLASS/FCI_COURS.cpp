#include <bits/stdc++.h>
#include "FCI_STUDENT.h"
#include "FCI_COURS.h"
using namespace std;




 void Course::set_courseName(string courseName){this->courseName=courseName;}
 void Course::set_courseCode(string courseCode){this->courseCode=courseCode;}
 void Course::set_courseGrade(char grade[]){strcpy(courseGrade,grade);}
 void Course::set_coursePoint(float coursePoint){this->coursePoint=coursePoint;}
 void Course::set_courseYear(int courseYear){this->courseYear=courseYear;}
 void Course::set_courseSemester(int courseSemester){this->courseSemester=courseSemester;}


 string Course::get_courseName(){return courseName;}
 string Course::get_courseCode(){return courseCode;}
 ///char   Course::get_courseGrade(){return courseGrade;}
 float  Course::get_coursePoint(){return coursePoint;}
 int    Course::get_courseYear(){return courseYear;}
 int    Course::get_courseSemester(){return courseSemester;}

 istream&operator>>(istream&input,Course&obj)
 {

   cout <<"course Name:  ";input >>  obj.courseName;/// getline(cin,obj.courseName);
   cout <<"course Code:  ";input >>  obj.courseCode;  ///getline(input,obj.courseCode);
   cout <<"course Grade: ";input >>  obj.courseGrade; ///input.get(obj.courseGrade,100);

   cout <<"course Point: ";input >>  obj.coursePoint;
   cout <<"course Year:  ";input >>  obj.courseYear;
   cout <<"course Semester: ";input >>  obj.courseSemester;



  return input ;}


 ostream&operator<<(ostream&output,Course&obj)
 {
   output <<"course Name: "<<obj.courseName<< "\n";
   output <<"course Code: "<<obj.courseCode<< "\n";
   output <<"course Grade: "<<obj.courseGrade<< "\n";
   output <<"course Point: "<<obj.coursePoint<< "\n";
   output <<"course Year: "<<obj.courseYear<< "\n";
   output <<"course Semester: "<<obj.courseSemester<< "\n";
  /// output << endl;

  return output ;}


 void Course::print_Course_Info()
 {

  cout<< "course Name: " << courseName<<"\n";
  cout<< "course Code: " << courseCode<<"\n";
  cout<< "course Grade: "<< courseGrade<<"\n";
  cout<< "course Point: "<< coursePoint<<"\n";
  cout<< "course Year: " << courseYear<<"\n";
  cout<< "course Semester: "<< courseSemester<<"\n";
 }





