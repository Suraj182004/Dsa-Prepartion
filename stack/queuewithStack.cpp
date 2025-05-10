#include <iostream>
#include <stack>

using namespace std;

struct Queue{
    stack<int> input,output;

    void push(int x){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        input.push(x);
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
    }

    int pop(){
        if(input.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int val=input.top();
        input.pop();
        return val;
    }

    int top(){
        if(input.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return input.top();
    }

    int size(){
        return input.size();
    }
};

int main()
{
    Queue q;
    q.push(3);
    q.push(4);
    cout << "The element poped is " << q.pop() << endl;
    q.push(5);
    cout << "The top of the queue is " << q.top() << endl;
    cout << "The size of the queue is " << q.size() << endl;
}