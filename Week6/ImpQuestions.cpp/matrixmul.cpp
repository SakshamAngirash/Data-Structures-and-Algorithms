#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    //inputs for the first matrix
    int m,n;
    cout<<"Enter the number of rows and cols for M1  : ";
    cin>>m>>n;
    //inputing the second matrix
    int r,c;
    cout<<"Enter the number of rows and cols for M2  : ";
    cin>>r>>c;
    

    //initilaising two vectors for two matrices with respective size
    vector<vector<int>> m1(m,vector<int>(n));
    vector<vector<int>> m2(r,vector<int>(c));
    //result vector of dimension of m*c
    vector<vector<int>> res(m,vector<int>(c));
    
    if(n==r)
    {
        cout<<"Enter the Elements of M1: "<<endl;
        //input for first matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n;j++)
            {
                cin>>m1[i][j];
            }
        }
        cout<<"Enter the Elements of M2: "<<endl;
        //input for second matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c;j++)
            {
                cin>>m2[i][j];
            }
        }
        
        cout<<"Multiplication is possible "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < c; j++)
            {
                 for (int k = 0; k < n; k++)
                 {
                    res[i][j]+=m1[i][k]*m2[k][j];
                 }
                 
            } 
        }
        cout<<"Result: "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j< c; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }
    else{
        cout<<"Multiplication is not possible"<<endl;
    }
}