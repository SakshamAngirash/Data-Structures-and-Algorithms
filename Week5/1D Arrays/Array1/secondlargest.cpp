#include<iostream>
#include<climits>

using namespace std;
int main()
{
    int arr[]={10,100,3,5,2};
    int max=INT_MIN;
    int max2=INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
    }
    cout<<max<<" "<<max2;
}