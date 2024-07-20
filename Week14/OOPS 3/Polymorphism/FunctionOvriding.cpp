#include<iostream> 
using namespace std; 

class A{
    public:
    int a;
    virtual void show()
    {
        cout<<"A ka show"; 
    } 

};
class B : public A{
    public: 
    int b; 
    virtual void show()
    {
        cout<<"B ka show";
    }

}; 
int main()
{
    A *a;
    B b; 
    a = &b;

    b.show(); // normally b will be called
    b.A::show(); //using scope resolution operator
    a->show();//virtual function 


    return 0;
}