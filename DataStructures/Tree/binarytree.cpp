


#include <iostream>

typedef struct Node Node;
struct Node {
	int data;
	Node *leftChild;
	Node *rightChild;
};

class BinarySearchTree {
public:
	void insert(int data) {
		Node temp = (Node*) malloc(sizeof(Node));
		Node *current;
		Node *parent;

		temp -> data = data;
		temp -> leftChild = NULL;
		temp -> rightChild = NULL;

		/* if tree is empty, create new node */
		if(root == NULL) {
			root = TEMP;
		} else {
			current = root;
			parent = NULL;
		}
	}
};