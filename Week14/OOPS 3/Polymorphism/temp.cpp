#include<iostream> 
using namespace std; 

class A{
    public:
    int a;
    void show()
    {
        cout<<"A ka show"; 
    } 

};
class B : public A{
    public: 
    int b; 
    void show()
    {
        cout<<"B ka show";
    }

}; 
int main()
{
    A a; 
    B b; 
    b.show();


    return 0;
}