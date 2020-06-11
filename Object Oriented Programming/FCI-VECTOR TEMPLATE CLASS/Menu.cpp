#include<bits/stdc++.h>
#include "FCI-VECTOR.h"
#include "FCI-VECTOR.cpp"
#include "FCI_COURS.h"
#include "FCI_STUDENT.h"
#include "Menu.h"
using namespace std ;



void manu()
{
        int choice ;
        cout << "*************************************************"<< "\n";
        cout << "Insert type of vector you would like to create:" << "\n";
        cout << "1. list of integer"   << "\n";
        cout << "2. list of character" << "\n";
        cout << "3. list of string"    << "\n";
        cout << "4. list of float"     << "\n";
        cout << "5. list of students"  << "\n";
        cout << "6. Exit"              << "\n";
        cout << "*************************************************"<< "\n";
        cin >>choice;

        if(choice==1){list_of_integer();}
        else if(choice==2){list_of_character();}
        else if(choice==3){list_of_string();}
        else if(choice==4){list_of_float();}
        else if(choice==5){list_of_students();}
        else if(choice==6){}
        else {cout << "Wrong choice!"<<"\n\n\n";manu();}


}












void list_of_integer()
{

    FCIvector<int>vec;
    int choice,val,pos,number_OF_Elments(0);
    char c2;

    /// count the number of  user make at least one push in vector.
    int Vector_Size(0);


    cout << "\n";
    cout << "A vector of integer is created successfully." << "\n";
    cout << "\n";

    menu:

    cout << "*************************************************"<< "\n";
    cout << "What kind of operation would you like to perform?"<< "\n";
    cout << "1. Add element."                                  << "\n";
    cout << "2. Remove last element."                          << "\n";
    cout << "3. Insert element at certain position."           << "\n";
    cout << "4. Erase element from a certain position."        << "\n";
    cout << "5. Clear."                                        << "\n";
    cout << "6. Display first element."                          << "\n";
    cout << "7. Display last element."                         << "\n";
    cout << "8. Display element at certain position."          << "\n";
    cout << "9. Display vector size."                          << "\n";
    cout << "10.Display vector capacity."                      << "\n";
    cout << "11.Is empty?"                                     << "\n";
    cout << "*************************************************"<< "\n";
    cin >> choice;

    if(choice==1)
    {

       cout << "How many elements you would like to add?" << "\n";
       cin  >> number_OF_Elments;
       for(int i=0;i<number_OF_Elments;++i)
       {
           cin >> val ;
           vec.Push_back(val);
           ++Vector_Size;
       }
      YN1:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN1;
      }

    }

    else if(choice==2)
    {
        if(Vector_Size==0)
        {
            cout << "The vector already empty, you can't remove item." << "\n" ;
            goto menu;
        }
        else
        {
            vec.Pop_back();
            --Vector_Size;
            YN2:
            cout <<"Would you like to perform other operations? (Y/N)" << "\n";
            cin >> c2;

            if(c2=='Y')
            {
                goto menu;
            }
            else if (c2=='N')
            {

            }
            else
            {
                cout << "Wrong choice!" << endl;
                goto YN2;
            }
        }
    }


    else if(choice==3)
    {

         cout << "Enter position: " ;cin>> pos ;
         cout << "Enter value: ";cin>>val;

      /// this condition to avoid crashing.
      if(pos > Vector_Size+1)
      {
         cout << "You can't insert value in this position."<< "\n";
         goto menu;
      }

      vec.Insert(pos,val);
      ++Vector_Size;

      YN3:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;
      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN3;
      }



    }

    else if(choice==4)
    {

      if(Vector_Size==0)
      {
        cout << "vector is empty, you can't erase any element." << "\n" ;
        goto menu ;
      }

       cout << "Enter position: " ;
       cin >>pos;

       if(pos>Vector_Size )
       {
           cout << "\n";
           cout << "your position grater than size of vector." << "\n";
           cout << "You can't erase element in this position." << "\n";
           cout << "\n";
           goto menu;
       }

      vec.Erase(pos);
      --Vector_Size;

      YN4:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN4;
      }

    }

    else if(choice==5)
    {
        vec.Clear();
        Vector_Size=0;

      YN5:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN5;
      }

    }

    else if(choice==6)
    {
        if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

            cout<<vec.Front() << "\n";

      YN6:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN6;
      }

    }

    else if(choice==7)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
        cout<<vec.Back() << "\n";

      YN7:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN7;
      }

    }

    else if(choice==8)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
         cout << "Position: " ;cin >>pos;

        if( (pos) >Vector_Size )
        {
           cout << "This position greater than vector size."<< "\n";
            goto menu;
        }

         cout << vec.print_item_in_vector(pos) << "\n";

      YN8:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN8;
      }

    }

    else if(choice==9)
    {
        cout<<vec.Size()<<"\n";

      YN9:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN9;
      }

    }

    else if(choice==10)
    {
       cout << vec.get_capacity() << "\n" ;

      YN10:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN10;
      }

    }

    else if(choice==11)
    {
      vec.Empty();

      YN11:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN11;
      }

    }

    else
    {
        goto menu;
    }

}



















