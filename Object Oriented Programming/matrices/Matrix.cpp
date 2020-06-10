// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0
// Coder: Bahaa El-Deen Osama

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
    int** data;       // Pointer to 2-D array that will simulate matrix
    int row, col;
};

void createMatrix (int row, int col, matrix& mat);
matrix operator+  (matrix mat1, matrix mat2); 
matrix operator-  (matrix mat1, matrix mat2); 
matrix operator*  (matrix mat1, matrix mat2); 

matrix operator+  (matrix mat1, int scalar );  
matrix operator-  (matrix mat1, int scalar);  
matrix operator*  (matrix mat1, int scalar); 

matrix operator+= (matrix& mat1, matrix mat2); 
matrix operator-= (matrix& mat1, matrix mat2);
matrix operator+= (matrix& mat, int scalar) ;  
matrix operator-= (matrix& mat, int scalar);   

matrix& operator++ (matrix& mat);   	
void   operator-- (matrix& mat);    	

istream& operator>> (istream& in, matrix& mat);
ostream& operator<< (ostream& out, matrix mat);

bool   operator== (matrix mat1, matrix mat2);	
bool   operator!= (matrix mat1, matrix mat2); 	
bool   isSquare   (matrix mat);  
bool   isSymetric (matrix mat1);                                                                                                                        
bool   isIdentity (matrix mat1); 
matrix transpose(matrix mat1);   





int main()
{
cout << "\t\t\t\t\t\t You are welcome in my program."                                <<endl;
cout << "\t\t\t\t\t\t My program about matrix and all Characteristics."              <<endl;
cout << "\t\t\t\t\t\t My name:Bahaa El_Deen Osama."                                  <<endl;
cout << "\t\t\t\t\t\t Level 2 computer science."                                     <<endl;
cout << "\t\t\t\t\t\t FCICU.\n\n\n\n\n\n\n.";

matrix mat1 ,mat2 ;


while(true)
{

manue:
char ichoice;
          cout <<"***********************************************" <<endl;
          cout << "Enter 0 to initialization two matrix. "          <<endl;
          cout << "Enter 1 to addition two matrix."                 <<endl;
          cout << "Enter 2 to Subtraction two matrix."              <<endl;
          cout << "Enter 3 to multiplication two matrix."           <<endl;
          cout << "Enter 4 to scalar of addition to any matrix."    <<endl;
          cout << "Enter 5 to scalar of Subtraction to any matrix." <<endl;
          cout << "Enter 6 to scalar of Subtraction to any matrix." <<endl;
          cout << "Enter 7 to addition value one to any matrix. "   <<endl;
          cout << "Enter 8 to Subtraction value one to any matrix." <<endl;
          cout << "Enter 9 to to do Comparison(==) between matrix." <<endl;
          cout << "Enter A to to do Comparison(Square) the matrix." <<endl;
          cout << "Enter B to to do Comparison(Symmetric)the matrix."<<endl;
          cout << "Enter C to to do Comparison(Identity)the matrix."<<endl;
          cout << "Enter D to to do Comparison(transpose)the matrix."<<endl;
          cout << "Enter E to exit."<<endl;
          cout << "*************************************************" <<endl;
          cout <<endl;
          cout << "make a choice....." ;
          cin  >>ichoice ;
          cout <<endl;


          if(ichoice== '0')
          {
          cin >> mat1 ;
          cin >>mat2  ;
          cout <<endl;
          cout << mat1 <<endl;
          cout <<endl;
          cout << mat2 <<endl;
          }
          else if(ichoice=='1')
          {
           cout << mat1+mat2 <<endl;

          }
          else if (ichoice=='2')
          {

           cout << mat1-mat2 <<endl;

          }
          else if (ichoice=='3')
          {
          cout << mat1*mat2 <<endl;

          }



          else if (ichoice=='4')
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
          else if (ichoice=='5')
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
          else if (ichoice=='6')
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
            else if(ichoice6=='2')
            {
                      cout<< mat2-scalar6 <<endl;
            }
            else
                    cout << "*******************************" <<endl;
                    cout << "Dear user , Enter valid number." <<endl;
                    cout << "*******************************" <<endl;
                    goto small_manue6;


          }
          else if (ichoice=='7')
          {


          }
          else if (ichoice=='8')
          {


          }
          else if (ichoice=='9')
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

          else if (ichoice=='A'  || ichoice== 'a')
          {
          // manu_A:
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
//                     goto manu_A ;
           }

          }


          else if (ichoice=='B'  ||ichoice== 'b')
          {
 //          manu_B:
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
   //                  goto manu_B ;
           }


          }
          else if (ichoice=='C'   || ichoice== 'c')
          {
     //      manu_c:
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
       //              goto manu_c ;
           }

          }
          else if (ichoice=='D' || ichoice=='d')
          {
          //int x=0 ;
        //   manu_d:
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
          //           goto manu_d ;
           }

          }
          else if (ichoice=='E'  ||ichoice=='e')
          {
                    break ;

          }
         else
          {
                    cout << "*******************************"<<endl;
                    cout << "Dear user ,enter valid number ."<<endl;
                    cout << "*******************************"<<endl;
            //        goto manue ;
          }


}


    return 0;
}






