#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    int n=v.size();
    int j=0;
    int k=n;
    
    for (int i = 0; i < n; i++)
    {
        if(v[i]==0)
        {
           v[j]=0;
           j++;
        }
        else{
            v[k]=1;
            k--;
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    

}
