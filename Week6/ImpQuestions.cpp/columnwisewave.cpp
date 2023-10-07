#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    int m,n;
    cout<<"Enter the size of matrix: ";
    cin>>m>>n;
    //declaration of the martrix
    vector<vector<int>> matrix(m,vector<int>(n));
    //taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
       if(i%2==0){
       for (int j = 0; j < m; j++)
       {
          cout<<matrix[j][i]<<" ";
       }
       }
       else{
        for (int j = m-1; j >= 0; j--)
        {
           cout<<matrix[j][i]<<" ";
        }

       }
       
    }
    
   
    
}