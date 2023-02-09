#include <iostream>
using namespace std;
class information
{

public:
    string name;;
    int age;
    string gender;

    void data()
    {
        cout << " name is : ";
        getline(cin, name);
        cout << "age is : ";
        cin >> age;
        cout << "gender is : ";
        cin >> gender;
    }

};
class Teacher : public information
{
    
public:
    int salary;

    void collection()
    {
        cout << "teacher salary is : ";
        cin >> salary;
        cout<<"name is : "<<name<<endl;
        cout << "age is : " << age << endl;
        cout << "gender is: " << gender << endl;
        cout << "teacher salary is :  " << salary << endl;
        cout << "-------------------" << endl;
    }
};
class Principal : public information
{
public:
    int salary1;

    void display()
    {
        cout << "principal salary is : ";
        cin >> salary1;
        cout<<"name is : "<<name<<endl;
         cout << "age is : " << age << endl;
         cout << "gender is: " << gender << endl;
        cout << "principal salary is : " << salary1 << endl;
    }
};
int main()
{
    Teacher z;
    z.data();
    z.collection();

     Principal x;
     x.data();
     x.display();
}