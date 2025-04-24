#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing..." << endl;
    }
};

int main()
{
    Dog d;
    Cat c;
    d.eat();
    d.bark();

    c.eat();
    c.meow();
}
