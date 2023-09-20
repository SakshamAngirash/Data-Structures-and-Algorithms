#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cin>>length>>breadth;
    int count=1;
    for (int i = 1; i <= length*breadth; i++)
    {
        cout<<"*";
        if(count==length)
        {
            cout<<endl;
            count=0;
        }
        count++;
    }
    


}