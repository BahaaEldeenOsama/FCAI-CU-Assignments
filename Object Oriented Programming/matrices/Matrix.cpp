#include"Matrix.h"
#include <iostream>
using namespace std ;

void matrix::createMatrix (int row, int col,matrix& mat)
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

matrix::matrix(int row=0, int col=0 )
{
    this->col=col ;
    this->row=row ;
    cout << "Constructor!"<<endl;
}

matrix::~matrix()
{
    cout << endl;
    cout << "DeConstructor!"<<endl;
}

int matrix::get_row()
{
    return row ;
}
int matrix::get_col()
{
    return col ;
}
matrix matrix::operator+  (matrix mat1)
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
            mat.data[i][j] = this->data [i][j]+mat1.data[i][j] ;
        }
    }
    return mat;

}



/*




matrix operator-  (matrix mat1, matrix mat2)
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
            mat.data[i][j] = mat1.data[i][j] - mat2.data[i][j] ;
        }
    }
    return mat;
}


matrix operator*  (matrix mat1, matrix mat2)
{

    matrix mat ;
    createMatrix (mat1.row, mat1.col, mat);  //  mat1.row and mat2.col for boundary ;
                                             // mat1.row=row;
                                             // mat1.col=col ;
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

//*********************************************student (2) ************************************************

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


 ////////////////////////////////////////////////////////(ASK)//////////////////////////////////////////


matrix& operator++ (matrix& mat1 )
{

matrix mat ;
createMatrix(mat1.row , mat1.col , mat);
for(int i=0 ; i<mat1.row;i++)
{
          for(int j=0 ; j<mat1.col ; j++)
          {
                      mat.data[i][j] = mat1.data[i][j]++  ;
          }
}




return mat1;

/*
          matrix*ptr_mat = new matrix ;
          ptr_mat-> row =mat.row ;
          ptr_mat-> col =mat.col ;
          ptr_mat-> data =new int*[mat.row] ;
          for(int i=0 ; i<mat.row ;i++ )
          {
                    ptr_mat->data[i]= new int[mat.col] ;
          }

          return *ptr_mat ;
*//*
}


matrix& operator-- (matrix& mat1)
{

matrix mat ;
createMatrix(mat1.row , mat1.col , mat);
for(int i=0 ; i<mat1.row;i++)
{
          for(int j=0 ; j<mat1.col ; j++)
          {
                      mat.data[i][j] = mat1.data[i][j]--  ;
          }
}




return mat1;

}


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

bool   operator!= (matrix mat1, matrix mat2)
{


if ( (mat1.row&&mat1.col) == (mat2.row&&mat2.col) )
{

for (int i=0 ; i < mat1.row ; i++ )
{
          for(int j=0 ; j< mat1.col  ;j++)
          {
                    if (mat1.data[i][j] != mat2.data[i][j])
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

    // calculate the sum of        0  1  2
    // the prime diagonal    //0 |(1) 0  0 |     elcoter el raesy .
                            // 1 |0  (1) 0 |
                            // 2 |0   0 (1)|


    int sum = 0;
    for (int i = 0; i < mat.row; i++)
        sum +=mat.data[i][i];

    // For sums of Rows
    for (int i = 0; i < mat.row; i++) {

        int row_Sum = 0;
        for (int j = 0; j < mat.row; j++)
            row_Sum += mat.data[i][j];

        // check if every row sum is
        // equal to prime diagonal sum

        if (row_Sum != sum) // sum for row != sum of the prime diagonal
            return false;
    }


    // For sums of Columns
    for (int i = 0; i < mat.col; i++) {

        int col_Sum = 0;
        for (int j = 0; j < mat.col; j++)
            col_Sum += mat.data[j][i];

        // check if every column sum is
        // equal to prime diagonal sum
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



friend istream& operator>>(istream &in, matrix& mat)
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


friend ostream& operator<< (ostream& out, matrix mat)
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



 */
