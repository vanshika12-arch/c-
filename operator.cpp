#include<iostream>
using namespace std;
class Vanshika{
    int x,y,z;
    public:
    void getdata(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
    void showdata(){
        cout<<"The values are: "<<x<<" "<<y<<" "<<z<<endl;
    }
    void operator - (){
        x = -x;
        y = -y;
        z = -z;
    }
};
int main(){
    
    Vanshika v;
    v.getdata(30,40,-50);
    v.showdata();
    -v;
    v.showdata();
    return 0;
}