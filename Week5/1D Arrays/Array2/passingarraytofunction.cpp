#include<iostream>
using namespace std;
void display(int a[])//this is equivalent to int *a
{
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    } 
}
void update(int b[])
{
    b[0]=0;
}
int main()
{
    int arr[]={1,2,3,4,5};
    //accesing the elements of array while passing in function
    //updation : pass by value/pass by reference
    display(arr);
    cout<<endl;
    update(arr);//array are always send by pass by reference
    display(arr);

}