void list_of_character()
{

    FCIvector<char>vec;
    int choice,pos,number_OF_Elments(0);
    char val ;
    char c2;

    /// count the number of  user make at least one push in vector.
    int Vector_Size(0);


    cout << "\n";
    cout << "A vector of character is created successfully." << "\n";
    cout << "\n";

    menu:

    cout << "*************************************************"<< "\n";
    cout << "What kind of operation would you like to perform?"<< "\n";
    cout << "1. Add element."                                  << "\n";
    cout << "2. Remove last element."                          << "\n";
    cout << "3. Insert element at certain position."           << "\n";
    cout << "4. Erase element from a certain position."        << "\n";
    cout << "5. Clear."                                        << "\n";
    cout << "6. Display first element."                          << "\n";
    cout << "7. Display last element."                         << "\n";
    cout << "8. Display element at certain position."          << "\n";
    cout << "9. Display vector size."                          << "\n";
    cout << "10.Display vector capacity."                      << "\n";
    cout << "11.Is empty?"                                     << "\n";
    cout << "*************************************************"<< "\n";
    cin >> choice;

    if(choice==1)
    {

       cout << "How many elements you would like to add?" << "\n";
       cin  >> number_OF_Elments;
       for(int i=0;i<number_OF_Elments;++i)
       {
           cin >> val ;
           vec.Push_back(val);
           ++Vector_Size;
       }
      YN1:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN1;
      }

    }

    else if(choice==2)
    {
        if(Vector_Size==0)
        {
            cout << "The vector already empty, you can't remove item." << "\n" ;
            goto menu;
        }
        else
        {
            vec.Pop_back();
            --Vector_Size;
            YN2:
            cout <<"Would you like to perform other operations? (Y/N)" << "\n";
            cin >> c2;

            if(c2=='Y')
            {
                goto menu;
            }
            else if (c2=='N')
            {

            }
            else
            {
                cout << "Wrong choice!" << endl;
                goto YN2;
            }
        }
    }


    else if(choice==3)
    {

         cout << "Enter position: " ;cin>> pos ;
         cout << "Enter value: ";cin>>val;

      /// this condition to avoid crashing.
      if(pos > Vector_Size+1)
      {
         cout << "You can't insert value in this position."<< "\n";
         goto menu;
      }

      vec.Insert(pos,val);
      ++Vector_Size;

      YN3:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;
      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN3;
      }



    }

    else if(choice==4)
    {

      if(Vector_Size==0)
      {
        cout << "vector is empty, you can't erase any element." << "\n" ;
        goto menu ;
      }

       cout << "Enter position: " ;
       cin >>pos;

       if(pos>Vector_Size )
       {
           cout << "\n";
           cout << "your position grater than size of vector." << "\n";
           cout << "You can't erase element in this position." << "\n";
           cout << "\n";
           goto menu;
       }

      vec.Erase(pos);
      --Vector_Size;

      YN4:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN4;
      }

    }

    else if(choice==5)
    {
        vec.Clear();
        Vector_Size=0;

      YN5:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN5;
      }

    }

    else if(choice==6)
    {
        if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

            cout<<vec.Front() << "\n";

      YN6:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN6;
      }

    }

    else if(choice==7)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
        cout<<vec.Back() << "\n";

      YN7:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN7;
      }

    }

    else if(choice==8)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
         cout << "Position: " ;cin >>pos;

        if( (pos) >Vector_Size )
        {
           cout << "This position greater than vector size."<< "\n";
            goto menu;
        }

         cout << vec.print_item_in_vector(pos) << "\n";

      YN8:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN8;
      }

    }

    else if(choice==9)
    {
        cout<<vec.Size()<<"\n";

      YN9:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN9;
      }

    }

    else if(choice==10)
    {
       cout << vec.get_capacity() <<"\n";

      YN10:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN10;
      }

    }

    else if(choice==11)
    {
      vec.Empty();

      YN11:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN11;
      }

    }

    else
    {
        goto menu;
    }


}



















