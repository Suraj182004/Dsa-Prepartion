#include <iostream>
#include <string>
#include <fstream> // For file handling
using namespace std;

int main(){
    ifstream file("example.txt"); // Open the file in read mode
    if (!file) { // Check if the file opened successfully
        cout << "Error opening file!" << endl;
        return 1; // Exit with error code
    }

    string line;
    while (getline(file, line)) { // Read each line from the file
        cout << line << endl; // Print the line to the console
    }

    file.close(); // Close the file

    return 0; // Exit successfully

};