#include<iostream> 
#include<vector>
using namespace std;

int main()
{ 
    int arr1[]={1,3,5,6,7}; 
    int arr2[]={2,4,5,8,9,100,1000}; 

    int n =sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]); 

    int ans[m+n]; 
     
    int i = 0 ; 
    int j = 0 ; 
    int k = 0;

    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            ans[k]=arr1[i]; 
            i++;
        }
        else
        {
            ans[k]=arr2[j]; 
            j++; 
        }
        k++;
    }
    while(j<m)
    {
        ans[k]=arr2[j]; 
        j++; 
        k++; 
    }
    while(i<n)
    {
        ans[k]=arr1[i]; 
        i++; 
        k++; 
    }
    for (int idx= 0; idx < m+n; idx++)
    {
        cout<<ans[idx]<<" ";
    }
    
    


}