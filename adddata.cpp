#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int data;
    public:
        void setdata(int d)
        {
            data=d;
        }
        friend void adddata(XYZ,ABC);
};
class ABC
{
    int data;
    public:
        void setdata(int d)
        {
            data=d;
        }
        friend void adddata(XYZ,ABC);
};
void adddata(XYZ obj1,ABC obj2)
{
    cout<<"sum of data is:"<<obj1.data+obj2.data;
}
int main()
{
    ABC A;
    XYZ X;
    X.setdata(10);
    A.setdata(20);
    adddata(X,A);
    return 0;
}