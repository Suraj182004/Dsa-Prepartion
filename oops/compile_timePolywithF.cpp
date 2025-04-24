#include <iostream>
using namespace std;

class Print{
    public:
    void show(int a){
        cout<<"Integer:"<<a<<endl;
    }
    void show(float a){
        cout<<"Float:"<<a<<endl;
    }
    void show(char a){
        cout<<"Character:"<<a<<endl;
    }
    
};

int main(){
    Print obj;
    obj.show(5); // Calls show(int)
    obj.show(5.5f); // Calls show(float)
    obj.show('A'); // Calls show(char)
    return 0;
}