void list_of_string()
{


    FCIvector<string>vec;
    int choice,pos,number_OF_Elments(0);
    string val ;
    char c2;

    /// count the number of  user make at least one push in vector.
    int Vector_Size(0);


    cout << "\n";
    cout << "A vector of string is created successfully." << "\n";
    cout << "\n";

    menu:

    cout << "*************************************************"<< "\n";
    cout << "What kind of operation would you like to perform?"<< "\n";
    cout << "1. Add element."                                  << "\n";
    cout << "2. Remove last element."                          << "\n";
    cout << "3. Insert element at certain position."           << "\n";
    cout << "4. Erase element from a certain position."        << "\n";
    cout << "5. Clear."                                        << "\n";
    cout << "6. Display first element."                          << "\n";
    cout << "7. Display last element."                         << "\n";
    cout << "8. Display element at certain position."          << "\n";
    cout << "9. Display vector size."                          << "\n";
    cout << "10.Display vector capacity."                      << "\n";
    cout << "11.Is empty?"                                     << "\n";
    cout << "*************************************************"<< "\n";
    cin >> choice;

    if(choice==1)
    {

       cout << "How many elements you would like to add?" << "\n";
       cin  >> number_OF_Elments;
       for(int i=0;i<number_OF_Elments;++i)
       {
           cin >> val ;
           vec.Push_back(val);
           ++Vector_Size;
       }
      YN1:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN1;
      }

    }

    else if(choice==2)
    {
        if(Vector_Size==0)
        {
            cout << "The vector already empty, you can't remove item." << "\n" ;
            goto menu;
        }
        else
        {
            vec.Pop_back();
            --Vector_Size;
            YN2:
            cout <<"Would you like to perform other operations? (Y/N)" << "\n";
            cin >> c2;

            if(c2=='Y')
            {
                goto menu;
            }
            else if (c2=='N')
            {

            }
            else
            {
                cout << "Wrong choice!" << endl;
                goto YN2;
            }
        }
    }

    else if(choice==3)
    {
         cout << "Enter position: " ;cin>> pos ;
         cout << "Enter value: ";cin>>val;

      /// this condition to avoid crashing.
      if(pos > Vector_Size+1)
      {
         cout << "You can't insert value in this position."<< "\n";
         goto menu;
      }

      vec.Insert(pos,val);
      ++Vector_Size;

      YN3:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;
      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN3;
      }

    }

    else if(choice==4)
    {

      if(Vector_Size==0)
      {
        cout << "vector is empty, you can't erase any element." << "\n" ;
        goto menu ;
      }

       cout << "Enter position: " ;
       cin >>pos;

       if(pos>Vector_Size )
       {
           cout << "\n";
           cout << "your position grater than size of vector." << "\n";
           cout << "You can't erase element in this position." << "\n";
           cout << "\n";
           goto menu;
       }

          vec.Erase(pos);
         --Vector_Size;

      YN4:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN4;
      }

    }

    else if(choice==5)
    {
        vec.Clear();
        Vector_Size=0;

      YN5:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN5;
      }

    }

    else if(choice==6)
    {
        if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

            cout<<vec.Front() << "\n";

      YN6:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN6;
      }

    }

    else if(choice==7)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
        cout<<vec.Back() << "\n";

      YN7:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN7;
      }

    }

    else if(choice==8)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
         cout << "Position: " ;cin >>pos;

        if( (pos) > Vector_Size )
        {
           cout << "This position greater than vector size."<< "\n";
            goto menu;
        }

         cout << vec.print_item_in_vector(pos-1) << "\n";

      YN8:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN8;
      }

    }

    else if(choice==9)
    {
        cout<<vec.Size()<<"\n";

      YN9:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN9;
      }

    }

    else if(choice==10)
    {

        cout << vec.get_capacity()<< "\n" ;

      YN10:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN10;
      }

    }

    else if(choice==11)
    {
      vec.Empty();

      YN11:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN11;
      }

    }

    else
    {
        goto menu;
    }



}




















