#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

class BST{
public:
    Node *root;

    BST(){
        root = NULL;
    }

    void insertNode(Node *&root, const int k){
        if (root == NULL) {
            root = new Node(k);
        } else {
            if (k < root->data) {
                insertNode(root->left, k);
            } else {
                insertNode(root->right, k);
            }
        }
    }
    void insert(const int k){
        insertNode(root, k);
    }
    int getHeight(Node *root){
        if (root == NULL) {
            return -1;
        } else {
            return 1 + max(getHeight(root->left), getHeight(root->right));
        }
    }
    int getHeight() {
        return getHeight(root);
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    BST b1;

    for (int i = 0; i < n; i++){
        int data;
        cin >> data;
        b1.insert(data);
    }

    int height = b1.getHeight();
    cout << height << endl;
    return 0;
}
