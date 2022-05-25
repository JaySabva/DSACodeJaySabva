#include<iostream>
//Author->SABVA JAY DILIPBHAI
//Queue Implementation using array
using namespace std;
class Queue
{
    int *arr;
    int front, rear, size;
    public:
    Queue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    void enqueue(int x)
    {
        if(rear == size-1)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front == -1)
            front = 0;
        rear++;
        arr[rear] = x;
    }
    int dequeue()
    {
        if(front == -1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = arr[front];
        front++;
        if(front == rear)
            front = rear = -1;
        return x;
    }
    void display()
    {
        if(front == -1)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front; i<=rear; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    int n, x;
    cout<<"Enter size of queue: ";
    cin>>n;
    Queue q(n);
    while(1)
    {
        cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin>>x;
        switch(x)
        {
            case 1:
                cout<<"Enter element to be enqueued: ";
                cin>>x;
                q.enqueue(x);
                break;
            case 2:
                x = q.dequeue();
                if(x != -1)
                    cout<<"Dequeued element is "<<x<<endl;
                break;
            case 3:
                q.display();
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}
