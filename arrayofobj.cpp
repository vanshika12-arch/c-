#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
    };
        int main()
        {
            employee emp[3];
            for(int i=0;i<3;i++)
            {
                emp[i].getdata();
            }
            for(int i=0;i<3;i++)
            {
                emp[i].display();
            }
            return 0;
        }
