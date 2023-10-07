#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    int m,n;
    cout<<"Enter the size of matrix: ";
    cin>>m>>n;
    //declaration of the martrix
    vector<vector<int>> arr(m,vector<int>(n));
    //taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    //spiral 
    int minr=0;int minc=0;
    int maxr=m-1;int maxc=n-1;
    //if condition we can stop in between 
    
    while(minr<maxc&&minc<maxc)
    {
        //right
        for (int j = minc; j <=maxc ; j++)
        {
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr||minc>maxc)break;
        //down
        for (int i = minr; i <=maxr ; i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr||minc>maxc)break;
        //left
        for (int j = maxc; j >=minc ; j--)
        {
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr||minc>maxc)break;
        //top
        for (int i = maxr; i >=minr ; i--)
        {
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        
    }


    
}