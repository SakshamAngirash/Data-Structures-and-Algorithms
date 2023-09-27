#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // 1st method : if size given , then simple as array
    //2nd method : if size is not given
    vector<int> v;
    int n;
    cout<<"Enter the number of Elements : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    




}