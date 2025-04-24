#include <iostream>
#include <vector>
using namespace std;



class Counter
{
private:
    static int count; // Static variable to track count of objects

public:
    Counter()
    {
        count++;
    }

    static int getCount()
    { // Static function to access static variable
        return count;
    }
};

// Definition of static variable outside class
int Counter::count = 0;

int main()
{
    Counter c1;
    Counter c2;

    cout << "Number of objects created: " << Counter::getCount() << endl; // Output: 2
}
