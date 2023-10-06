#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][3]={1,3,2,5,4,7,6,10,9};
    int max=INT_MIN; 
    int max2=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]>max)
            {
                max2=max;
                max=arr[i][j];
            }
        }
        
    }
    cout<<"second largest: "<<max2;
    
}