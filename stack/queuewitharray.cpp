#include <iostream>
using namespace std;
class Queue{
    int *arr;
    int start,end,currSize,maxSize;
    public:
    Queue(){
        arr=new int[16];
        start=-1;
        end=-1;
        currSize=0;
    }
    Queue(int maxsize){
        (* this).maxSize=maxsize;
        arr=new int[maxsize];
        start=-1;
        end=-1;
        currSize=0;

    }
    void enqueue(int newElement){
        if(currSize==maxSize){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(end==-1){
            start=0;
            end=0;
        }
        else{
            end=(end+1)%maxSize;
        }
        arr[end]=newElement;
        currSize++;

        }
    int dequeue(){
        if(start==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int poppedElement=arr[start];
        if(currSize==1){
            start=-1;
            end=-1;
        }
        else{
            start=(start+1)%maxSize;
        }
        currSize--;
        return poppedElement;

        }
    int top(){
        if(start==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[start];
    }
    int size(){
        return currSize;
    }
    
};

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.top()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    return 0;
}

//O(N),o(n)