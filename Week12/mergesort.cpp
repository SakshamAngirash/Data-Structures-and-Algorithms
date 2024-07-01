#include<iostream> 
#include<vector>
using namespace std;

void merge(vector<int>& arr1,vector<int>& arr2,vector<int>& ans)
{
    int i = 0 ; 
    int j = 0 ; 
    int k = 0;
    while(i<arr1.size() && j<arr2.size())
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
    while(j<arr2.size())
    {
        ans[k]=arr2[j]; 
        j++; 
        k++; 
    }
    while(i<arr1.size())
    {
        ans[k]=arr1[i]; 
        i++; 
        k++; 
    }
    for (int idx= 0; idx < arr1.size()+arr2.size(); idx++)
    {
        cout<<ans[idx]<<" ";
    }
}
void mergeSort(vector<int> &v)
{
    int n = v.size();
    //base case
    if(n==1)return;  
    //sizes of two subarrays
    int n1 =n/2; 
    int n2= n-n/2;
    vector<int> a (n1),b(n2); //creation of two subarrays
    //copy pasting 
    for (int i = 0; i < n1; i++)
        a[i]=v[i]; //first half
    for (int i = 0; i < n2; i++)
        b[i]=v[i+n1]; //second half
    //recursion 
    mergeSort(a); 
    mergeSort(b);
    //last me merge krdo
    merge(a,b,v); 
}

int main()
{ 
    // int arr1[]={1,3,5,6,7}; 
    // int n =sizeof(arr1)/sizeof(arr1[0]);
    // //storing it into an vector
    // vector<int> a(arr1,arr1+n);

    // int arr2[]={2,4,5,8,9,100,1000};
    // int m= sizeof(arr2)/sizeof(arr2[0]);  
    // vector<int> b(arr2,arr2+m);
   
    // //resultant vector
    // vector<int> ans(n+m); 

    // merge(a,b,ans);
     

    // Now lets focus on Merge Sort
    int arr[]={1,5,10,4,7,2}; 
    int n =sizeof(arr1)/sizeof(arr1[0]);
    //storing it into an vector
    vector<int> a(arr1,arr1+n);
    mergeSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    


}