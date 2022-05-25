#include<iostream>
//Author->SABVA JAY DILIPBHAI
//Stack Implementation using array
using namespace std;
class stack
{
    int top;
    int size;
    int *arr;
    public:
    stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[size];
    }
    void push(int x)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int x=arr[top];
        top--;
        return x;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==size-1)
            return true;
        else
            return false;
    }
};
int main()
{
    int size;
    cout<<"Enter the size of stack"<<endl;
    cin>>size;
    stack s(size);
    int ch;
    do
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.IsEmpty"<<endl;
        cout<<"5.IsFull"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                int x;
                cout<<"Enter the element to be pushed"<<endl;
                cin>>x;
                s.push(x);
                break;
            }
            case 2:
            {
                int x=s.pop();
                if(x!=-1)
                    cout<<"Popped element is "<<x<<endl;
                break;
            }
            case 3:
            {
                int x=s.peek();
                if(x!=-1)
                    cout<<"Peeked element is "<<x<<endl;
                break;
            }
            case 4:
            {
                if(s.isEmpty())
                    cout<<"Stack is empty"<<endl;
                else
                    cout<<"Stack is not empty"<<endl;
                break;
            }
            case 5:
            {
                if(s.isFull())
                    cout<<"Stack is full"<<endl;
                else
                    cout<<"Stack is not full"<<endl;
                break;
            }
            case 6:
            {
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }while(ch!=6);
    return 0;
    
}
