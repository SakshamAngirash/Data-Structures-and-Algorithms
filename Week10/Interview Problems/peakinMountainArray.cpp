#include<iostream> 
#include<vector> 
using namespace std; 
int main ()
{
    vector <int> arr= {1,4,10,9,8,7,6,5,4,3,2,1,0}; 
    int n =arr.size(); 
    int high=n-1; 
    int low=0; 
    int peak = -1; 
    while(low <= high)
    {
        int mid = low + (high - low) / 2; 
        
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
            {
                peak = mid;
                break;
            }
            else if(arr[mid] < arr[mid+1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
    }

    if(peak != -1)
    {
        cout << "Peak element at index " << peak << " is " << arr[peak];
    }
    else
    {
        cout << "No peak element found";
    }

    return 0;
}
