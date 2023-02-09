#include<iostream>
using namespace std;
class Calculate
{
    float pi=3.14;
   float s=0.8;
    public:
     Area(int l,int breadth)
    {
        cout<<"area of rectangle is : "<<l*breadth<<endl;
    }
     Area(float s,float h,float base)
    {
        cout<<"area of triangle is : "<<s*h*base<<endl;
    }
     Area(float r)
    {
        cout<<"area of circle is : "<<pi*r*r<<endl;
    }

};
int main()
{
    Calculate c;
    c.Area(13,5);
    c.Area(0.8,18,2);
    c.Area(11);
}