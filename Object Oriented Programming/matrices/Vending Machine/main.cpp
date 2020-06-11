#include "vendingMachine.h"
#include<bits/algorithmfwd.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{
    cout << "\t\t\t\t\t\ Cairo University faculty of computer science."<<endl;
    cout << "\t\t\t\t\t\ DR:Mohamed Elramle."<<endl;
    cout << "\t\t\t\t\t\ Group 3."<<endl;
    cout << "\t\t\t\t\t\ My name:Bahaa Eldeen Osama Sayed."<<endl;
    cout << "\t\t\t\t\t\ My ID:20170078.\n\n\n\n\n\n\n\n\n";

Base_VM s ; ///snacks
///Drink   d ; ///drink
V_M  first_vendingMachine ;
first_vendingMachine.money_IN_VM = 5000 ;




cout << "You are welcome." <<endl;
cout << "The VM has 10 unit and each unit has 10 unit."<<endl;
cout << "The VM has " << first_vendingMachine.money_IN_VM << " $ " <<endl;


while(true)
{

menu:
cout << "**********************************"<<endl;
cout << "For snacks......Enter 1"<<"          *"<< endl;
cout << "For sweet.......Enter 2"<<"          *"<<endl;
cout << "For Gum1........Enter 3"<<"          *"<<endl;
cout << "For Gum2........Enter 4"<<"          *"<<endl;
cout << "For Gum3........Enter 5"<<"          *"<<endl;
cout << "For Gum4.. .....Enter 6"<<"          *"<<endl;
cout << "For Gum5........Enter 7"<<"          *"<<endl;
cout << "For Gum6........Enter 8"<<"          *"<<endl;
cout << "For Gum7........Enter 9"<<"          *"<<endl;
cout << "For exit .......Enter 0"<<"          *"<<endl;
cout << "**********************************"<<endl;
char Cchoice ;
cout << "Dear user,Make a choice....." ;
cin  >>Cchoice ;


if(Cchoice=='1'){s.function1();}
else if (Cchoice=='2'){s.function2();}
else if (Cchoice=='3'){s.function3();}
else if (Cchoice=='4'){s.function4();}
else if (Cchoice=='5'){s.function5();}
else if (Cchoice=='6'){s.function6();}
else if (Cchoice=='7'){s.function7();}
else if (Cchoice=='8'){s.function8();}
else if (Cchoice=='9'){s.function9();}
else if (Cchoice=='0'){break;}
else {goto menu;}

}

}




