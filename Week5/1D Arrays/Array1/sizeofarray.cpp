#include<iostream>
using namespace std;
int main()
{
    //to find the length of an array
    int arr[]={1,2,3,4,5,6};
    int size= sizeof(arr);
    int size_element=sizeof(arr[0]);
    int length=size/size_element;
    cout<<"Length of array : "<<length;
    
}