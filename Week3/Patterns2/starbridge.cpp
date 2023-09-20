#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int diff=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            for (int j = 0; j < 2*n-1; j++)
            {
                cout<<"* ";
            }
        }
        else{
        for (int j = 0; j<n-i; j++)
        {
            cout<<"* ";
        }
        for (int j=0; j < i+diff; j++)
        {
            cout<<"  ";
        }
        for(int j=n+i;j<=2*n-1;j++)
        {
            cout<<"* ";
        }
        diff+=1;
        }
        cout<<endl;
    }
    

}