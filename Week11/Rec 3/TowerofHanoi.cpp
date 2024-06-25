#include<iostream>
using namespace std; 

void hanoi(int n,char a, char b, char c)
{
    if (n==0) return;
    hanoi(n-1,a,c,b); // step 1 
    cout<<a<<"->"<<c<<endl; 
    hanoi(n-1,b,a,c); //step 2

}
int main ()
{
    hanoi(2,'A','B','C');
}