#include "vendingMachine.h"
#include <iostream>
#include <string>
using namespace std ;




Base_VM::Base_VM() {}
Base_VM::Base_VM(string type_,string name_ ,double Coustomer_ ,double count_ ,double  price_ ,double my_money,double remainder_money , double remainder_)
{

                this->type_= type_   ;
                this->name_=name_    ;
                this->count_=count_     ;
                this->price_ =price_    ;
                this->my_money=my_money           ;
                this->remainder_=remainder_        ;
                this->remainder_money=remainder_money        ;
                this->Coustomer_=Coustomer_ ;


}

string Base_VM:: get_type(){return type_;}
string Base_VM:: get_name(){return name_;}
double Base_VM:: get_Count(){return count_;}
double Base_VM:: get_price(){return price_;}
double Base_VM:: get_Money(){return my_money;}
double Base_VM:: get_remainder_money(){return remainder_money;}
double Base_VM:: get_remainder_(){return remainder_;}
double Base_VM:: get_Coustomer_(){return Coustomer_;}



istream&operator>> (istream& input , Base_VM&vm)    /// s=>snacks
{

/*
    cout << "Enter your money : "  ;
    input>>vm.my_money ;
    cout << "Type of snacks : " ;
    input>> vm.type_Snack ;
    cout << "Name of snacks : " ;
    input>>vm.name_Snack ;
    cout << "How many snacks do you need? " ;
    input>>s.count_Snack ;
*/
   return input ;
}


ostream & operator << (ostream& output , Base_VM&vm)
 {

          int  Choice ;
          if (vm.my_money < vm.price_)
          {
                    output << "Dear user,your money not enough."<<endl;
                    output << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    output << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){output<< "now,you get your money."<< vm.my_money; }
                     else if (Choice== 2)
                     {
                             cin >> vm.my_money;
                              if (vm.my_money> vm.price_) {output << "You money are enough,you can take snacks."<<endl;}
                              else{output<< "Erham omy wa eshtery ze el nas  "<<endl;}
                     }
          }



               else  {output<< "your money is enough."<<endl;}



return output ;

 }


 ////////////////////////////////////////////////////////////////// Function (1) /////////////////////////////////////////////////////////////////


 void Base_VM::function1()
 {
V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;

first:

cout << "**********************************"<<endl;
cout << "For snack1 = 0.99$ .........Enter 1"<<"          *"<< endl;
cout << "For snack2 = 2.5$...........Enter 2"<<"          *"<<endl;
cout << "For snack3 = 3.5$...........Enter 3"<<"          *"<<endl;
cout << "For snack4 = 4$.............Enter 4"<<"          *"<<endl;
cout << "For snack5 = 10$............Enter 5"<<"          *"<<endl;
cout << "For snack6 = 11$............Enter 6"<<"          *"<<endl;
cout << "For snack7 = 20$............Enter 7"<<"          *"<<endl;
cout << "For snack8 = 14.5$..........Enter 8"<<"          *"<<endl;
cout << "For snack9 = 5.5$...........Enter 9"<<"          *"<<endl;
cout << "For exit ...................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.99 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 2.5 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 3.5;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 10 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 11 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 20 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 14.5 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 5.5 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

 }





////////////////////////////////////////////////////////////////// Function (3) /////////////////////////////////////////////////////////////////



