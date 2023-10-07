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
        cout<<"Multiplication is possible "<<endl;
    }
    else{
        cout<<"Multiplication is not possible"<<endl;
    }
}