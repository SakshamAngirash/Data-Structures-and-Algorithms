#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    cout<<"Marks below 35: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if(marks[i]<35)
        {
            cout<<"Roll no> "<<i<<endl;
        }
    }
    
    
}