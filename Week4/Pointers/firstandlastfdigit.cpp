#include<iostream>
void find(int n,int *ptr1,int *ptr2)
{
    *ptr1=n%10;
    while(n>9)
    {
        n=n/10;
    }
    *ptr2=n;

}
using namespace std;
int main()
{
    int n;
    cin>>n;
    int firstdgt;
    int lastdgt;

    int *ptr1=&firstdgt;
    int *ptr2=&lastdgt;

    find(n,ptr1,ptr2);

    cout<<firstdgt<<" "<<lastdgt;
}