//Author-SABVA JAY DILIPBHAI
//Time Complexity
//Begining ->O(n)
//Position ->O(n-p)
//Ending ->O(1)
#include<iostream>
using namespace std;
int main()
{
    int size,x,pos;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    cout<<"Enter the element to be inserted: ";
    cin>>x;
    cout<<"Enter the position: ";
    cin>>pos;
    if(pos > size)
    {
        cout<<"Invalid position"<<endl;
        return 0;
    }
    for(int i=size-1;i>=pos;i--)//Ek Ek Element Next Side Transfer Karvanu
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    cout<<"The array after insertion is: ";
    for(int i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
