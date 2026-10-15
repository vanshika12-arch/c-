
#include <iostream>
using namespace std;

namespace A
{
    int x = 10;

    namespace B
    {
        int y = 20;
    }
}

int main()
{
    cout << "Value of x = " << A::x << endl;

    cout << "Value of y = " << A::B::y << endl;

    return 0;
}
