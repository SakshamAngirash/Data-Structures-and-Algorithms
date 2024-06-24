// for loop 

#include<iostream> 
#include<vector> 
using namespace std; 

int factorial_by_for_loop(int n)
{
    int fact = 1 ; 
    if(n==0 || n==1) return 1;
    else{ 
        for(int i=n;i>0;i--)
        {
            fact*=i; 
            
        }    
    }
    return fact;
}


// time complexity order(n2) with normal for loop 
// void factorialUpto(int n)
// {
//     for (int j = 1;j<= n; j++)
//     {
//         int  f = 1 ; 
//         for (int i = 2; i <= j; i++)
//         {
//             f*=i; 
//         }
//         cout<<f<<endl;
        
//     }
    
// }
void factorialUpto(int n)
{
    
    int  f = 1 ; 
    for (int i = 1; i <= n; i++)
    {
        f*=i;
        cout<<f<<endl;
    }
    
    
}



int factorial_rec(int n)
{
    if(n==0 || n==1) return 1; 
    else{
        return (n*factorial_rec(n-1));
    }
}
int main ()
{
    cout<<factorial_by_for_loop(4)<<endl;
    // Now we have to calculate factorial of all numbers till 4 
    factorialUpto(4);
    cout<<endl;
    cout<<factorial_rec(5); 
}