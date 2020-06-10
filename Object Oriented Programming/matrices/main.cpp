#include <iostream>
#include"Matrix.h"

using namespace std;


int main()
{


  matrix mat1.data[2][2]={1,1,1,1};
          
starting_point:
    matrix mat1,mat2 ;
    char x ;
    
    cout << "______________________________________"<<endl;
    cout << "Enter 0 to initialization two matrix. "<<endl;
    cout << "______________________________________"<<endl;
    cout << "Make a choice...." ;
    cin  >> x ;
    cout <<endl;
    cout <<endl;
    if(x=='0')
    {
        cout<<endl;
        cout <<endl;
        cin >> mat1 ;
        cin >>mat2  ;
        cout <<endl;
        cout << mat1 <<endl;
        cout <<endl;
        cout << mat2 <<endl;
        cout <<endl;
        cout <<endl;
    }
    else
    {
        cout << "Dear user,enter valid number."<<endl;
        goto starting_point;
    }



    while(true)

    {
manue:

        char choice_manue ;

        cout <<endl;
        cout <<"***********************************************" <<endl;
        cout << "Enter 1 to addition two matrix."                 <<endl;
        cout << "Enter 2 to Subtraction two matrix."              <<endl;
        cout << "Enter 3 to multiplication two matrix."           <<endl;
        cout << "Enter 4 to scalar of addition to any matrix."    <<endl;
        cout << "Enter 5 to scalar of Subtraction to any matrix." <<endl;
        cout << "Enter 6 to scalar of multiplication to any matrix." <<endl;
        cout << "Enter 7 to addition value one to any matrix. "   <<endl;
        cout << "Enter 8 to Subtraction value one to any matrix." <<endl;
        cout << "Enter 9 to to do Comparison(==) between matrix." <<endl;
        cout << "Enter A to to do Comparison(!=) between matrix." <<endl;
        cout << "Enter B to to do Comparison(Square) the matrix." <<endl;
        cout << "Enter C to to do Comparison(Symmetric)the matrix."<<endl;
        cout << "Enter D to to do Comparison(Identity)the matrix."<<endl;
        cout << "Enter E to to do Comparison(transpose)the matrix."<<endl;
        cout << "Enter F to exit."<<endl;
        cout << "*************************************************" <<endl;
        cout <<endl;
        cout << "make a choice....." ;
        cin  >>choice_manue ;
        cout <<endl;


        if(choice_manue=='1')
        {
            cout << mat1+mat2 <<endl;

        }
        else if (choice_manue=='2')
        {

            cout << mat1-mat2 <<endl;

        }
        else if (choice_manue=='3')
        {
            cout << mat1*mat2 <<endl;

        }



        else if (choice_manue=='4')
        {
small_manue4:
            int scalar4;
            char ichoice4 ;
            cout << "Enter value of scalar : " ;
            cin  >> scalar4 ;
            cout <<endl;
            cout << "*************************************************"<<endl;
            cout <<"If you want to scalar add with matrix one...Enter (1) "<<endl;
            cout <<"If you want to scalar add with matrix two...Enter (2) "<<endl;
            cout << "*************************************************"<<endl;
            cout << "Make a choice....";
            cin  >>ichoice4 ;
            if(ichoice4=='1')
            {
                cout<< mat1+scalar4 <<endl;
            }
            else if(ichoice4=='2')
            {
                cout<< mat2+scalar4 <<endl;
            }
            else
                cout << "*******************************" <<endl;
            cout << "Dear user , Enter valid number." <<endl;
            cout << "*******************************" <<endl;
            goto small_manue4;

        }
        else if (choice_manue=='5')
        {
small_manue5:
            int scalar5;
            char ichoice5 ;
            cout << "Enter value of scalar : " ;
            cin  >> scalar5 ;
            cout <<endl;
            cout << "*************************************************"<<endl;
            cout <<"If you want to scalar sub with matrix one...Enter (1) "<<endl;
            cout <<"If you want to scalar sub with matrix two...Enter (2) "<<endl;
            cout << "*************************************************"<<endl;
            cout << "Make a choice....";
            cin  >>ichoice5 ;
            if(ichoice5=='1')
            {
                cout<< mat1-scalar5 <<endl;
            }
            else if(ichoice5=='2')
            {
                cout<< mat2-scalar5 <<endl;
            }
            else
                cout << "*******************************" <<endl;
            cout << "Dear user , Enter valid number." <<endl;
            cout << "*******************************" <<endl;
            goto small_manue5;

        }
        else if (choice_manue=='6')
        {
small_manue6:
            int scalar6;
            char ichoice6 ;
            cout << "Enter value of scalar : " ;
            cin  >> scalar6 ;
            cout <<endl;
            cout << "*************************************************"<<endl;
            cout <<"If you want to scalar with matrix one...Enter (1) "<<endl;
            cout <<"If you want to scalar with matrix two...Enter (2) "<<endl;
            cout << "*************************************************"<<endl;
            cout << "Make a choice....";
            cin  >>ichoice6 ;
            if(ichoice6=='1')
            {
                cout<< mat1-scalar6 <<endl;
            }
            else if(choice_manue=='2')
            {
                cout<< mat2-scalar6 <<endl;
            }
            else
                cout << "*******************************" <<endl;
            cout << "Dear user , Enter valid number." <<endl;
            cout << "*******************************" <<endl;
            goto small_manue6;


        }
        else if (choice_manue=='7')
        {
siven:
            char x;
            cout << "*****************************************"<<endl;
            cout << "To matrix one...Enter (1)"<<endl;
            cout << "To matrix two...Enter (2)"<<endl;
            cout << "*****************************************"<<endl;
            cout << "Make a choice...";
            cin  >> x ;
            if(x=='1')
            {
                ++mat1 ;
                cout <<endl;
                cout << mat1<<endl;
                cout <<endl;

            }
            else if (x=='2')
            {
                ++mat2 ;
                cout <<endl;
                cout << mat2<<endl;
                cout <<endl;

            }
            else
            {
                goto siven ;
            }

        }

        else if (choice_manue=='8')
        {
eight:
            char x;
            cout << "*****************************************"<<endl;
            cout << "To matrix one...Enter (1)"<<endl;
            cout << "To matrix two...Enter (2)"<<endl;
            cout << "*****************************************"<<endl;
            cout << "Make a choice...";
            cin  >> x ;
            if(x=='1')
            {
                --mat1 ;
                cout <<endl;
                cout << mat1<<endl;
                cout <<endl;

            }
            else if (x=='2')
            {
                --mat2 ;
                cout <<endl;
                cout << mat2<<endl;
                cout <<endl;

            }
            else
            {
                goto eight ;
            }


        }
        else if (choice_manue=='9')
        {
            cout << "operation == ."<<endl;
            cout << "if they identical will print true,else print false."<<endl;
            if(mat1==mat2)
            {
                cout << "True." <<endl;
            }
            else
                cout << "False."<<endl;

        }

        else if (choice_manue=='A' || choice_manue== 'a')
        {
            cout << "operation != ."<<endl;
            cout << "if they not identical will print true,else print false."<<endl;
            if(mat1!=mat2)
            {
                cout << "True." <<endl;
            }
            else
                cout << "False."<<endl;
        }


        else if (choice_manue=='B'  || choice_manue== 'b')
        {
manu_A:
            char ichoice_A ;
            cout << "operation Square ."<<endl;
            cout << "if it Square will print true,else print false."<<endl;

            cout << "*******************************************************"<<endl;
            cout << "If you want operation apply with matrix one...Enter(1)."<<endl;
            cout << "If you want operation apply with matrix one...Enter(2)."<<endl;
            cout << "*******************************************************"<<endl;
            cin >>ichoice_A ;
            if (ichoice_A=='1')
            {
                if(isSquare(mat1))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else if(ichoice_A=='2')
            {
                if(isSquare(mat2))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else
            {
                goto manu_A ;
            }

        }


        else if (choice_manue=='C'  ||choice_manue== 'c')
        {
manu_B:
            char ichoice_B ;
            cout << "operation symmetric."<<endl;
            cout << "if it symmetric will print true,else print false."<<endl;

            cout << "*******************************************************"<<endl;
            cout << "If you want operation apply with matrix one...Enter(1)."<<endl;
            cout << "If you want operation apply with matrix one...Enter(2)."<<endl;
            cout << "*******************************************************"<<endl;
            cin>>ichoice_B ;
            if (ichoice_B=='1')
            {
                if(isSymetric(mat1))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else if(ichoice_B=='2')
            {
                if(isSymetric(mat2))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else
            {
                goto manu_B ;
            }


        }
        else if (choice_manue=='D'   || choice_manue== 'd')
        {
manu_c:
            char ichoice_c ;
            cout << "operation Identity."<<endl;
            cout << "if it Identity will print true,else print false."<<endl;

            cout << "*******************************************************"<<endl;
            cout << "If you want operation apply with matrix one...Enter(1)."<<endl;
            cout << "If you want operation apply with matrix one...Enter(2)."<<endl;
            cout << "*******************************************************"<<endl;
            cin >>ichoice_c ;
            if (ichoice_c=='1')
            {
                if(isIdentity(mat1))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else if(ichoice_c=='2')
            {
                if(isIdentity(mat2))
                {
                    cout << "True." <<endl;
                }
                else
                    cout << "False."<<endl;

            }
            else
            {
                goto manu_c ;
            }

        }
        else if (choice_manue=='E' || choice_manue=='e')
        {
            int y=0 ;
manu_d:
            char ichoice_d ;
            cout << "operation transpose."<<endl;
            cout << "if it transpose ,the row will be col."<<endl;

            cout << "*******************************************************"<<endl;
            cout << "If you want operation apply with matrix one...Enter(1)."<<endl;
            cout << "If you want operation apply with matrix two...Enter(2)."<<endl;
            cout << "*******************************************************"<<endl;
            cin  >> ichoice_d;
            if (ichoice_d=='1')
            {
                cout<<(transpose(mat1))<<endl;

            }
            else if(ichoice_d=='2')
            {
                cout<<(transpose(mat2))<<endl;
            }

            else
            {
                goto manu_d ;
            }

        }
        else if (choice_manue=='F'  ||  choice_manue =='f')
        {
            break ;

        }
        else
        {
            cout << "*******************************"<<endl;
            cout << "Dear user ,enter valid number ."<<endl;
            cout << "*******************************"<<endl;

            goto manue ;
        }


    }


    return 0;
}
