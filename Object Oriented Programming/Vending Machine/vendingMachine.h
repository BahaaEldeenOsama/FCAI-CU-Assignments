#ifndef VENDINGMACHINE_H_INCLUDED
#define VENDINGMACHINE_H_INCLUDED


#include<iostream>
#include<string>
#include "snacks.h"
///#include "Drink.h"
using namespace std;




class V_M :public Base_VM
{

public :

          double money_IN_VM ;

public :
          V_M() ;
          V_M(double money_IN_VM) ;
              double get_Money_VM();
};


#endif // VENDINGMACHINE_H_INCLUDED
