#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Animal a;  // ❌ Cannot instantiate abstract class
    Dog d;
    d.makeSound();  // Output: Dog barks
}
