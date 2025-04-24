#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    { // Function Overriding
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    { // Function Overriding
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *animal;

    Dog d;
    Cat c;

    animal = &d;
    animal->makeSound(); // Output: Dog barks

    animal = &c;
    animal->makeSound(); // Output: Cat meows

    return 0;
}
