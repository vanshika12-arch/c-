#include<iostream>
using namespace std;
class Fixed_deposit{
    long int P_amount;
    int years;
    float Rate;
    float R_value;

public:
    Fixed_deposit(){}
    Fixed_deposit(long int p,int y,float r=0.12);
    Fixed_deposit(long int p,int y,int r);
    void display(void);

};
Fixed_deposit :: Fixed_deposit(long int p,int y,float r){
    P_amount=p;
    years=y;
    Rate=r;
    R_value=P_amount;
    for(int i=1;i<=y;i++){
        R_value=R_value*(1.0+Rate);
    }
}

    Fixed_deposit :: Fixed_deposit(long int p,int y,int r){
        P_amount=p;
        years=y;
        Rate=float(r)/100;
        R_value=P_amount;
        for(int i=1;i<=y;i++){
            R_value=R_value*(1.0+Rate);
        }
    }
void Fixed_deposit :: display(void){
    cout<<"Principal amount was "<<P_amount<<endl
        <<"Return value after "<<years<<" years is "<<R_value<<endl;
}
int main(){
    Fixed_deposit fd1,fd2,fd3;
    long int p;
    int y;
    float r;    
    int R;
    cout<<"Enter the value of principal amount, years and rate of interest in percentage"<<endl 
        <<"for fixed deposit 1"<<endl;
    cin>>p>>y>>r;
    fd1=Fixed_deposit(p,y,r);
    fd1.display();
    cout<<"Enter the value of principal amount, years and rate of interest in percentage"<<endl 
        <<"for fixed deposit 2"<<endl;
    cin>>p>>y>>R;
    fd2=Fixed_deposit(p,y,R);
    fd2.display();
    cout<<"Enter the value of principal amount and years"<<endl 
        <<"for fixed deposit 3"<<endl;
    cin>>p>>y;
    fd3=Fixed_deposit(p,y);
    fd3.display();  

    return 0;
}
