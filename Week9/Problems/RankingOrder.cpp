#include<iostream> 
#include<vector>
#include<algorithm> 
#include<climits>
using namespace std; 
int main()
{
    vector <int> v={19,12,23,8,16};
    vector <bool> isVisited(v.size(), false); 
    
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        int min=INT_MAX; 
        int min_idx; 
        for (int j = 0; j < n; j++)
        {
            if(!isVisited[j] && v[j]<min)
            {
                min=v[j];
                min_idx=j; 
            }
        }
        v[min_idx]=i; 
        isVisited[min_idx] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
