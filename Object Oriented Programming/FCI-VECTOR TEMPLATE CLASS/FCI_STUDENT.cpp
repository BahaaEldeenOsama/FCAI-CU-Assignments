#include<bits/stdc++.h>
#include "FCI_STUDENT.h"
#include "FCI_COURS.h"
#include "FCI-VECTOR.h"
using namespace std ;



 void Student::set_sName(string sname){this->sName=sName;}
 void Student::set_sDepartment(string sDepartment){this->sDepartment=sDepartment;}
 void Student::set_sID(int sID){this->sID=sID;}


 string Student::get_sName(){return sName;}
 string Student::get_sDepartment(){return sDepartment;}
 int Student::get_sID(){return sID;}


 istream&operator>>(istream&input,Student&obj)
 {

  cout << "Name: " ;     input>>obj.sName;  /// getline(input,obj.sName);
  cout << "ID: "   ;     input>>obj.sID;
  cout << "Department: ";input>>obj.sDepartment;



  return input;
 }


 ostream&operator<<(ostream&output,Student&obj)
 {

     ///output<<endl;
    /// output<<"********************************************"<< "\n";
     output<< "Name: " << obj.sName << "\n";
     output<< "ID: " << obj.sID << "\n";
     output<< "Department: " << obj.sDepartment << "\n";
    /// output<<"********************************************"<< "\n";
    ///output<< endl;

     return output ;
 }





 void Student::printInfo()
 {
     cout  << "Name: " << sName << "\n";
     cout  << "Department: " << sDepartment << "\n";
     cout  << "ID: " << sID << "\n";
 }





