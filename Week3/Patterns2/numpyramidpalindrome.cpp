#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int num,diff;
    diff=0;
    for (int i = 0; i < n; i++)
    {
        num=1;
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j <= i+diff; j++)
        {
            cout<<num<<" ";
            if(j>=i)
            {num--;}
            else {num++;}
        }
        diff+=1;
        cout<<endl;
    }
    
}