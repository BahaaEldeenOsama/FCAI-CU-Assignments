
#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include<iostream>
using namespace std ;

class matrix
{
private :


    int** data;       // Pointer to 2-D array that will simulate matrix
    int row ;
    int col ;

public :

    matrix operator+ (matrix mat1);


   matrix(int row, int col);

    ~matrix();

    int get_row();
    int get_col();

    void createMatrix (int row, int col, matrix& mat);

    friend istream& operator>> (istream& in, matrix& mat);
    friend ostream& operator<< (ostream& out, matrix mat);


    matrix operator+  (matrix mat1, matrix mat2);

    matrix operator-  (matrix mat1, matrix mat2);
    matrix operator*  (matrix mat1, matrix mat2);
    matrix operator+  (matrix mat1, int scalar );
    matrix operator-  (matrix mat1, int scalar);
    matrix operator*  (matrix mat1,  int scalar);
    matrix operator+= (matrix& mat1, matrix mat2);
    matrix operator-= (matrix& mat1, matrix mat2);
    matrix operator+= (matrix& mat, int scalar) ;
    matrix operator-= (matrix& mat, int scalar);
    matrix& operator++ (matrix& mat1);
    matrix& operator-- (matrix& mat1);
    bool   operator== (matrix mat1, matrix mat2);
    bool   operator!= (matrix mat1, matrix mat2);
    bool   isSquare   (matrix mat);
    bool   isSymetric (matrix mat1);
    bool   isIdentity (matrix mat1);
    matrix transpose(matrix mat1);


};



#endif // MATRIX_H_INCLUDED
