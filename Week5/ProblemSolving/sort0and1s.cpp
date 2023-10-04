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
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        if(v.at(i)==0)
        {
            n0++;
        }
        else{
            n1++;
        }
    }
    //filling elements
    for (int i = 0; i <v.size(); i++)
    {
        if(i<n0)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    //display
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
}