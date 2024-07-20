#include<iostream>
using namespace std; 
class ComplexNumber{
    public :
    int img; 
    int real;
    friend ComplexNumber operator + (ComplexNumber &c1 , ComplexNumber &c2);
    ComplexNumber operator + (ComplexNumber &c1){
        ComplexNumber c3; 
        c3.img = c1.img + this->img; 
        c3.real = c1.real+this->real; 
        return c3;
    }
}; 
ComplexNumber operator +(ComplexNumber &c1 , ComplexNumber &c2) {
    ComplexNumber c3; 
        c3.img = c1.img + c2.img; 
        c3.real = c1.real+c2.real; 
        return c3;
}
class A{
    int a_private; 
    public:
    friend void show(A &a);
    void show2(){
        cout<<a_private<<endl;
    }

}; 
void show(A &a)
{
    cout<<a.a_private<<endl;

}
class B: public A{

};
int main()
{
    A a; 
    a.show2();
    


}