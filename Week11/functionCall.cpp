#include<iostream>
using namespace std; 
// int product(int x, int y )
// {
//     return x*y; 
// }
// void gun()
// {
//     cout<<"Angirash"<<endl; 
// }
void fun(int n)
{
    if(n==0)return; //adding a terminating condition 
    cout<<"Hello Saksham"<<endl;
    // gun();  
    
    //function calling itself 

    fun(n-1); 

}
int main()

{
    // int a = 5 ; 
    // int b = 6 ;
    // cout<<product(a,b); 
    fun(3);
}