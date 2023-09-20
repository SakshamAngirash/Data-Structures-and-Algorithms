#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float x;
    cin>>x;
    int y = (int)x;
    float z= x-y;
    if(x<0){
        z=z+1;
    }
    cout<<z<<endl;
    return 0;
}
