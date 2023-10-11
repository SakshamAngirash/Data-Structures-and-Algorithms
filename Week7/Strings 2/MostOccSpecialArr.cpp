#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std; 
int main()
{
    string s="leetcode";
    vector<int>arr(26,0);
    int j;
    for (int i = 0; i < arr.size(); i++)
    {
        char c=s[i];
        int asci=(int)c;
        arr[asci-97]++;
    }
    int max=0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>max)max=arr[i];
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==max){
            cout<<char(i+97)<<" ";
        }
    }
    

    

    



    

}