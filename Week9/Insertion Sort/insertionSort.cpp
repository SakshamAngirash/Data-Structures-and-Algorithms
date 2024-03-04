#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std; 
int main(){
    int arr[]={5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 1; i < n; i++)
    {
       int pivot = arr[i];
       int j;
       for ( j = i - 1; j >= 0 && arr[j] > pivot; j--)
       {
          arr[j + 1] = arr[j];
       }
       arr[j + 1] = pivot;
    }
    
    // for each loop 
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}
