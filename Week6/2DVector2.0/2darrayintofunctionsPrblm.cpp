#include<iostream>
using namespace std; 
void change(int a[])
{
    a[0]=9;
}
void change2d(int a[][3])
{
    a[0][0]=9;
}
int main ()
{
    /*int a[3]={1,2,3};
    change(a);//succesfully changing the value
    cout<<a[0]<<endl;*/
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[0][0]<<endl;;

}