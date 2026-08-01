#include<iostream>
using namespace std;
class Swapper
{
    int x;
    int y;
    public :
    void getxy();
    void result();
};
void Swapper::getxy()
{
    cout<<"enter value of x and y";
    cin>>x>>y;
}
void Swapper::result()
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"swapped value of x and y respectively"<<x<<" "<<y;
}
int main()
{
    Swapper n;
    n.getxy();
    n.result();
    return 0;
}