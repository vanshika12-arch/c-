
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void set(int x)
    {
        this->x = x;
    }

    void display()
    {
        cout << "Value of x = " << x;
    }
};

int main()
{
    A obj;
    obj.set(10);
    obj.display();

    return 0;
}
