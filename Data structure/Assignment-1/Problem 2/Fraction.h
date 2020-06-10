#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include<bits/stdc++.h>
#include"Fraction.h"
using namespace std;


class Fraction
{

public:

   int numerator; //numerator
   int denominator; //denominator


    Fraction(int numerator=0,int denominator=1)
    {
          this->numerator=numerator;
          this->denominator=denominator;
    }


    Fraction operator+(const Fraction &f);
    Fraction operator-(const Fraction &f);
    Fraction operator/(const Fraction &f);
    Fraction operator*(const Fraction &f);



    bool operator>(const Fraction &f);
    bool operator<(const Fraction &f);
    bool operator==(const Fraction &f);
    bool operator<=(const Fraction &f);
    bool operator>=(const Fraction &f);




    friend ostream &operator << (ostream &out,Fraction x);
    friend istream &operator >>(istream &in,Fraction&x);

};

 void reducing(int&numerator , int&denominator);
 void menu();



#endif // FRACTION_H_INCLUDED
