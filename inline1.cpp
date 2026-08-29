#include<iostream>
using namespace std;
class Swap{
    int x,y;
    public:
    inline void swap(int &a,int &b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
};
int main()
{
    Swap s;
    int a=10,b=20;
    cout<<"Before swapping : a="<<a<<" b="<<b<<"\n";    
    s.swap(a,b);
    cout<<"After swapping : a="<<a<<" b="<<b<<"\n";
    return 0;
}
