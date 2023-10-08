#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of sq. matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //finding out the transpose 
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    /*for ( int i = 0; i < 3; i++)
    {
     for (int j = 0; j < 3; j++)
     {
        cout<<matrix[i][j]<<" ";
     }
     cout<<endl;
   }*/

   for (int j = 0; j < n; j++)
   {
       for (int i = 0; i < n/2; i++)
       {
          swap(matrix[i][j],matrix[n-i-1][j]);
       }
       
   }
   for ( int i = 0; i < n; i++)
    {
     for (int j = 0; j < n; j++)
     {
        cout<<matrix[i][j]<<" ";
     }
     cout<<endl;
    }
   
   
    
}
