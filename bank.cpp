#include<iostream>
using namespace std;

class Account {
       public:
       char cust_name[50];
         int acc_no;
         void acc_type(){
            char acc_type[20];
            cout<<"enter account type: ";
            cin>>acc_type;

         }
};
class cur_acct : public  Account {
    public:
    int update_balance(){
        int deposit;
        int balance=0;
        cout<<"enter amount to deposit: ";
        cin>>deposit;
        balance += deposit;
        
        return balance;
    }
    void display_balance(){
        int balance = update_balance();
        cout<<"balance is: "<<balance;
    }
    void withdraw(){
        int balance = update_balance();
        int withdraw;
        cout<<"enter amount to withdraw: ";
        cin>>withdraw;
        if(withdraw>balance){
            cout<<"insufficient balance";
        }
        else{
            balance -= withdraw;
            cout<<"balance is: "<<balance;
        }
        
    }
    void check()
    {
        int min_balance=500;
        int penalty=150;
        int balance = update_balance();
        int balance_after_penalty = balance-penalty;
        if(balance<min_balance){
            cout<<"balance is less than minimum balance";
            cout<<"penalty is: "<<penalty;
            cout<<"balance after penalty is: "<<balance_after_penalty;

        }
        else{
            cout<<"balance is sufficient";
        }

    }
    void display_chequebook(){
        char chequebook[20];
        cout<<"enter chequebook number: ";
        cin>>chequebook;
        cout<<"chequebook number is: "<<chequebook;

    }

};
class sav_acct : public Account {
    public:
    int update_balance(){
        int deposit;
        int balance=0;
        cout<<"enter amount to deposit: ";
        cin>>deposit;
        balance += deposit;
        
        return balance;
    }
    void display_balance(){
        int balance = update_balance();
        cout<<"balance is: "<<balance;
    }
    void withdraw(){
        int balance = update_balance();
        int withdraw;
        cout<<"enter amount to withdraw: ";
        cin>>withdraw;
        if(withdraw>balance){
            cout<<"insufficient balance";
        }
        else{
            balance -= withdraw;
            cout<<"balance is: "<<balance;
        }
        
    }
};
int main(){
    cur_acct c1;
    c1.acc_type();
    c1.display_balance();
    c1.withdraw();
    c1.check();
    c1.display_chequebook();
}
