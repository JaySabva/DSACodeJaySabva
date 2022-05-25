#include<iostream>
//Author-SABVA JAY DILIPBHAI
//Stack Implementation using linked list
using namespace std;
class node
{
    public:
    int data;
    node* link;
};
node* top;
void push(int val)
{
    node* temp=new node();
    if(!temp)
    {
        cout<<"\nStack Overflow";
        return;
    }
    temp->data=val;
    temp->link=top;
    top=temp;
}
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    node* temp=new node();
    if(!temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if(isEmpty())
    {
        cout<<"\nStack Underflow";
        return -1;
    }
    else
    {
        return top->data;
    }
}
void pop()
{
    if(isEmpty())
    {
        cout<<"\nStack Underflow";
        return;
    }
    else
    {
        node* temp=top;
        top=top->link;
        delete temp;
    }
}
void display()
{
    node* temp=top;
    if(isEmpty())
    {
        cout<<"\nStack Underflow";
        return;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
    }
}
int main()
{
    int ch;
    do
    {
        cout<<"\n1.Push\n2.Pop\n3.Peek\n4.isEmpty\n5.isFull\n6.Display\n7.Exit\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                int val;
                cout<<"\nEnter the value to be pushed:";
                cin>>val;
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                cout<<"\nPeeked value is:"<<peek();
                break;
            }
            case 4:
            {
                if(isEmpty())
                {
                    cout<<"\nStack is empty";
                }
                else
                {
                    cout<<"\nStack is not empty";
                }
                break;
            }
            case 5:
            {
                if(isFull())
                {
                    cout<<"\nStack is full";
                }
                else
                {
                    cout<<"\nStack is not full";
                }
                break;
            }
            case 6:
            {
                display();
                break;
            }
            case 7:
            {
                break;
            }
            default:
            {
                cout<<"\nInvalid choice";
            }
        }
    }while(ch!=7);
    
    return 0;

}
