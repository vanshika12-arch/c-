#include<iostream>
using namespace std;

inline void display(int x, int y)
{
    cout<<"x="<<x<<" y="<<y<<"\n";
}
int main()
{
    int a=10,b=20;
    display(a,b);
    a=30;
    b=40;
    display(a,b);
    return 0;
}