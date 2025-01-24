// #include<iostream> 
// using namespace std; 

// class A {
//     public:
//     A()
//     {
//         cout<<"A ka constructor"<<endl;
//     }

// }; 
// class B : public A{
//     public:
//     B()
//     {
//         cout<<"B ka constructor"<<endl;
//     }

// };
// class C : public A{
//     public:
//     C()
//     {
//         cout<<"C ka constructor"<<endl;
//     }

// }; 
// class D : public B , public C {
//     public:
//     D()
//     {
//         cout<<"D ka constructor"<<endl;
//     }

// }; 
// int main()
// {
//     D d;

// }


//understanding virtual keyword 
#include<iostream> 
using namespace std; 

class A {
    public:
    A()
    {
        cout<<"A ka constructor"<<endl;
    }

}; 
class B :virtual public A{
    public:
    B()
    {
        cout<<"B ka constructor"<<endl;
    }

};
class C :virtual public A{
    public:
    C()
    {
        cout<<"C ka constructor"<<endl;
    }

}; 
class D : public C , public B {
    public:
    D()
    {
        cout<<"D ka constructor"<<endl;
    }

}; 
int main()
{
    D d;

}
