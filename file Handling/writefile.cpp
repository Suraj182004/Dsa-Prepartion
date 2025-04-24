#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open a file for writing
    ofstream outputFile("example.txt");

    // Check if the file is open
    if (!outputFile)
    {
        cout << "File could not be opened for writing!" << endl;
        return 1;
    }

    // Write to the file
    outputFile << "Hello, this is a test!" << endl;
    outputFile << "File handling in C++ is simple." << endl;

    // Close the file
    outputFile.close();

    return 0;
}
