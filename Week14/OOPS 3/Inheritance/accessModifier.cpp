#include<iostream>
using namespace std;
class A{
    private: //private cannot be accessed and cannot be inherited 
    int a_private;
    protected: //cant be accessed but can be inherited 
    int a_protective; 
    public://can be both 
    int a_public;

}; 
class B: protected A{
    public:
    int b_public;

};
int main ()
{
    A a; 
    B b; 
    b.b_public=10;
    b.a_protective=10;
    // Important  note : we can only move from low to hight security .
}