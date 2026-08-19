#include<iostream>
using namespace std;
class Point{
    int x,y;
    public :
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<"\n";
    }
};
int main()
{
    Point p1(1,1);
    Point p2(10,10);
    cout<<"Point 1 : ";
    p1.display();
    cout<<"Point 2 : ";
    p2.display();
    return 0;
}