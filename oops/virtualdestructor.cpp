#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }

    virtual ~Base()
    { // Virtual destructor
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor" << endl;
    }

    ~Derived()
    { // Destructor of derived class
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Base *basePtr = new Derived(); // Base pointer to Derived object
    delete basePtr;                // Correctly calls both derived and base class destructors
}
