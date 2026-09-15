#include<iostream>
using namespace std;
class Parent{
    int a;
    public :
    int b;
    void get_ab(){
        a=10;
        b=20;   
    }
    int get_a(){
        return a;
    }
    void show_a(){
        cout<<"a="<<a;

    }
};
class Child : private Parent{
    int c;
    public:
    void mul(){
        get_ab();
        c=b*get_a();
    }
    void display(){
        show_a();
        cout<<"b="<<b;
        cout<<"c="<<c;
    }
};
int main(){
    Child P;
    P.mul();
    P.display();
    return 0;
}