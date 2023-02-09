#include <iostream>
using namespace std;
class calculater
{
    float a, b;

public:
    calculater()
    {

        cout << "enter a value of a:";
        cin >> a;
        cout << "enter a value of b:";
        cin >> b;
        cout << "\nsum of a+b is:" << a + b;
        cout << "\nsub of a-b is:" << a - b;
        cout << "\nmul of a*b is:" << a * b;
        cout << "\ndiv of a/b is:" << a / b;
    }
};
int main()
{
    calculater s;
}