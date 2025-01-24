#include<iostream>
using namespace std; 
class ComplexNumber{
    public :
    int img; 
    int real;
    ComplexNumber operator + (ComplexNumber &c1){
        ComplexNumber c3; 
        c3.img = c1.img + this->img; 
        c3.real = c1.real+this->real; 
        cout<<c1.real;
        return c3;
    }
}; 
int main()
{
    ComplexNumber a1,a2; 
    a1.img = 5; 
    a1.real=5; 

    a2.img = 6; 
    a2.real=6; 

    ComplexNumber a3= a1+a2; 
    cout<<a3.real<<endl;


}