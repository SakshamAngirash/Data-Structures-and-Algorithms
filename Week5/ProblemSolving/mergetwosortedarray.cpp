#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1={1,4,6,7,8};
    int ptr1=0;
    vector <int> v2={2,3,5,9,10};
    int ptr2=0;
    //already sorted arrays are given 
    
    //lets create a result array
    vector <int> result;
    
    while(ptr1<v1.size()&&ptr2<v2.size())
    {
        if(v1[ptr1]<v2[ptr2])
        {
            result.push_back(v1[ptr1]);
            ptr1++;
        }
        else if(v1[ptr1]>v2[ptr2])
        {
            result.push_back(v2[ptr2]);
            ptr2++;
        }
    }
    // Add any remaining elements from v1 (if any)
    while (ptr1 < v1.size()) {
        result.push_back(v1[ptr1]);
        ptr1++;
    }

    // Add any remaining elements from v2 (if any)
    while (ptr2 < v2.size()) {
        result.push_back(v2[ptr2]);
        ptr2++;
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result.at(i)<<" ";
    }
    

}