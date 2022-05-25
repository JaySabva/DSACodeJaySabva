//Author->SABVA JAY DILIPBHAI
//Time Complexity
//Begin->O(1)
//End->O(n)
//Position->O(n-p)
//For unsorted array->O(1)
//O(N)
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the position to delete: ";
    cin>>pos;
    for(int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout<<"The array after deletion is: ";
    for(int i = 0; i < size - 1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
