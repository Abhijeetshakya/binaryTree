#include <iostream>
using namespace std; 

struct Node{
    int data ; 
    Node * left ; 
    Node * right ; 
    Node(int val){
        data = val ; 
        left = right = nullptr ; 
    }
}; 
int main(){
    struct Node *root = new Node(0) ; 
    root ->left = new Node(1) ; 
    root ->right = new Node(2) ; 
    root->left->right = new Node(3) ; 
    return 0 ; 
} 