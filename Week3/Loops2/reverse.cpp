#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int rev=0;
    int digit;
    while(n!=0)
    {
       //rev=digit*10;
       digit=n%10;
       
       rev=rev*10+digit;
       n/=10;
    }
    cout<<rev;
    return 0;
}
