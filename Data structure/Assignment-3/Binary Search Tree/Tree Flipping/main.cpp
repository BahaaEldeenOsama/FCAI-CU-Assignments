#include<bits/stdc++.h>
using namespace std;


template<class T>
struct Tree
{
T value;
Tree*Left,*Right;
Tree(const T&v):value(v),Left(nullptr),Right(nullptr){}
};



template<class T>
void PrintInorder(Tree<T>*t)///(left,root,right)
{
    if(t==nullptr)
         return;
    PrintInorder(t->Left);
    cout << t->value << " ";
    PrintInorder(t->Right);
}




/// Flip tree.
template<class T>
void Flip(Tree<T>*t)
{
     if(t==nullptr)
        return;

    else
    {
        Flip(t->Left);
        Flip(t->Right);

         Tree<T>*temp;

        temp = t->Left;
        t->Left=t->Right;
        t->Right=temp;
    }
}





int main()
{
     Tree<int>*root=new Tree<int>(1);

     root->Right=new Tree<int>(3);
     root->Left=new Tree<int>(2);
     root->Left->Left=new Tree<int>(4);
     root->Left->Right=new Tree<int>(5);


    cout << "2. Tree Flipping.\n";
    cout << "*******************\n";
    cout << "Orignal tree.\n";
    PrintInorder(root);
    cout << "\n";

    Flip(root);

    cout << "New tree.\n";
    PrintInorder(root);
    cout << "\n";
    cout << "*******************\n\n";



return 0;}



