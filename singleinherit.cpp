#include<iostream>
using namespace std;
    class Animal
    {
        public:
            void eat()
            {
                cout<<"I can eat"<<endl;
            }
    };
    class Dog:public Animal
    {
        public:
            void bark()
            {
                cout<<"I can bark"<<endl;
            }
    };
int main()
{
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
}