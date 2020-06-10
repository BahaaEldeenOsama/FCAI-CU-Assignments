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



    cout << "4. Branches Sum.\n";
    cout << "************************\n";
    long sum = branchesSum(root);
    cout << "The sum of Tree is = "<<sum<<endl;
    cout << "************************\n\n\n\n";



return 0;}




