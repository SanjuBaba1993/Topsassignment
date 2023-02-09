#include<iostream>
using namespace std;
template<typename P>
class Data
{
    P a,b;
    public:

    Data(P x,P y)
    {
        a=x;
        b=y;
    }
    void before()
    {
        cout<<"before swapping vaule of a : "<<a<<endl;
        cout<<"before swapping vaule of b : "<<b<<endl;
    }
    void after()
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"after swapping value of a : "<<a<<endl;
        cout<<"after swapping value of b : "<<b<<endl;
    }

};
int main()
{
    Data<float>s(11,13);
    s.before();
    s.after();
}