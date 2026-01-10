#include <bits/stdc++.h>
using namespace std ;
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
void inorderTraversal(Node* root){
    if(!root) return ; 
    inorderTraversal(root->left) ; 
    cout << root->data << endl ; 
    inorderTraversal(root->right) ; 
}
int main() {
    vector<int> nodes = {0, 1, 2, 3, 4, 5, 6};
    Node* root = buildTree(nodes);
    inorderTraversal(root);
    return 0;
}