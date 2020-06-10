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
int TreeSumEachPath(Tree<T>*t, int val)
{

    if (t==nullptr) return 0;
    val = (val*10 + t->value);
    if (t->Left==nullptr && t->Right==nullptr)
    return val;

    return TreeSumEachPath(t->Left, val)+TreeSumEachPath(t->Right, val);
}


template<class T>
long branchesSum(Tree<T>*t)
{
    return TreeSumEachPath(t, 0);
}







int main()
{
     Tree<int>*root=new Tree<int>(1);

     root->Right=new Tree<int>(3);
     root->Left=new Tree<int>(2);
     root->Left->Left=new Tree<int>(4);
     root->Left->Right=new Tree<int>(5);


    cout << "4. Branches Sum.\n";
    cout << "************************\n";
    long sum = branchesSum(root);
    cout << "The sum of Tree is = "<<sum<<endl;
    cout << "************************\n\n\n\n";



return 0;}
