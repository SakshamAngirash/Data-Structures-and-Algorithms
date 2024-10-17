#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std; 

int minProd(vector<int>&arr)
{
    int cn= 0 , cz = 0 ; //count of negatives and zeros 
    int largestNegative = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) cz++;
        if (arr[i] < 0) {
            cn++;
            if (arr[i] > largestNegative) {
                largestNegative = arr[i]; // Find the largest negative
            }
        }
     }
    sort(arr.begin(),arr.end());
    int product = 1;
    if(cn==0)//means no negatives
    {
        if(cz!=0)return 0;//zeros are existing
        else return arr[0];// if even 0s are not existing,smallest number of the array 
    }
    else { //negatives are existing 
        if (cn%2!=0)//odd no. of negatives are existing
        {
            //product of all negatives and positives 
            for(int i=0 ; i< arr.size();i++)
            {
                if(arr[i]==0) continue; 
                product*=arr[i];
            }
        }
        else //product of all negatives except the largest one 
        {
            bool skippedLargestNegative = false;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == 0) continue;
                if (arr[i] == largestNegative && !skippedLargestNegative) {
                    skippedLargestNegative = true; // skip the largest negative
                } else {
                    product *= arr[i];
                }
            } 
        }
    }
    return product;
    
}
int main ()
{
    vector<int> arr={-1,2,3,4,-5,0,2}; 
    cout<<minProd(arr);

}