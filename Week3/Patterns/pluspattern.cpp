#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if(i==n/2)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<"* ";
            }   
        }
        else{
        for (int j = 0; j <n; j++)
        {
           if(j==(n/2+1)){cout<<"* ";}
           else{cout<<" ";}
        }
        }
        cout<<endl;
        
    }
    
}