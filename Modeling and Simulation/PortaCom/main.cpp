#include <bits/stdc++.h>
using namespace std;
void printHistogram(int arr[], int n);



    double The_Max_profit=0.0,
           profit=0.0,
           The_Max_Loss=0.0,
           The_Average_profit=0.0,
           The_probability_loss=0.0,
           c1=0.0, ///Direct labor cost per unit.
           c2=0.0, ///parts cost per unit.
           x=0.0,  ///First year demand.
           all_profit=0.0;

     /// Fixed parameter.
     int Selling_price=249,
         Administrative_cost=400000,
         Advertising_cost=600000 ,
         cnt=0,
         Loss=0,
         sum,
         /// change with loop of run.
         C1_Histogram[10],
         C2_Histogram[10],
         X_Histogram[10],
         profit_Histogram[10],
         mean=15000,
         stander_deviation=4500;

     /// Main equation : profit =(249 - C1 -C2)X - (Administrative_cost+Advertising_cost)




int main()
{

    default_random_engine generator;
    normal_distribution<double> distribution(5.0,2.0);

     for(int i=0;i<10;++i)
     {

     ++cnt;
     srand(time(nullptr));
     /// Now,we will calculate C1.
     double r1= (rand()*1.00) / RAND_MAX; /// Probability .

     if(0<=r1 && r1<0.1){c1=43;}
     else if(0.1<=r1 && r1<0.3){c1=44;}
     else if(0.3<=r1 && r1<0.7){c1=45;}
     else if(0.7<=r1 && r1<0.9){c1=46;}
     else if(0.9<=r1 && r1<1){c1=47;}

     /// And then,calculate C2. (parts cost could range from $80 to $100 per unit)
     c2=rand()%20+80;

    /// Demand per year : i need  calculate mean and stander deviation.


     x= (mean+stander_deviation*sum) ;

     profit = (Selling_price-(c1+c2))*x - (Administrative_cost + Advertising_cost) ;
     all_profit+=profit;

     if(profit<0 || profit==0 ) {++Loss;}
     if(profit>The_Max_profit){The_Max_profit=profit;}
     if(profit<The_Max_Loss){The_Max_Loss=profit;}

     C1_Histogram[i] = c1;
     C2_Histogram[i] = c2;
     X_Histogram[i]  = x;
     profit_Histogram[i] = profit;


     }

/*
     The_Average_profit   = (all_profit*1.0)/cnt;
     The_probability_loss = (Loss*1.0)/cnt;
     cout << "**********************************************"<<endl;
     cout << "The Maximum profit is :" <<The_Max_profit<<endl;
     cout << "The minimum profit is :" <<The_Max_Loss<<endl;
     cout << "The The Average profit:" <<The_Average_profit<<endl;
     cout << "The The probability loss:"<< The_probability_loss*100<< "%" <<endl;
     cout << "**********************************************"<<endl;

     cout <<endl<<endl;
    /// printHistogram(C1_Histogram,cnt);

*/

    return 0;
}













void printHistogram(int arr[], int n)
{
    int maxEle = *max_element(arr, arr + n);

    for (int i = maxEle; i >= 0; i--) {
        cout.width(2);
        cout << right << i << " | ";
        for (int j = 0; j < n; j++) {

            // if array of element is greater
            // then array it print x
            if (arr[j] >= i)
                cout << " x ";

            // else print blank spaces
            else
                cout << "   ";
        }
        cout << "\n";
    }

    // print last line denoted by ----
    for (int i = 0; i < n + 3; i++)
        cout << "---";

    cout << "\n";
    cout << "     ";

    for (int i = 0; i < n; i++) {
        cout.width(2); // width for a number
        cout << right << arr[i] << " ";
    }
}
