#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int  ix=0;
    int  iy=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if(i==ix||j==iy||i==2*n-2-ix||j==2*n-2-iy)
            {cout<<n-ix<<" ";}
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        ix+=1;
        iy+=1;
    }
    
}