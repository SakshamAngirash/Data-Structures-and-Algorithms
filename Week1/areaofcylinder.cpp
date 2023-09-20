#include<iostream>
#define pi 3.14
using namespace std;

float areaOfCylinder(float height,float radius)
{
    float area = (2*pi*height*radius)+(2*pi*radius*radius);
    return area;
}

int main(int argc, char const *argv[])
{
    int r,h;
    cout<<"Enter radius and height of cylinder : ";
    cin>>r>>h;
    cout<<"Area : "<<areaOfCylinder(h,r)<<endl;
    return 0;
}
