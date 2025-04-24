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

class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Weeping..." << endl;
    }
};

int main()
{
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
}
