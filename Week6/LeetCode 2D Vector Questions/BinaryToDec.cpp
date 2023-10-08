#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std; 
int main()
{
    vector<int> v ={0,0,1,1};
    reverse(v.begin(),v.end());
    int result=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==1)
        {
            result+=pow(2,i);
        }
    }
    cout<<result;
    
}