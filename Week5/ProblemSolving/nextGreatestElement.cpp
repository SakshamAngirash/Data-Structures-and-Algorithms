#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> g(v.size());
    int greatest=-1;
    g.at(v.size()-1)=greatest;
    for (int i = v.size()-1; i > 0; i--)
    {
        if(greatest<v[i-1])
        {
            greatest=v[i-1];
        }
        g[i-1]=greatest;
    }
    for (int i = 0; i < g.size(); i++)
    {
        cout<<g[i]<<" ";
    }
    
    
}