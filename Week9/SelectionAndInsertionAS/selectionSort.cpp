#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std; 
int main(){
    int arr[]={5,-3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        int min_index=i;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);        
    }
    // for each loop 
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}