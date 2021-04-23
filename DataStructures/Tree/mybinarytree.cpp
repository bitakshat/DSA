/*  DSA: Tree Datastructure
 *  Created on: Apr 21, 2021
 *      Author: Akshat
*/

#include <iostream>
#include <queue>

class Node {
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

class BinaryTree {
private:
    Node* rootptr = nullptr;
    std::queue<Node*> q;
public:
    Node* insert(Node* node, int data);
    void inorderTraversal();
    Node* createNode(int data);
    void inorderTraversal(Node* root);
};

Node* BinaryTree::createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

Node* BinaryTree::insert(Node* node, int data) {
    if (node == nullptr) {
        return createNode(data);
    }

    if (data < node->data) {
        node->left = insert(node->left, data);
    }
    else {
        node->right = insert(node->right, data);
    }

    return node;
}

void BinaryTree::inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    BinaryTree bt;
    Node* root = nullptr;
    int data[] = { 15, 23, 4, 3, 2, 6 };
    for (int d : data) {
        root = bt.insert(root, d);
    }

    bt.inorderTraversal(root);
    return 0;
}
