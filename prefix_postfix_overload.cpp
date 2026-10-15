
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A()
    {
        x = 5;
    }

    void operator++()       // Prefix ++
    {
        ++x;
    }

    void operator++(int)    // Postfix ++
    {
        x++;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    A obj;

    ++obj;
    obj.display();

    obj++;
    obj.display();

    return 0;
}
 