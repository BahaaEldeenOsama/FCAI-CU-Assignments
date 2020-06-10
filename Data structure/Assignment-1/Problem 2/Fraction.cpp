#include<bits/stdc++.h>
#include"Fraction.h"
using namespace std;

   Fraction Fraction::operator+(const Fraction &f)
    {
    Fraction t;
    t.numerator=numerator*f.denominator+f.numerator*denominator;
    t.denominator=denominator*f.denominator;
    return t;
    }

    Fraction Fraction::operator-(const Fraction &f)
    {
    Fraction t;
    t.numerator=numerator*f.denominator - f.numerator*denominator;
    t.denominator=denominator*f.denominator;
    return t;
    }

    Fraction Fraction::operator/(const Fraction &f)
    {
    Fraction t;
    t.numerator=numerator*f.denominator;
    t.denominator=denominator*f.numerator;
    return t;
    }

    Fraction Fraction::operator*(const Fraction &f)
    {
    Fraction t;
    t.numerator=numerator*f.numerator;
    t.denominator=denominator*f.denominator;
    return t;
    }


    bool Fraction::operator>(const Fraction &f)
    {
      if( (numerator==f.numerator) && denominator<f.denominator )
      {
          return true;
      }
      else if( (numerator>f.numerator) && (denominator==f.denominator) )
      {
          return true ;
      }
      else if((numerator>f.numerator) && (denominator>f.denominator))
      {
          return true;
      }
      else
      {
          return false;
      }
    }

    bool Fraction::operator<(const Fraction &f)
    {
      if( (numerator==f.numerator) && (denominator>f.denominator) )
      {
          return true;
      }
      else if( (numerator<f.numerator) && (denominator==f.denominator) )
      {
          return true ;
      }
      else if((numerator<f.numerator) && (denominator<f.denominator))
      {
          return true;
      }
      else
      {
          return false;
      }
    }

    bool Fraction::operator==(const Fraction &f)
    {
        if( (numerator/denominator) == (f.numerator/f.denominator) )
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Fraction::operator<=(const Fraction &f)
    {
      if( (numerator/denominator) == (f.numerator/f.denominator )  )
      {
          return true;
      }
      else if((numerator==f.numerator) && (denominator>f.denominator))
      {
          return true;
      }
      else if( (numerator<f.numerator) && (denominator==f.denominator) )
      {
          return true ;
      }
      else
      {
          return false ;
      }
    }

    bool Fraction::operator>=(const Fraction &f)
    {

      if(f.numerator==numerator   && f.denominator == denominator)
      {
          return true;
      }
      else if( (numerator==f.numerator) && denominator<f.denominator )
      {
          return true;
      }
      else if( (numerator>f.numerator) && (denominator==f.denominator) )
      {
          return true ;
      }
      else if((numerator>f.numerator) && (denominator>f.denominator))
      {
          return true;
      }
      else
      {
          return false;
      }

    }

    ostream &operator << (ostream &out,Fraction x)
    {
    out<<"The result = "<< x.numerator<<'/'<<x.denominator<<endl;
    return out;
    }

    istream &operator >>(istream &in,Fraction&x)
    {
      char c;
      in>>x.numerator>>c>>x.denominator;
      return in;
    }


   void reducing(int&numerator , int&denominator)
    {
        /// To ignore negative value.
        int num = abs(numerator);
        int den = abs(denominator);

         for(int i=num*den;i>1;--i)
         {
            if( ((num%i)==0)  && ((den%i)==0) )
            {
                den/=i;
                num/=i;
            }
         }
         if(denominator<0 && numerator>0)
         {
            cout<<"The result after simplify :"<< num * (-1) <<'/'<< den << endl;
         }
         else if(denominator >0 &&numerator<0)
         {
             cout<<"The result after simplify :"<< num * (-1) <<'/'<< den << endl;
         }
         else if(denominator<0 && numerator<0)
         {
             cout<<"The result after simplify :"<< num <<'/'<< den << endl;
         }
         ///  any value / 0 =  can't div by zero .
         else if( (  (denominator>0) || (denominator<0)  )  && (denominator==0) )
         {
             cout << "can't div by zero "<<endl;
         }
         else if ( numerator>0 && denominator>0)
         {
             cout<<"The result after simplify :"<< num <<'/'<< den << endl;
         }

    }

    void menu()
    {

          Fraction f1,f2,f3;
          int num=0;
          int den=0;

          starting_Point:
          char choice;
          cout << "*****************************************"<<endl;
          cout << "Perform Fraction Addition      ...Enter 1"<<endl;
          cout << "Perform Fraction Subtraction   ...Enter 2"<<endl;
          cout << "Perform Fraction Multiplication...Enter 3"<<endl;
          cout << "Perform Fraction division      ...Enter 4"<<endl;
          cout << "fraction1 < fraction2 ?        ...Enter 5"<<endl;
          cout << "fraction1 > fraction2 ?        ...Enter 6"<<endl;
          cout << "fraction1 ==fraction2 ?        ...Enter 7"<<endl;
          cout << "fraction1 <=fraction2 ?        ...Enter 8"<<endl;
          cout << "fraction1 >=fraction2 ?        ...Enter 9"<<endl;
          cout << "Exit...Enter (E)"                  <<endl;
          cout << "*****************************************"<<endl;
          cin>>choice;
          if(choice=='1')
          {
              cin >> f1;
              cin >> f2;
              f3=f1+f2 ;
              cout<< f3;
              num=f3.numerator;
              den=f3.denominator;
              reducing(num,den);
              cout <<"\n\n\n";

             goto starting_Point;


          }
          else if(choice=='2')
          {

              cin >> f1;
              cin >> f2;
              f3=f1-f2 ;
              cout<< f3;

             num=f3.numerator;
            den=f3.denominator;
            reducing(num,den);
            cout <<"\n\n\n";
            goto starting_Point;


          }
          else if(choice=='3')
          {
              cin >> f1;
              cin >> f2;
              f3=f1*f2 ;
              cout<< f3;

                  num=f3.numerator;
                  den=f3.denominator;
                  reducing(num,den);
                  cout <<"\n\n\n";
                  goto starting_Point;

          }
          else if(choice=='4')
          {
              cin >> f1;
              cin >> f2;
              f3=f1/f2 ;
              cout<< f3;

            num=f3.numerator;
            den=f3.denominator;
            reducing(num,den);
            cout <<"\n\n\n";
            goto starting_Point;

          }
          else if(choice=='5')
          {
             cin>>f1;
             cin>>f2;
             if(f1<f2)
             {
                 cout << "Fraction1 less than Fraction2."<<endl;
             }
             else
             {
                 cout << "Fraction1 not less than Fraction2."<<endl;
             }
             goto starting_Point;

          }
          else if(choice=='6')
          {
             cin>>f1;
             cin>>f2;
             if(f1>f2)
             {
                 cout << "Fraction1 greater than Fraction2."<<endl;
             }
             else
             {
                 cout << "Fraction1 not greater than Fraction2."<<endl;
             }
             goto starting_Point;

          }
          else if(choice=='7')
          {
             cin>>f1;
             cin>>f2;
             if(f1==f2)
             {
                 cout << "Fraction1 equal Fraction2."<<endl;
             }
             else
             {
                 cout << "Fraction1 not equal Fraction2."<<endl;
             }
             goto starting_Point;

          }
          else if(choice=='8')
          {
             cin>>f1;
             cin>>f2;
             if(f1<=f2)
             {
                 cout << "Fraction1 less than or equal Fraction2."<<endl;
             }
             else
             {
                 cout << "Fraction1 not less than or equal Fraction2."<<endl;
             }
             goto starting_Point;
          }
          else if(choice=='9')
          {
             cin>>f1;
             cin>>f2;
             if(f1>=f2)
             {
                 cout << "Fraction1 greater than or equal Fraction2."<<endl;
             }
             else
             {
                 cout << "Fraction1 not greater than equal Fraction2."<<endl;
             }
             goto starting_Point;

          }
          else if(choice=='e')
          {
              exit(1);
          }
          else
          {
              cout << "Invalid choice!"<<endl;
              goto starting_Point;
          }


    }




