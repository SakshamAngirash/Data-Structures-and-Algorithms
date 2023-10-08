#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    //instead of printing we want to generate via vector
    //initialising the size of vectors i.e rows
    vector<vector<int>> v(n);
    //
    for (int i = 0; i < n; i++)
    {
        int current=1;
        for (int j = 0; j <= i; j++)
        {
            v[i].push_back(current);
            int next=current*(i-j)/(j+1);
            current=next;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Size of subVectors: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].size()<<" ";
    }
    
    
}