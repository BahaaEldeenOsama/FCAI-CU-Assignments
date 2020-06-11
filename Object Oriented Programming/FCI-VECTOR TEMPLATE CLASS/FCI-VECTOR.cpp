#include "FCI-VECTOR.h"
#include "FCI_COURS.h"
#include "FCI_STUDENT.h"
using namespace std ;


template<class T>
FCIvector<T>::FCIvector()
{
this->sz=0;
this->capacity=1000;
this->arr=new T[1000];
}



template<class T>
T* FCIvector<T>::get_elements()
{
    return elements;
}
template<class T>
T FCIvector<T>::get_number_OF_Elments()
{
    return number_OF_Elments;
}


template<class T>
int FCIvector<T>::Size()
{
   return sz;
}


template<class T>
bool FCIvector<T>::Empty()
{
    if(sz)
    {
        cout << "False" << "\n" ;
        return 1;
    }
    else
    {
        cout << "True" << "\n" ;
        return 0;
    }
}

template<class T>
T&FCIvector<T>::Front()  {return arr[0];}


template<class T>
T&FCIvector<T>::Back()   {return arr[sz-1];}


template<class T>
T&FCIvector<T>::print_item_in_vector(int pos) {return arr[pos-1];}


template<class T>
void FCIvector<T>::Insert(int position,T val)
{
    ++sz;
    for(int i=sz;i>=position;--i)
        {
            arr[i]=arr[i-1];///increase your item in new array.
        }
        arr[--position]= val;
}


///  increase size each time.
template<class T>
void FCIvector<T>::Push_back(T val)
{
    arr[sz++] = val;
}


/// in fact,i cant remove item in array,but i ignore it in last of array.
template<class T>
void FCIvector<T>::Pop_back()
{

    if(sz)
    {
        --sz;
    }
    else
    {
        cout << "Vector is empty." << "\n" ;
    }
}


template<class T>
void FCIvector<T>::Clear()             {sz=0;}



/// in fact,i cant remove item in array,but i ignore it in last of array.
template<class T>
void FCIvector<T>::Erase(int position)
{
if(position>sz)
{
    cout << "can't remove element,because your position greater than size of vector." << "\n";
}
else
{
    --position;
    for(int i=position ;i<sz ;++i)
    {
        arr[i]=arr[i+1];
    }
    --sz;
}
}









///int FCIvector::get_capacity() { return 1000;}
/*
///template<class T>
int FCIvector::Capacity()
{
   return 1e3;
}
*/
