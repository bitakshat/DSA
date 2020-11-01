




#include <iostream>

typedef struct Node Node;
struct Node {
	int data;
	Node *left, *right;
	
	// Node constructor
	Node(int data) {
		this -> data = data;
		left = right = NULL;
	}
};

void preorderTraversal(Node* node) {
	if(node == NULL)
		return;
	std::cout << node -> data << "->";
	preorderTraversal(node -> left);
	preorderTraversal(node -> right);
}

int main() {
	Node* root = new Node(1);
	root -> left = new Node(12);
	root -> right = new Node(9);
	root -> left -> left = new Node(5);
	root -> left -> right = new Node(6);

	std::cout << "Inorder traversal: ";
	preorderTraversal(root);
	return 0;
}
