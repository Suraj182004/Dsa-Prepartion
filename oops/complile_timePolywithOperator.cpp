#include <iostream>
#include <vector>

using namespace std;

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(Complex const &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2; // Calls operator+
    c3.display();         // Output: 4 + 9i
}
