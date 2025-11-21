#include<iostream>
using namespace std;
int main()
{
    int *arr = new int[5]; // New function is used to create dynamic memory.
    for(int i = 0; i<5;i++)
    {
        cout<<"Enter the Value : "<<endl;
        cin>>arr[i];

    }
    for(int j = 0; j<5;j++)
    {
        cout<<arr[j]<<" ";

    }
    delete[] arr;
    return 0;
}