void createMatrix (int row, int col,matrix& mat)
{
    mat.row = row;  // for boundry rows
    mat.col = col;  // for boundry cols

    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat.data[i] = new int [col];

    for(int i=0 ; i<mat.row; i++ )
    {
        for(int j=0 ; j<mat.col; j++)
        {
            mat.data[i][j] =0 ;
        }
    }


}



matrix operator+  (matrix mat1, matrix mat2)
{
 //  mat1.row and mat2.col for boundary ;
                                             // mat1.row=row;
                                             // mat1.col=col ;
    matrix mat ;
    createMatrix (mat1.row, mat1.col, mat);
    for(int i=0 ; i<mat1.row; i++)
    {
        for(int j=0 ; j<mat1.col; j++)
        {
            mat.data[i][j] = mat1.data[i][j]+mat2.data[i][j] ;
        }
    }
    return mat;

}

matrix operator-  (matrix mat1, matrix mat2)
{
    matrix mat ;
    createMatrix (mat1.row, mat1.col, mat);
    for(int i=0 ; i<mat1.row; i++)
    {
        for(int j=0 ; j<mat1.col; j++)
        {
            mat.data[i][j] = mat1.data[i][j] - mat2.data[i][j] ;
        }
    }
    return mat;
}


matrix operator*  (matrix mat1, matrix mat2)
{

    matrix mat ;
    createMatrix (mat1.row, mat1.col, mat);  
                                             
    for(int i=0; i<mat1.row; i++)
    {

        for(int j=0; j<mat2.col; j++)
        {

            for(int k= 0 ;k<mat2.row;k++)
            {

                mat.data[i][j] +=mat1.data[i][k] * mat2.data[k][j];
            }
        }
    }

    return mat;
}


matrix operator+  (matrix mat1, int scalar ) //  n to increament by any value to matrix the user can enter .
{

	for (int i=0; i<mat1.row; i++)
                    {
		for (int j=0; j<mat1.col;j++)
			{
			          mat1.data[i][j] = scalar + mat1.data[i][j];
			}
                   }
    return mat1;

}

matrix operator-  (matrix mat1, int scalar)
{
	for (int i=0; i<mat1.row; i++)
                    {
		for (int j=0; j<mat1.col;j++)
			{
			          mat1.data[i][j] = mat1.data[i][j]-scalar ;
			}
                   }
    return mat1;
}

matrix operator*  (matrix mat1, int scalar)
{
          for (int i=0; i<mat1.row; i++)
                    {
		for (int j=0; j<mat1.col;j++)
			{
			          mat1.data[i][j] = mat1.data[i][j]*scalar ;
			}
                   }
    return mat1;
}


matrix operator+= (matrix& mat1, matrix mat2)
{


     for(int i=0 ; i<mat1.row; i++)
    {
        for(int j=0 ; j<mat1.col; j++)
        {
            mat1.data[i][j] += mat2.data[i][j] ;
        }
    }
    return mat1;
}



matrix operator -= (matrix& mat1, matrix mat2)
{

    for(int i=0 ; i<mat1.row; i++)
    {
        for(int j=0 ; j<mat1.col; j++)
        {
            mat1.data[i][j] -= mat2.data[i][j] ;
        }
    }
    return mat1;
}

 //take notes from doctor el ramle

