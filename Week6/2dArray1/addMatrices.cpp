#include<iostream>
using namespace std; 
int main(){
    int arr[3][3]={1,1,1,1,1,1,1,1,1};
    int arr2[3][3]={1,1,1,1,1,1,2,2,2};
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]+=arr2[i][j];
        }
        
    }
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}