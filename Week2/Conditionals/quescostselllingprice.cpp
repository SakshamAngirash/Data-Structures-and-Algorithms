#include<iostream>
using namespace std;
int main()
{
    float cp,sp;
    cin>>cp>>sp;
    if(cp<=sp){
        cout<<"Profit Earned: "<<sp-cp<<endl;
    }
    else{
        cout<<"Loss: "<<cp-sp<<endl;
    }
}