void Base_VM::function3()
{



V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

 }





 ///////////////////////////////////////////////////////////////////////////function(2)/////////////////////////////////////////////////////////////////

 void Base_VM::function2()
 {

first:

cout << "**********************************"<<endl;
cout << "For sweet1 = 2$ ............Enter 1"<<"          *"<< endl;
cout << "For sweet2 = 4$.............Enter 2"<<"          *"<<endl;
cout << "For sweet3 = 6$.............Enter 3"<<"          *"<<endl;
cout << "For sweet4 = 8$.............Enter 4"<<"          *"<<endl;
cout << "For sweet5 = 10$............Enter 5"<<"          *"<<endl;
cout << "For sweet6 = 12$............Enter 6"<<"          *"<<endl;
cout << "For sweet7 = 14$............Enter 7"<<"          *"<<endl;
cout << "For sweet8 = 16$............Enter 8"<<"          *"<<endl;
cout << "For sweet9 = 18$............Enter 9"<<"          *"<<endl;
cout << "For exit ...................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d1.price_= 2 ;  d1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d1.Coustomer_;
if (d1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d1.my_money ;

d1.remainder_=d1.count_ - d1.Coustomer_;

          int  Choice ;
          if (d1.my_money < (d1.price_ * d1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d1.my_money<<endl;
                     float sub2 = d1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d1.my_money + add <<endl;;
                              if (d1.my_money> d1.price_ * d1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d1.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d1.remainder_money= d1.my_money - (d1.price_ * d1.Coustomer_) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d1.price_ * d1.Coustomer_ ))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d2.price_= 4 ;  d2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d2.Coustomer_;
if (d2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d2.my_money ;

d2.remainder_ =d2.count_ - d2.Coustomer_;

          int  Choice ;
          if (d2.my_money < (d2.price_ * d2.Coustomer_  ) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d2.my_money<<endl;
                     float sub2 = d2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d2.my_money + add <<endl;;
                              if (d2.my_money> d2.price_* d2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d2.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d2.remainder_money= d2.my_money - (d2.price_ * d2.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d2.price_ * d2.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='3' )
{

Choice3:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d3.price_= 6 ;  d3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d3.Coustomer_;
if (d3.Coustomer_ > 100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d3.my_money ;

d3.remainder_=d3.count_ - d3.Coustomer_;

          int  Choice ;
          if (d3.my_money < (d3.price_ * d3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d3.my_money<<endl;
                     float sub2 = d3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d3.my_money + add <<endl;;
                              if (d3.my_money> d3.price_ * d3.Coustomer_ ) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d3.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d3.remainder_money= d3.my_money - (d3.price_ * d3.Coustomer_) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d3.price_ * d3.Coustomer_ ))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{

Choice4:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d4.price_= 8 ;  d4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d4.Coustomer_;
if (d4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d4.my_money ;

d4.remainder_=d4.count_ - d4.Coustomer_;

          int  Choice ;
          if (d4.my_money < (d4.price_ * d4.Coustomer_ ) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d4.my_money<<endl;
                     float sub2 = d4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d4.my_money + add <<endl;;
                              if (d4.my_money> d4.price_  * d4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d4.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d4.remainder_money= d4.my_money - (d4.price_ *  d4.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d4.price_ * d4.Coustomer_   ))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='5' )
{

Choice5:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d5.price_ =10 ;  d5.count_ =100 ;
cout << "How many ?" <<endl;
cin  >>d5.Coustomer_;
if (d5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d5.my_money ;

d5.remainder_ = d5.count_ - d5.Coustomer_ ;

          int  Choice ;
          if (d5.my_money < (d5.price_ * d5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d5.my_money<<endl;
                     float sub2 = d5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d5.my_money + add <<endl;;
                              if (d5.my_money> d5.price_* d5.Coustomer_ ) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d5.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d5.remainder_money= d5.my_money - (d5.price_ * d5.Coustomer_) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d5.price_ * d5.Coustomer_  ))  << " $ " <<endl;



                     }





}

else if (Cchoice1=='6')
{

Choice6:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d6.price_ = 12 ;  d6.count_ =100 ;
cout << "How many ?" <<endl;
cin  >>d6.Coustomer_;
if (d6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d6.my_money ;

d6.remainder_ = d6.count_  -  d6.Coustomer_ ;

          int  Choice ;
          if (d6.my_money < (d6.price_ * d6.Coustomer_ )  )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d6.my_money<<endl;
                     float sub2 = d6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d6.my_money + add <<endl;;
                              if (d6.my_money > d6.price_ * d6.Coustomer_ ) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d6.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d6.remainder_money= d6.my_money - (d6.price_ * d6.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d6.price_ * d6.Coustomer_ ))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='7')
{

Choic7:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM d7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d7.price_= 14 ;  d7.count_ =100 ;
cout << "How many ?" <<endl;
cin  >>d7.Coustomer_;
if (d7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d7.my_money ;

d7.remainder_=d7.count_ - d7.Coustomer_;

          int  Choice ;
          if (d7.my_money < (d7.price_ * d7.Coustomer_ ) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d7.my_money<<endl;
                     float sub2 = d7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d7.my_money + add <<endl;;
                              if (d7.my_money> d7.price_ * d7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d7.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d7.remainder_money= d7.my_money - (d7.price_ * d7.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d7.price_ * d7.Coustomer_ ))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='8')
{

Choice8:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d8.price_= 16 ;  d8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d8.Coustomer_;
if (d8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d8.my_money ;

d8.remainder_ =d8.count_ - d8.Coustomer_ ;

          int  Choice ;
          if (d8.my_money < (d8.price_ * d8.Coustomer_ ) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d8.my_money<<endl;
                     float sub2 = d8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d8.my_money + add <<endl;;
                              if (d8.my_money> d8.price_ * d8.Coustomer_  ) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d8.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d8.remainder_money= d8.my_money - (d8.price_ * d8.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d8.price_ * d8.Coustomer_))  << " $ " <<endl;

                     }

}

else if (Cchoice1=='9' )
{

Choice9:

V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;
Base_VM  d9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


d9.price_= 18 ;  d9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>d9.Coustomer_;
if (d9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> d9.my_money ;

d9.remainder_ = d9.count_ - d9.Coustomer_ ;

          int  Choice ;
          if (d9.my_money < (d9.price_ * d9.Coustomer_ ) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< d9.my_money<<endl;
                     float sub2 = d9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << d9.my_money + add <<endl;;
                              if (d9.my_money> d9.price_ * d9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << d9.my_money+add <<endl;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              d9.remainder_money= d9.my_money - (d9.price_ * d9.Coustomer_ ) ;
                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< d9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << d9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << d9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((d9.price_ * d9.Coustomer_))  << " $ " <<endl;



                     }



}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

 }


///////////////////////////////////////////////// function (4)//////////////////////////////////////////////////////////////////////////////////////

      void Base_VM:: function4()
      {


V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

      }




void Base_VM::function5()
{

V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

}

void Base_VM::function6()
{

V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}
}

void Base_VM::function7()
{

V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

}

void Base_VM::function8()
{

V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

}


void Base_VM::function9()
{

V_M   first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;


first:

cout << "**********************************"<<endl;
cout << "For gum1 = 0.1$ .........Enter 1"<<"          *"<< endl;
cout << "For gum2 = 0.2$..........Enter 2"<<"          *"<<endl;
cout << "For gum3 = 0.3$..........Enter 3"<<"          *"<<endl;
cout << "For gum4 = 0.4$..........Enter 4"<<"          *"<<endl;
cout << "For gum5 = 0.5$..........Enter 5"<<"          *"<<endl;
cout << "For gum6 = 0.6$..........Enter 6"<<"          *"<<endl;
cout << "For gum7 = 0.7$..........Enter 7"<<"          *"<<endl;
cout << "For gum8 = 0.8$..........Enter 8"<<"          *"<<endl;
cout << "For gum9 = 0.9$..........Enter 9"<<"          *"<<endl;
cout << "For exit ................Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
cout << "Make a choice...";

char Cchoice1   ;
cin >>Cchoice1 ;
cout <<endl;





if (Cchoice1=='1')
{

Choice1:


Base_VM  vm1;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm1.price_= 0.1 ;  vm1.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm1.Coustomer_;
if (vm1.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm1.my_money ;

vm1.remainder_ = vm1.count_ - vm1.Coustomer_;

          int  Choice ;
          if (vm1.my_money < (vm1.price_ * vm1.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm1.my_money<<endl;
                     float sub2 = vm1.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm1.my_money + add ;
                              if (vm1.my_money > vm1.price_* vm1.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm1.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm1.remainder_money= vm1.my_money - (vm1.price_ * vm1.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm1.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm1.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm1.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm1.price_ * vm1.Coustomer_))  << " $ " <<endl;



                     }




}

else if (Cchoice1=='2' )
{

Choice2:


Base_VM  vm2;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm2.price_= 0.2 ;  vm2.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm2.Coustomer_;
if (vm2.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm2.my_money ;

vm2.remainder_ = vm2.count_ - vm2.Coustomer_;

          int  Choice ;
          if (vm2.my_money < (vm2.price_ * vm2.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm2.my_money<<endl;
                     float sub2 = vm2.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm2.my_money + add ;
                              if (vm2.my_money > vm2.price_* vm2.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm2.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm2.remainder_money= vm2.my_money - (vm2.price_ * vm2.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm2.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm2.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm2.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm2.price_ * vm2.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='3' )
{
Choice3:


Base_VM  vm3;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm3.price_= 0.3;  vm3.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm3.Coustomer_;
if (vm3.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm3.my_money ;

vm3.remainder_ = vm3.count_ - vm3.Coustomer_;

          int  Choice ;
          if (vm3.my_money < (vm3.price_ * vm3.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm3.my_money<<endl;
                     float sub2 = vm3.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm3.my_money + add ;
                              if (vm3.my_money > vm3.price_* vm3.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm3.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm3.remainder_money= vm3.my_money - (vm3.price_ * vm3.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm3.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm3.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm3.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm3.price_ * vm3.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='4')
{
Choice4:


Base_VM  vm4;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm4.price_= 0.4 ;  vm4.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm4.Coustomer_;
if (vm4.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm4.my_money ;

vm4.remainder_ = vm4.count_ - vm4.Coustomer_;

          int  Choice ;
          if (vm4.my_money < (vm4.price_ * vm4.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm4.my_money<<endl;
                     float sub2 = vm4.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm4.my_money + add ;
                              if (vm4.my_money > vm4.price_* vm4.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm4.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm4.remainder_money= vm4.my_money - (vm4.price_ * vm4.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm4.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm4.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm4.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm4.price_ * vm4.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='5' )
{
Choice5:



Base_VM  vm5;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm5.price_= 0.5 ;  vm5.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm5.Coustomer_;
if (vm5.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm5.my_money ;

vm5.remainder_ = vm5.count_ - vm5.Coustomer_;

          int  Choice ;
          if (vm5.my_money < (vm5.price_ * vm5.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm5.my_money<<endl;
                     float sub2 = vm5.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm5.my_money + add ;
                              if (vm5.my_money > vm5.price_* vm5.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm5.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm5.remainder_money= vm5.my_money - (vm5.price_ * vm5.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm5.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm5.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm5.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm5.price_ * vm5.Coustomer_))  << " $ " <<endl;



                     }


}

else if (Cchoice1=='6')
{
Choice6:


Base_VM  vm6;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm6.price_= 0.6 ;  vm6.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm6.Coustomer_;
if (vm6.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm6.my_money ;

vm6.remainder_ = vm6.count_ - vm6.Coustomer_;

          int  Choice ;
          if (vm6.my_money < (vm6.price_ * vm6.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm6.my_money<<endl;
                     float sub2 = vm6.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm6.my_money + add ;
                              if (vm6.my_money > vm6.price_* vm6.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm6.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm6.remainder_money= vm6.my_money - (vm6.price_ * vm6.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm6.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm6.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm6.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm6.price_ * vm6.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='7')
{
Choice7:


Base_VM  vm7;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm7.price_= 0.7 ;  vm7.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm7.Coustomer_;
if (vm7.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm7.my_money ;

vm7.remainder_ = vm7.count_ - vm7.Coustomer_;

          int  Choice ;
          if (vm7.my_money < (vm7.price_ * vm7.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm7.my_money<<endl;
                     float sub2 = vm7.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm7.my_money + add ;
                              if (vm7.my_money > vm7.price_* vm7.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm7.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm7.remainder_money= vm7.my_money - (vm7.price_ * vm7.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm7.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm7.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm7.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm7.price_ * vm7.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='8')
{
Choice8:


Base_VM  vm8;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


 vm8.price_= 0.8 ;  vm8.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm8.Coustomer_;
if (vm8.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm8.my_money ;

vm8.remainder_ = vm8.count_ - vm8.Coustomer_;

          int  Choice ;
          if (vm8.my_money < (vm8.price_ * vm8.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm8.my_money<<endl;
                     float sub2 = vm8.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm8.my_money + add ;
                              if (vm8.my_money > vm8.price_* vm8.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm8.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm8.remainder_money= vm8.my_money - (vm8.price_ * vm8.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm8.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm8.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm8.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm8.price_ * vm8.Coustomer_))  << " $ " <<endl;



                     }



}

else if (Cchoice1=='9' )
{
Choice9:


Base_VM  vm9;

/*
double temp ;
s1.count_Snack = s1.remainder_snacks ;
temp=s1.remainder_snacks ;
s1.remainder_snacks = s1.count_Snack;
s1.count_Snack =s1.remainder_snacks ;
*/


vm9.price_= 0.9 ;  vm9.count_=100 ;
cout << "How many ?" <<endl;
cin  >>vm9.Coustomer_;
if (vm9.Coustomer_>100)
{
          cout << "sorry,you can not take all snacks."<<endl;
          cout << "You can take some "<<endl;
          goto first ;

}


cout << "Enter your money : " ;
cin  >> vm9.my_money ;

vm9.remainder_ = vm9.count_ - vm9.Coustomer_;

          int  Choice ;
          if (vm9.my_money < (vm9.price_ * vm9.Coustomer_) )
          {
                    cout << "Dear user,your money not enough."<<endl;
                    cout << "you have just two choice (1)ether get your money or (2)add more money." <<endl;
                    cout << "Make a choice..." ;
                    cin >> Choice ;

                     if (Choice== 1){cout<< "now,you get your money."<< vm9.my_money<<endl;
                     float sub2 = vm9.my_money ;
///                     float total = sub1 + sub2 ;
                     }
                     else if (Choice== 2)
                     {
                     float add ;
                             cout << "Enter your money : " ;
                             cin >> add;
                             cout<<"The your money total : " << vm9.my_money + add ;
                              if (vm9.my_money > vm9.price_* vm9.Coustomer_) {cout<<"You money are enough,you can take snacks."<<endl; goto Choice1;}
                              else{cout<< "Erham omy wa eshtery ze el nas."<<endl;
                                   cout << "Your money : " << vm9.my_money + add <<endl;;

                              goto first;
                               cout <<endl;

                               }
                     }
          }


               else
                    {

                              vm9.remainder_money= vm9.my_money - (vm9.price_ * vm9.Coustomer_) ;


                               cout<< "your money is enough."<<endl;

                               cout<< "you can get "<< vm9.Coustomer_ <<endl;

                               cout<< "your money remainder is : " << vm9.remainder_money<<endl;

                               cout << "Count snacks are remainder "  << vm9.remainder_  <<endl;

                               cout << "Now,The VM has " << first_vendingMachine.money_IN_VM + ((vm9.price_ * vm9.Coustomer_))  << " $ " <<endl;

                     }

}

///else if (Cchoice1=='0') {break;}

else {goto first ;}

}


Base_VM::~Base_VM() {}
