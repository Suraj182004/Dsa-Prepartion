#include <iostream>
using namespace std;
#include <queue>

class Stack{
    queue<int> q1,q2;
    public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);

    }
    void pop(){
        q1.pop();
    }
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}
// }