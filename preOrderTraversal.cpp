#include <iostream>
using namespace std ; 

struct Node{
    int data ; 
    Node* left ; 
    Node * right ; 
    Node(int val){
        data = val ; 
        left = right = nullptr ; 
    }
} ; 

void preorderTraversal(Node* root){
    if(!root) return ; 
    cout << root->data << endl ; 
    preorderTraversal(root->left) ; 
    preorderTraversal(root->right) ; 
}
int main(){
    Node *root = new Node(0) ; 
    root -> left = new Node(1) ; 
    root -> right = new Node(2) ;
    root ->left->left = new Node(3); 
    root ->left ->right = new Node(4) ; 
    root ->right ->left = new Node(5) ; 
    root ->right ->right = new Node(6) ; 
    
    preorderTraversal(root) ; 

    return 0 ; 

}