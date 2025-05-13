#include <iostream>

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right = new Node(5);
    printf("Binary tree created with root value: %d\n", root->data);
    printf("Left child of root: %d\n", root->left->data);
    printf("Right child of root: %d\n", root->right->data);
    

}

//Inorder left->root->right
//Preorder root->left->right
//Postorder left->right->root