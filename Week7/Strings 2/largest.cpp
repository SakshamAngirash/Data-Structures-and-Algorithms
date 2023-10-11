#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
    vector<string> v={"0123","0023","456","00182","940","2904"};
    vector<int>temp;
    for (int i = 0; i < v.size(); i++)
    {
        int x = stoi(v[i]);
        temp.push_back(x);
    }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout<<temp[i]<<" ";
    // }
    sort(temp.begin(),temp.end());
    int x=temp[v.size()-1];
    string longest=to_string(x);

    for (int i = 0; i < v.size(); i++)
    {
         if(longest==v[i])
         {
            cout<<"INDEX "<<i;
            break;
         }
    }
}