void list_of_float()
{

    FCIvector<float>vec;
    int choice,pos,number_OF_Elments(0);
    float val ;
    char c2;

    /// count the number of  user make at least one push in vector.
    int Vector_Size(0);


    cout << "\n";
    cout << "A vector of float is created successfully." << "\n";
    cout << "\n";

    menu:

    cout << "*************************************************"<< "\n";
    cout << "What kind of operation would you like to perform?"<< "\n";
    cout << "1. Add element."                                  << "\n";
    cout << "2. Remove last element."                          << "\n";
    cout << "3. Insert element at certain position."           << "\n";
    cout << "4. Erase element from a certain position."        << "\n";
    cout << "5. Clear."                                        << "\n";
    cout << "6. Display first element."                          << "\n";
    cout << "7. Display last element."                         << "\n";
    cout << "8. Display element at certain position."          << "\n";
    cout << "9. Display vector size."                          << "\n";
    cout << "10.Display vector capacity."                      << "\n";
    cout << "11.Is empty?"                                     << "\n";
    cout << "*************************************************"<< "\n";
    cin >> choice;

    if(choice==1)
    {

       cout << "How many elements you would like to add?" << "\n";
       cin  >> number_OF_Elments;
       for(int i=0;i<number_OF_Elments;++i)
       {
           cin >> val ;
           vec.Push_back(val);
           ++Vector_Size;
       }
      YN1:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN1;
      }

    }

    else if(choice==2)
    {
        if(Vector_Size==0)
        {
            cout << "The vector already empty, you can't remove item." << "\n" ;
            goto menu;
        }
        else
        {
            vec.Pop_back();
            --Vector_Size;
            YN2:
            cout <<"Would you like to perform other operations? (Y/N)" << "\n";
            cin >> c2;

            if(c2=='Y')
            {
                goto menu;
            }
            else if (c2=='N')
            {

            }
            else
            {
                cout << "Wrong choice!" << endl;
                goto YN2;
            }
        }
    }


    else if(choice==3)
    {

         cout << "Enter position: " ;cin>> pos ;
         cout << "Enter value: ";cin>>val;

      /// this condition to avoid crashing.
      if(pos > Vector_Size+1)
      {
         cout << "You can't insert value in this position."<< "\n";
         goto menu;
      }

      vec.Insert(pos,val);
      ++Vector_Size;

      YN3:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;
      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN3;
      }



    }

    else if(choice==4)
    {

      if(Vector_Size==0)
      {
        cout << "vector is empty, you can't erase any element." << "\n" ;
        goto menu ;
      }

       cout << "Enter position: " ;
       cin >>pos;

       if(pos>Vector_Size )
       {
           cout << "\n";
           cout << "your position grater than size of vector." << "\n";
           cout << "You can't erase element in this position." << "\n";
           cout << "\n";
           goto menu;
       }

      vec.Erase(pos);
      --Vector_Size;

      YN4:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN4;
      }

    }

    else if(choice==5)
    {
        vec.Clear();
        Vector_Size=0;

      YN5:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN5;
      }

    }

    else if(choice==6)
    {
        if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

            cout<<vec.Front() << "\n";

      YN6:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN6;
      }

    }

    else if(choice==7)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
        cout<<vec.Back() << "\n";

      YN7:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN7;
      }

    }

    else if(choice==8)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
         cout << "Position: " ;cin >>pos;

        if( (pos) >Vector_Size )
        {
           cout << "This position greater than vector size."<< "\n";
            goto menu;
        }

         cout << vec.print_item_in_vector(pos) << "\n";

      YN8:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN8;
      }

    }

    else if(choice==9)
    {
        cout<<vec.Size()<<"\n";

      YN9:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN9;
      }

    }

    else if(choice==10)
    {
        cout<<vec.get_capacity()<<"\n";

      YN10:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN10;
      }

    }

    else if(choice==11)
    {
      vec.Empty();

      YN11:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN11;
      }

    }

    else
    {
        goto menu;
    }




}














