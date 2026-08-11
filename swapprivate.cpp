#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int value1;
    public :
    void indata(int a) {value1=a;}
    void display(void) {cout<<value1<<"\n";}
    friend void swap(class_1 &,class_2 &);};

class class_2{
    
    int value2;
    public :
    void indata(int b) {value2=b;}
    void display(void) {cout<<value2<<"\n";}
    friend void swap(class_1 &,class_2 &);
};
void swap(class_1 &x,class_2 &y)
{
    int temp;
    temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main(){
    
    class_1 c1;
    class_2 c2;
    c1.indata(100);
    c2.indata(200);
    swap(c1,c2);
    cout<<"After swapping, value of class_1 is : ";
    c1.display();
    cout<<"After swapping, value of class_2 is : ";
    c2.display();
    return 0;
}
