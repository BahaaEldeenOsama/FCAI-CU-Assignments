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
void subLargestValues(vector<int>& res, Tree<T>*t, int level)
{
    if (t==nullptr)
       return;

    if (level == res.size())
        res.push_back(t->value);

    else

        res[level] = max(res[level], t->value);
    subLargestValues(res,t->Left, level + 1);
    subLargestValues(res,t->Right, level + 1);
}


template<class T>
vector<int> largestValues(Tree<T>*t)
{
    vector<int> res;
    subLargestValues(res, t, 0);
    return res;
}





int main()
{
     Tree<int>*root=new Tree<int>(1);

     root->Right=new Tree<int>(3);
     root->Left=new Tree<int>(2);
     root->Left->Left=new Tree<int>(4);
     root->Left->Right=new Tree<int>(5);


    cout << "3. Largest Values.\n";
    cout << "**********************************\n";
    cout << "Largest values in tree are ";
    vector<int>res=largestValues(root);
    cout << "[ ";
    for(int i=0 ; i<res.size();++i)
    {
        cout<<res[i]<< " ";
    }
    cout << "]";
    cout << "\n";
    cout << "**********************************\n\n";



return 0;}
