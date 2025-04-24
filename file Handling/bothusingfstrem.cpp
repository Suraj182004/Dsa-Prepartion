#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open a file for both reading and writing
    fstream file("example.txt", ios::in | ios::out);

    if (!file)
    {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    string line;
    // Read the file
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Write to the file
    file << "\nAppending some more text!" << endl;

    file.close();

    return 0;
}
