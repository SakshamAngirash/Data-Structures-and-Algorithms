#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    vector<int> arr={1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n = arr.size(); 
    int target=3; 
    int low = 0 ; 
    int high =n-1;

    bool flag=false;

    while(low<=high)
    {
        int mid=low+(high-low)/2; 
        if(arr[mid]==target)
        {
            if(arr[mid-1]!=target)
            {
                flag=true;
                cout<<mid; 
                break;
            }
            else {
                high=mid-1;
            };
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
    } 
    if (flag==false)
    {
        cout<<-1;
    }

}