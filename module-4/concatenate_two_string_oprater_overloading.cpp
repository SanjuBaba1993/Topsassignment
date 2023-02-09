#include<iostream>
using namespace std;
class concatenate
{
    private:
    string x,y,z;
    public:
    void data()
    {
        cout<<"---------------------"<<endl;
        cout<<"enter you name : ";
        cin>>x;
        cout<<"-----------------------"<<endl;
        cout<<"enter your surnmae : ";
        cin>>y;
        cout<<"-----------------------"<<endl;

    }
    void operator+();
    void display();

};
void concatenate::operator+()
{
    z=x+y;
}
void concatenate::display()
{
    cout<<"----------------------"<<endl;
    cout<<"your full name is : "<< z<< endl;
    cout<<"----------------------"<<endl;
}
int main()
{
    concatenate c;
    c.data();

    +c;
    c.display();
}