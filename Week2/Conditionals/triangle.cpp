#include<iostream>
using namespace std;
int main()
{
    int a,b,c;//three sides of a triangle
    cin>>a>>b>>c;
    if(a==b && a==c){
        cout<<"Equilateral"<<endl;
    }
    else{
        if(a!=b && c!=a && b!=c)
        {
            cout<<"Scalen"<<endl;
        }
        else{
            cout<<"Isoceles"<<endl;
        }
    }
}