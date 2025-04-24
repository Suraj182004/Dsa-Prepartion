#include <iostream>
#include <vector>
using namespace std;

class Animal{
    public:
        void eat(){
            cout <<"Animal is eating"<< endl;
        }
};

class Dog:public Animal{
    public:
        void bark(){
            cout <<"Dog is barking"<< endl;
        }
};

int main(){
    Dog dog1;
    dog1.eat(); // Inherited from Animal class
    dog1.bark(); // Defined in Dog class
    return 0;
};