void list_of_students()
{
    Student s;
    FCIvector<Student>vec;

    Course  c;
    FCIvector<Course>vec_C;

    int choice,pos,number_OF_Elments(0);
    char c2;
    /// count the number of  user make at least one push in vector.
    int Vector_Size(0);


    cout << "\n";
    cout << "A vector of Student is created successfully." << "\n";
    cout << "\n";

    menu:

    cout << "*************************************************"<< "\n";
    cout << "What kind of operation would you like to perform?"<< "\n";
    cout << "1. Add element."                                  << "\n";
    cout << "2. Remove last element."                          << "\n";
    cout << "3. Insert element at certain position."           << "\n";
    cout << "4. Erase element from a certain position."        << "\n";
    cout << "5. Clear."                                        << "\n";
    cout << "6. Display first element."                          << "\n";
    cout << "7. Display last element."                         << "\n";
    cout << "8. Display element at certain position."          << "\n";
    cout << "9. Display vector size."                          << "\n";
    cout << "10.Display vector capacity."                      << "\n";
    cout << "11.Is empty?"                                     << "\n";
    cout << "*************************************************"<< "\n";
    cin >> choice;

    if(choice==1)
    {

       cout << "How many elements you would like to add?" << "\n";
       cin  >> number_OF_Elments;
       for(int i=0;i<number_OF_Elments;++i)
       {

           cin >> s;
           cout << "Number of Courses: " << i+1 << "\n";
           cout << "Enter Course #"<< i+1 <<"info:" << "\n";
           cin  >> c;
           /*
           cout << "Course name: "; cin>>s.courseName;///vec.Push_back(s.courseName);
           cout << "Course code: "; cin>>s.courseCode;
           cout << "Course point: ";cin>>s.coursePoint;
           cout << "Course semester: ";cin>>s.courseSemester;
           cout << "Course year: ";cin>>s.courseYear;
           */

           vec.Push_back(s);
           vec_C.Push_back(c);
           ++Vector_Size;


           cout << "\n\n";
       }


      YN1:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN1;
      }

    }

    else if(choice==2)
    {
        if(Vector_Size==0)
        {
            cout << "The vector already empty, you can't remove item." << "\n" ;
            goto menu;
        }
        else
        {
            vec.Pop_back();
            vec_C.Pop_back();
            --Vector_Size;
            YN2:
            cout <<"Would you like to perform other operations? (Y/N)" << "\n";
            cin >> c2;

            if(c2=='Y')
            {
                goto menu;
            }
            else if (c2=='N')
            {

            }
            else
            {
                cout << "Wrong choice!" << endl;
                goto YN2;
            }
        }
    }


    else if(choice==3)
    {

         cout << "Enter position: "; cin>> pos ;
         cin>> s ;
         cin>> c;

      /// this condition to avoid crashing.
      if(pos > Vector_Size+1)
      {
         cout << "You can't insert value in this position."<< "\n";
         goto menu;
      }


      vec.Insert(pos,s);
      vec_C.Insert(pos,c);

///   vec_C.insert();
      ++Vector_Size;

      YN3:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;
      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN3;
      }



    }

    else if(choice==4)
    {

      if(Vector_Size==0)
      {
        cout << "vector is empty, you can't erase any element." << "\n" ;
        goto menu ;
      }

       cout << "Enter position: " ;
       cin >>pos;

       if(pos>Vector_Size )
       {
           cout << "\n";
           cout << "your position grater than size of vector." << "\n";
           cout << "You can't erase element in this position." << "\n";
           cout << "\n";
           goto menu;
       }

          vec.Erase(pos);
          vec_C.Erase(pos);

        --Vector_Size;

      YN4:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN4;
      }

    }

    else if(choice==5)
    {
        vec.Clear();
        vec_C.Clear();
        Vector_Size=0;

      YN5:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN5;
      }

    }

    else if(choice==6)
    {
        if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

            cout<<vec.Front();
            cout<<vec_C.Front();

      YN6:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN6;
      }

    }

    else if(choice==7)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }

        cout<<vec.Back() << "\n";
        cout<<vec_C.Back()<< "\n";

      YN7:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN7;
      }

    }

    else if(choice==8)
    {
         if(Vector_Size==0)
        {
            cout << "Vector is empty, you must add element firstly."<< "\n";
            goto menu;
        }
         cout << "Position: " ;cin >>pos;

        if( (pos) >Vector_Size )
        {
           cout << "This position greater than vector size."<< "\n";
            goto menu;
        }


         cout << vec.print_item_in_vector(pos) << "\n";
         cout << vec_C.print_item_in_vector(pos) << "\n";


      YN8:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN8;
      }

    }

    else if(choice==9)
    {
        cout<<vec.Size()<<"\n";

      YN9:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN9;
      }

    }

    else if(choice==10)
    {
        cout<<vec.get_capacity()<<"\n";

      YN10:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN10;
      }

    }

    else if(choice==11)
    {

      vec.Empty();

      YN11:
      cout <<"Would you like to perform other operations? (Y/N)" << "\n";
      cin >> c2;

      if(c2=='Y')
      {
          goto menu;
      }
      else if (c2=='N')
      {

      }
      else
      {
          cout << "Wrong choice!" << endl;
          goto YN11;
      }

    }

    else
    {
        goto menu;
    }

}




