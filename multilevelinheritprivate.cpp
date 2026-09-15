#include<iostream>
using namespace std;
class Superb{
    int a;
    int b;
    public:
    void get_ab(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void show_a(){
        cout<<"a="<<a<<endl;
    }
    void show_b(){
        cout<<"b="<<b<<endl;
    }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }

};
class Senior : public Superb{
    
    int c;
    int d;
    public:
    void get_cd(){
        cout<< " Enter the value of c and d"<<endl;
        cin>>c>>d;

    }
    void show_c(){
        cout<<"c="<<c<<endl;
    }
    void show_d(){
        cout<<"d="<<d<<endl;
    }
    int get_c(){
        return c;
    }
    int get_d(){
        return d;
    }
    void show_ab(){
        show_a();
        show_b();
    }
    int get_value_a(){
        return get_a();
    }
    int get_value_b(){
        return get_b();
    }
};
class Junior : private Senior{
    public:
    using Senior::get_ab;
    using Senior::get_cd;
    using Senior::get_value_a;
    using Senior::get_value_b;
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
        average=(get_value_a()+get_value_b()+get_c()+get_d()+e+f)/float(6.0F);
        cout<<"Average of a,b,c,d,e,f is :"<<average<<endl;
        show_ab();
        show_c();
        show_d();
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
