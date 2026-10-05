#include<iostream>
using namespace std;
class Complex{
    float x;
    float y;
    public:
    Complex(){
    }
    Complex(float real, float image){
        x=real;
        y=image;
    }
        Complex operator +(Complex c){
            Complex temp;
            temp.x=x+c.x;
            temp.y=y+c.y;
            return temp;
        }
        void display(){
            cout<<x<<" + "<<y<<"i"<<endl;
        }
    };
int main(){
    Complex c1(3.5, 4.5), c2(1.6, 2.7), c3;
    c3=c1+c2;
    cout<<"c1=";
    c1.display();
    cout<<"c2=";
    c2.display();
    cout<<"c3=";
    c3.display();
    return 0;
}