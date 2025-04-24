#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello from A" << endl;
    }
};

class B
{
public:
    void sayHi()
    {
        cout << "Hi from B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    obj.sayHello();
    obj.sayHi();
}
