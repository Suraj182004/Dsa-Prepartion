#include <iostream>
using namespace std;

// Abstract class
class Animal
{
public:
    // Pure virtual function
    virtual void makeSound() = 0; // No body → forces subclass to define it

    void breathe()
    {
        cout << "All animals breathe..." << endl;
    }
};

// Derived class: Dog
class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog says: Woof! " << endl;
    }
};

// Derived class: Cat
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.makeSound(); // Output: Dog says: Woof!
    d.breathe();   // Output: All animals breathe...

    c.makeSound(); // Output: Cat says: Meow!
    c.breathe();   // Output: All animals breathe...

    return 0;
}
