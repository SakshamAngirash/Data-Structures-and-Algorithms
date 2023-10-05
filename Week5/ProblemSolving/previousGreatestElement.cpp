#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> g;
    int greatest=-1;
    g.push_back(greatest);
    g.resize(v.size());
    
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i-1]>greatest)
        {
            greatest=v[i-1];
        }
        g[i]=greatest;
    }
    for (int i = 0; i < g.size(); i++)
    {
        cout<<g[i]<<" ";
    }
    


}