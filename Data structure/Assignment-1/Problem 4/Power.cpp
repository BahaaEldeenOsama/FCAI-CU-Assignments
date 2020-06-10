#include<bits/stdc++.h>
#include"Power.h"
using namespace std;






///power(a,n) = a* power(a,n-1)
long long Power1(int a,unsigned int n )
{
    if(n==0)
        return 1;
   return a*Power1(a,--n);
}



///power(a,n) = power(a,n/2) * power(a,n/2)
long long Power2(int a ,unsigned int n)
{
    if(n==0)
        return 1;
    else if(!(n&1))///check if n is even.
        return Power2(a,n/2)*Power2(a,n/2);
    else
        return a*Power2(a,n/2)*Power2(a,n/2);
}




void menu()
{
    char choice;
    cout << "\t\t\t\t\t\t Welcome dear user.\n\n\n\n\n\n";
    Start:
    cout << "***********************************"<<endl;
    cout << "To use power 1 ... Enter 1    *****"<<endl;
    cout << "To use Power 2 ... Enter 2    *****"<<endl;
    cout << "To Exit .........  Enter 3    *****"<<endl;
    cout << "***********************************"<< endl;
    cin  >>choice;


    if(choice=='1')
    {
        unsigned int a;
        int n;
        cout << "Enter base :" ;cin>>a;
        cout << "Enter Power :";cin>>n;
        cout << "Result : "<< Power1(a,n)<< "\n";
        goto Start;
    }
    else if(choice=='2')
    {
        unsigned int a;
        int n;
        cout << "Enter base  :" ;cin>>a;
        cout << "Enter Power :";cin>>n;
        cout << "Result : "<< Power2(a,n)<< "\n";
        goto Start;
    }
    else if(choice=='3')
    {
       cout << "You are welcome.\n";
    }
    else
    {
        cout << "Invalid choice.\n";
        goto Start;
    }

}





