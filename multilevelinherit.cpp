#include<iostream>
using namespace std;
class Superb{
    public:
    int a;
    int b;
    void get_ab(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void show_ab(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
class Senior : public Superb{
    public:
    int c;
    int d;
    void get_cd(){
        cout<< " Enter the value of c and d"<<endl;
        cin>>c>>d;

    }
    void show_cd(){
        cout<<"c="<<c<<endl;
        cout<<"d="<<d<<endl;
    }
};
class Junior : public Senior{
    public:
    int e;
    int f;
    void get_ef(){
        cout<<"Enter the value of e and f"<<endl;
        cin>>e>>f;
    }
    void show_ef(){
        cout<<"e="<<e<<endl;
        cout<<"f="<<f<<endl;
    }
    void avg(){
        float average;
        average=(a+b+c+d+e+f)/6;
        cout<<"Average of a,b,c,d,e,f is :"<<average<<endl;
        show_ab();
        show_cd();
        show_ef();

    }
};
int main(){
    Junior J;
    J.get_ab();
    J.get_cd();
    J.get_ef();
    J.avg();
    return 0;
}
 