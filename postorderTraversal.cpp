#include <bits/stdc++.h>
using namespace std; 

struct Node {
    int data;
    Node* left; 
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* buildTree(const vector<int>& nodes) {
    if (nodes.empty()) return nullptr;
    Node* root = new Node(nodes[0]);
    queue<Node*> q; q.push(root);
    int i = 1;
    while (i < nodes.size()) {
        Node* curr = q.front(); q.pop();
        if (i < nodes.size()) { curr->left = new Node(nodes[i++]); q.push(curr->left); }
        if (i < nodes.size()) { curr->right = new Node(nodes[i++]); q.push(curr->right); }
    }
    return root;
}
void postorderTraversal(Node* root){
    if(!root) return ; 
    postorderTraversal(root ->left) ; 
    postorderTraversal(root->right) ; 
    cout << root->data << endl ; 

}

int main(){
    vector<int> nodes = { 1,2,3,4,5,6,7,} ; 
    Node * root = buildTree(nodes) ; 
    postorderTraversal(root) ; 
    return 0 ; 
}