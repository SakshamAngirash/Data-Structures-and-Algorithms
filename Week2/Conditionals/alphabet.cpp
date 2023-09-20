#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int asci=(int)c;
    if((asci<=90 && asci>=65) || (asci>=97 && asci<=122))
    {
        cout<<"Alphabet"<<endl;
    }
    
    else{
        cout<<"Not an alphabet"<<endl;
    }
}