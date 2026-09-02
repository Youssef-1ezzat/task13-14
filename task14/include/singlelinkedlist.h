#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include <iostream>

using namespace std;

class singlelinkedlist
{
private:
    struct Node
    {
        int item;
        Node*next;
    };

    int length;
    Node*left;
    Node*right;

public:
    singlelinkedlist()
    {
        length=0;
        left=right=NULL;
    }

    bool isEmpty()
    {
        return length==0;
    }

    void insertRight(int value)
    {
        Node *newNode=new Node;
        newNode->item=value;
        newNode->next=NULL;

        if(length==0)
        {
            left=right=newNode;
        }
        else
        {
            right->next=newNode;
            right=newNode;
        }

        length++;
    }

    void display()
    {
        Node *x=left;

        while(x!=NULL)
        {
            cout<<x->item<<" ";
            x=x->next;
        }

        cout<<endl;
    }

    void search(int value)
    {
        Node *x=left;

        while(x!=NULL)
        {
            if(x->item==value)
            {
                cout<<"Found"<<endl;
                return;
            }

            x=x->next;
        }

        cout<<"Not Found"<<endl;
    }

    void remove(int value)
    {
        if(length==0)
            return;

        if(left->item==value)
        {
            Node *x=left;
            left=left->next;
            delete x;
            length--;

            if(length==0)
                right=NULL;

            return;
        }

        Node *x=left;

        while(x->next!=NULL && x->next->item!=value)
        {
            x=x->next;
        }

        if(x->next!=NULL)
        {
            Node *y=x->next;
            x->next=y->next;

            if(y==right)
                right=x;

            delete y;
            length--;
        }
    }
};

#endif // SINGLELINKEDLIST_H
