#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int binary=1;
    for (int i = 0; i < n; i++)
    {
        binary=1;
        if(i%2==0)
        {
            binary=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<binary<<" ";
            if(binary==1)
            {
              binary=0;
            }
            else{
                binary=1;
            }
        }
        cout<<endl;
    }
    

}
