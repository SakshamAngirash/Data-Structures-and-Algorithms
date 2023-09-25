//memory allocation is contageous

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    cout<<arr<<" "<<&arr<<" "<<&arr[0];


}