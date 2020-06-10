#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;


void Merge(int Array1[], int Array2[], int m, int n)
{
    for (int i=n-1; i>=0; i--)
    {
        int j, last = Array1[m-1];
        for (j=m-2; j >= 0 && Array1[j] > Array2[i]; j--)
        {
            Array1[j+1] = Array1[j];
        }

       if (j != m-2 || last > Array2[i])
       {
          Array1[j+1] = Array2[i];
          Array2[i] = last;
        }

    }

}




int main()
{
  
  int Array1[] = {1, 4, 7, 8, 10};
  int Array2[] = {2, 3, 9};
  int m = 5;
  int n = 3;
  Merge(Array1, Array2, m, n);
  cout << " X[] = { ";
  rep(i,m)
  {
  cout << Array1[i];
  if(i<m-1)
  {
  cout << ",";
  }
  }
  
  cout << " }\n\n";
  cout << " Y[] = { ";
  rep(i,n)
  {
  cout << Array2[i];  
  if(i<n-1)
  {
    cout << ",";
  }
  }
  
cout << " }\n\n";
return 0;
}



