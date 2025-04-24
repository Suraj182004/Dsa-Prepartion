#include <iostream>
#include <vector>
using namespace std;

class Student
{
    private:
        string names;
        int rollNo;
    public:
        // Setter functions (write access)
        void setNames(string n)
        {
            names = n;
        }
       void setRollNo(int r){
        rollNo=r;
       }

       // Getter functions (read access)
       string getNames(){
        return names;
       }
        int getRollNo(){
          return rollNo;
         }
};

int main(){
    Student student1;
    student1.setNames("John Doe");
    student1.setRollNo(101);
    cout<<"Name: "<<student1.getNames()<<endl;
    cout<<"Roll No: "<<student1.getRollNo()<<endl;
    return 0;
}