#ifndef SNACKS_H_INCLUDED
#define SNACKS_H_INCLUDED


#include<iostream>
#include<string>
using namespace std ;


class Base_VM
{

///protected:
public :
      double price_ ;   ///price of snacks
      double count_  ; /// count of snacks in VM
      double Coustomer_ ; ///Coustomer
      double my_money ;
      double remainder_money;
      double remainder_ ;  /// remainder of snacks
      string name_  ;   ///name of snacks
      string type_  ;   /// type of snacks


public :

      Base_VM() ; ///default constructor .
      Base_VM(string type_ ,string name_ ,  double Coustomer_ ,double count_ ,double  price_ ,double my_money,double remainder_money , double remainder_) ;



      void function1();
      void function2();
      void function3();
      void function4();
      void function5();
      void function6();
      void function7();
      void function8();
      void function9();

      string get_type();
      string get_name();
      double get_Count ();
      double get_price();
      double get_Money();
      double get_remainder_money();
      double get_remainder_();
      double get_Coustomer_ ();


    ~Base_VM();
 friend istream& operator >>(istream& input , Base_VM&vm);    /// s=>snacks
 friend ostream & operator <<(ostream& output ,Base_VM&vm) ;
};


#endif // SNACKS_H_INCLUDED
