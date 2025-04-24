#include <iostream>
#include <vector>

using namespace std;

class Student{
    public:
    string names;
    int rollNo;

    
    // Parameterized constructor
    Student(string n, int r){
        names = n;
        rollNo = r;
    }
    // Copy constructor
    Student(const Student &s){
        names = s.names;
        rollNo = s.rollNo;
    }
    // Constructor overloading
    // Default constructor
    Student(){
        names = "Unknown";
        rollNo = 0;
    }

    void displayInfo(){
        cout<<"Name: "<<names<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    };
};

int main(){
    Student student1("John Doe", 101);
    Student student2;
    Student student3(student1); // Copy constructor
    student2.displayInfo();
    student1.displayInfo();
    student3.displayInfo();
    return 0;
};