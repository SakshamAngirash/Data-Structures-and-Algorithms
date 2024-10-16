//three pointer algorithmw
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    
    int n=v.size();

    //three pointers;
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[low],v[mid]);
            mid++;
            low++;
        }
        else if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
        }
        else{
            mid++;
        }
    }

    for (int k = 0; k < v.size(); k++)
    {
        cout<<v.at(k)<<" ";
    }
    



}