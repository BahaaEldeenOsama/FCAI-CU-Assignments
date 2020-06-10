#include <bits/stdc++.h>
using namespace std;





int main()
{
    int dice=0 , sum=0 , cnt=0 ;
    srand (time(NULL));
    for(int i=0;i<10000;++i)
    {
     while(1)
     {
       dice = (rand()%6)+1;
     ///  cout << dice << "\n";
       sum +=dice;
       ++cnt;

       if(sum+dice >=30)
       {
           sum=0;
           break;
       }
       /// cell for up
       if(sum==3)
       {
           sum += 19;
       }
       else if(sum==5)
       {
           sum+=3;
       }
       else if(sum==11)
       {
           sum += 15 ;
       }
       else if (sum==20)
       {
           sum +=9;
       }
       /// cell for down
       else if(sum==17)
       {
           sum-=13;
       }
       else if(sum==19)
       {
           sum-=12;
       }
       else if(sum==21)
       {
           sum-=12;
       }
       else if(sum==27)
       {
           sum-=26;
       }

     }

    }
    cout << cnt <<"\n";
    cout << cnt / 10000 << "\n";





return 0;}
