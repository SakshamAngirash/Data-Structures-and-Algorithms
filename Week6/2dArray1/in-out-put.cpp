#include<iostream>
using namespace std; 
void input(int arr[][100],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
}
void display(int arr[][100],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   int m,n;
   cout<<"Enter number of rows and colums: ";
   cin>>m>>n;
   int arr[100][100];
   input(arr,m,n);
   display(arr,m,n);
}