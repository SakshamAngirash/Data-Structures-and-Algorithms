#include<iostream> 
#include<vector>
#include<algorithm>

int partition(int arr[],int si,int ei)
{
    int pivotelement = arr[si]; 
    int count = 0 ; 
    for (int i = si+1; i <= ei; i++)
    {
        if(arr[i]<=pivotelement) count++;
    }
    int pivotidx = count + si;
    swap(arr[si],arr[pivotidx]);
    int i= si; 
    int j = ei; 
    while(i<pivotidx || j>pivotidx)
    {
        if(arr[i]<=pivotelement) i++; 
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement)
        {
            swap(arr[i],arr[j]); 
            i++; 
            j--;
        }

    }
    return pivotidx;
}
void quicksort(int arr[], int si, int ei)
{
    if(si>=ei) return;
    int pivot=partition(arr,si,ei);
    // put pivot at its righht position
    quicksort(arr,si,pivot-1); 
    quicksort(arr,pivot+1,ei); 
}
using namespace std; 
int main()
{
    int arr[]={5,1,8,2,7,6,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    
}