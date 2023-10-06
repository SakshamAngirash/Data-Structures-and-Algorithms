#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of r and c : ";
    cin>>m>>n;
    int arr[m][n];
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[i][j]=arr[j][i];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}