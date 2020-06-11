#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void encryptDecrypt(char inpString[], char key )
{
    // Define XOR key
    // Any character value will work
    char xorKey = key;

    // calculate length of input string
    int len = strlen(inpString);

    // perform XOR operation of key
    // with every character in string
    for (int i = 0; i < len; i++)
    {
        inpString[i] = inpString[i] ^ xorKey;
        printf("%c",inpString[i]);
    }
}


int main(void)
{
int x =0 ;




cout << "*************************************************"<<endl;
cout<<"If you want to Cipher a message Enter number 1: " <<endl;
cout<<"If you want to Decipher a message Enter number 2: " <<endl;
cout<<"If you want to End Enter number 3: " <<endl ;
cout << "*************************************************"<<endl;    
cout << "make a choice...";
cin>> x ;



if(x==1)
{

    char sampleString[100];

    char key;

    cout<<"Please enter your massage : ";

    cin>>sampleString;

    cout<<"Please enter your key : ";

    cin>>key;


 // Encrypt the string
    printf("Encrypted String: ");
    encryptDecrypt(sampleString,key);
    printf("\n");

}

else if (x==2)
{


 char sampleString[100];

    char key;

    cout<<"Please enter your massage : ";

    cin>>sampleString;

    cout<<"Please enter your key : ";

    cin>>key;

    // Decrypt the string
    printf("Decrypted String: ");
    encryptDecrypt(sampleString,key);
}



else if (x==3)
{
          cout<<"Exit " <<endl ;
}

return 0 ;
}
