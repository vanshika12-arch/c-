#include<iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"This is base class"<<endl;
    }
    virtual void show(){
        cout<<"This is base class"<<endl;
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"This is derived class"<<endl;
    }
    void show(){
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    
    Base *baseptr;
    Base b;
    Derived d;
    cout<<"Calling base class object"<<endl;
    baseptr = &b;
    baseptr->display();
    baseptr->show();
    cout<<"Calling derived class object"<<endl;
    baseptr = &d;
    baseptr->display();
    baseptr->show();
    return 0;
}