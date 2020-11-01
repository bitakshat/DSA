


#include <stdlib.h>
#include <iostream>

typedef struct Node Node;
struct Node {
	int data;
	Node *left, *right;
};

// new node creation
Node *newNode(int data) {
	Node* node = (Node) malloc(sizeof(Node));
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;
}

// Traverse Preorder
void traversePreOrder(Node *temp) {
	if(temp != NULL) {
		std::cout << " " << temp -> data;
		traversePreOrder(temp -> left);
		traversePreOrder(temp -> right);
	}
}

// Traverse Inorder
void traverseInOrder(Node *temp) {
	if(temp != NULL) {
		traverseInOrder(temp -> left);
		std::cout << " " << temp -> data;
		traverseInOrder(temp -> right);
	}
}

void traversePostOrder(Node *temp) {
	if(temp != NULL) {
		traversePostOrder(temp -> left);
		traversePostOrder(temp -> right);
		std::cout << " " << temp -> data;
	}
}

int main() {
	Node *root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	root -> left -> left = new Node(4);

	std::cout << "Preorder traversal: ";
	traversePreOrder(root);

	return 0;
}
