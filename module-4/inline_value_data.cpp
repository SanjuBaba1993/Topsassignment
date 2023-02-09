#include <iostream>
using namespace std;
class value
{
    int s;

public:
    inline void data()
    {
        cout << "s value is : ";
        cin >> s;
    }

    inline multiplication()
    {
        cout << "multiplication value is : " << s * s << endl;
    }

    inline cubic()
    {
        cout << "cubic value is : " << s * s * s << endl;
    }
};

int main()
{
    value t;
    t.data();
    t.multiplication();
    t.cubic();
}
