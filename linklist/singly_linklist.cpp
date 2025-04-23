#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* insertAtHead(Node* head, int data)
{
    Node* newNode = new Node(data,head);
    return newNode;

}

Node* insertafter(Node* head, int data, int val)
{
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp!=NULL && temp->data!=val){
        temp = temp->next;
    }
    if(temp!=NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;

}


Node* deleteTail(Node* head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    int val=100;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head=deleteTail(head);
    
    head = insertafter(head, val, 5);
    printLL(head);
    return 0;
}
