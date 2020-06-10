#include <bits/stdc++.h>
using namespace std;


class doublyLinkedList
{
    struct Node
    {
        int item;
        Node *next,*prev;
    };
    Node *first,*last;
    int length;


   public:

    doublyLinkedList(){first=last=nullptr;length=0;}

    bool isEmpty();///OK
    void destroy();///OK
    void insertLast(int element);///OK
    void insertFirst(int element);///OK
    void insertAt(int pos, int element);

    void removeFirst();
    void deleteNthNode(int pos);
    void removeLast();
    void removee(int item);
    void reverse_display();

    void display();
};


bool doublyLinkedList::isEmpty()
{
    return(first==nullptr);
}


void doublyLinkedList::destroy()
{
    Node *temp;
    while(first!=nullptr)
    {
        temp=first;
        first=first->next;
        delete temp;
    }
    last=nullptr;
    length=0;
}


void doublyLinkedList::insertLast(int element)
{
    Node*newNode = new Node();
    newNode->item = element;

    if(!length)
    {
        first=last = newNode;
        newNode->prev = newNode->next = nullptr;
    }
    else
    {
        newNode->next =nullptr;
        newNode->prev =last;
        last->next =newNode;
        last=newNode;
    }
    ++length;
}


void doublyLinkedList::insertFirst(int element)
{
    Node* newNode = new Node();
    newNode->item=element;
    if(!element)
    {
        first=last=newNode;
        newNode->prev=newNode->next=nullptr;
    }
    else
    {
       newNode->next =first;
       newNode->prev=nullptr;
       first->prev =newNode;
       first=newNode;
    }
    ++length;
}






void doublyLinkedList::display()
{
    if(isEmpty())
    {
        cout <<  "Empty List Can't Display...!\n";
    }
    else
    {

        Node *Curr=first;
        while(Curr!=nullptr)
        {
            cout << Curr->item << " ";
            Curr=Curr->next;
        }
        cout<<endl;
    }
}


int main()
{
doublyLinkedList dl;



dl.insertAt(0, 4);
dl.insertAt(1, 6);
dl.insertAt(2, 7);

dl.display();

    return 0;
}


