#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //two pass method:  lesser time complexity
    int n0=0;
    int n1=0;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    
    int n=v.size();

    int i=0;
    int j=n-1;

    while(i<j)
    {
        if(v[i]==0)i++;
        if(v[j]==1)j--;
        if(v[i]==1&&v[j]==0)
        {
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }

    for (int k = 0; k < v.size(); k++)
    {
        cout<<v.at(k)<<" ";
    }
}