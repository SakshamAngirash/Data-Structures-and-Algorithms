#include<iostream>
using namespace std;
int main()
{
   int n=4;
   int matrix[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   //step 1: Transpose 
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        swap(matrix[i][j],matrix[j][i]);
     }
   }
   //step2: swap half of the columns
   for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n/2 ; j++)
     {
        swap(matrix[i][j],matrix[i][n-j-1]);
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