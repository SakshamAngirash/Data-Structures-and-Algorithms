#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=arr;//these both are address
    //int *ptr1=&arr;//this one is wrong
    int *ptr2=&arr[0];
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<endl;//it will work
    }
    //using pointer we can modify the array without using 
    // derefernce operator
}