matrix operator+= (matrix& mat, int scalar)
{


	for (int i=0; i<mat.row; i++)
                    {
		for (int j=0; j<mat.col;j++)
			{
			          mat.data[i][j] += scalar ;
			}
                   }
    return mat;

}

matrix operator-= (matrix& mat, int scalar)
{

	for (int i=0; i<mat.row; i++)
                    {
		for (int j=0; j<mat.col;j++)
			{
			          mat.data[i][j] -= scalar ;
			}
                   }
    return mat;


}



matrix& operator++ (matrix& mat )
{

          matrix*ptr_mat = new matrix ;
          ptr_mat-> row =mat.row ;
          ptr_mat-> col =mat.col ;
          ptr_mat-> data =new int*[mat.row] ;
          for(int i=0 ; i<mat.row ;i++ )
          {
                    ptr_mat->data[i]= new int[mat.col] ;
          }

          return *ptr_mat ;
}
/*
~matrix()
{
          delete[] *ptr_mat ;

}
*/


bool   operator == (matrix mat1, matrix mat2)
{

if ( (mat1.row&&mat1.col) == (mat2.row&&mat2.col) )
{

for (int i=0 ; i < mat1.row ; i++ )
{
          for(int j=0 ; j< mat1.col  ;j++)
          {
                    if (mat1.data[i][j] == mat2.data[i][j])
                    {
                    continue ;
                    }

                    else
                     {
                       return false ;
                       break  ;
                     }
          }

}

}

return true ;
}


bool   isSquare   (matrix mat)
{

    int sum = 0;
    for (int i = 0; i < mat.row; i++)
        sum +=mat.data[i][i];

    // For sums of Rows
    for (int i = 0; i < mat.row; i++) {

        int row_Sum = 0;
        for (int j = 0; j < mat.row; j++)
            row_Sum += mat.data[i][j];

        if (row_Sum != sum) // sum for row != sum of the prime diagonal
            return false;
    }


    for (int i = 0; i < mat.col; i++) {

        int col_Sum = 0;
        for (int j = 0; j < mat.col; j++)
            col_Sum += mat.data[j][i];

        if (sum != col_Sum)//  sum for row != sum of the prime diagonal
        return false;
    }

    return true;


}



bool   isSymetric (matrix mat1)
{

for(int i=0 ; i<mat1.row ; i++)
{
          for(int j=0 ; j<mat1.col ; j++)
          {
                    if(mat1.data[i][j]!=mat1.data[j][i])
                              return false ;
          }

        return true ;
}


}


bool   isIdentity (matrix mat1)
{

         if(isSquare(mat1)== true)
         {
                   return true ;
         }
         else
                return false ;




}


matrix transpose(matrix mat1)
{

matrix  mat_transpose ;
createMatrix( mat1.row , mat1.col , mat_transpose);
          for(int i=0 ; i<mat1.row ;i++)
          {
                    for(int j=0 ;j<mat1.col ; j++ )
                    {
                              mat_transpose.data[j][i] = mat1.data[i][j] ;
                    }
          }

return mat_transpose ;
}



istream& operator>>(istream &in, matrix& mat)
{


    cout << "Enter your matrix like row and col.*__*. " <<endl;
    cout << "Enter row : ";
    in >> mat.row ;
    cout << "Enter col : " ;
    in >> mat.col ;

    mat.data = new int* [mat.row];
    for (int i = 0; i < mat.row; i++)
        {
          mat.data[i] = new int [mat.col];
        }


    for(int i=0 ; i<mat.row; i++ )
    {
        cout<< "Enter values of row [" << i+1 << "]" << " " ;
        for(int j=0 ; j<mat.col; j++)
        {
            in>>mat.data[i][j] ;
        }
    }
    cout << "___________________________________________" <<endl;
    return in ;
}


ostream& operator<< (ostream& out, matrix mat)
{
    for(int i=0 ; i<mat.row; i++ )
    {

        for(int j=0 ; j<mat.col; j++)
        {
            out<<mat.data[i][j] << " " ;
        }
        out << endl;

    }
    return out ;
}
