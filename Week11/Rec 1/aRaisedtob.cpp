#include<iostream> 
using namespace std;
int power(int a, int b)
{
    int pow; 
    if(b==0) return 1;
    pow = a * power(a,b-1);
    return pow;
}
int main ()
{ 
    cout<<power(2,3); 
}