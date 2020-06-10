#include<bits/stdc++.h>
using namespace std;


template<class T>
struct Tree
{
T value;
Tree*Left,*Right;
Tree(const T&v):value(v),Left(nullptr),Right(nullptr){}
};



///Print.
template<class T>
void PrintPostorder(Tree<T>*t)///(left,right,root)
{
    if(t==nullptr)
        return;
   PrintPostorder(t->Left);
   PrintPostorder(t->Right);
   cout<<t->value<< " ";
}
template<class T>
void PrintPreorder(Tree<T>*t)///(root,left,right)
{
    if(t==nullptr)
        return;
   cout << t->value << " ";
   PrintPreorder(t->Left);
   PrintPreorder(t->Right);
}
template<class T>
void PrintInorder(Tree<T>*t)///(left,root,right)
{
    if(t==nullptr)
         return;
    PrintInorder(t->Left);
    cout << t->value << " ";
    PrintInorder(t->Right);
}





int main()
{
     Tree<int>*root=new Tree<int>(1);

     root->Right=new Tree<int>(3);
     root->Left=new Tree<int>(2);
     root->Left->Left=new Tree<int>(4);
     root->Left->Right=new Tree<int>(5);

     cout << "1. print Tree.\n";
     cout << "*******************\n";
     cout<< "postorder.\n";
     PrintPostorder(root);
     cout << "\n";

     cout<< "preorder.\n";
     PrintPreorder(root);
     cout << "\n";

     cout<< "Inorder.\n";
     PrintInorder(root);
     cout << "\n";
     cout << "*******************\n\n";


return 0;}

