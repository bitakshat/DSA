
#include <iostream>
#include <cstdlib>

struct Node {
	int data;
	struct Node* next;
};

struct Node *head = NULL;
class LinkedList {
public:

	// Utility Functions //
	void insert( int value ) {
		struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
		new_node -> data = value;
		new_node -> next = head;
		head = new_node;
	}

	void display( void ) {
		struct Node* temp;
		temp = head;

		while( temp != NULL ) {
			std::cout << temp -> data << " ";
			temp = temp -> next;
		}
	}

	void delteNode( int value ) {
		struct Node *temp, *prev;

		if( head -> data == value ) {
			head = head -> next;
			free(temp);
		}

		temp = head;
		prev = temp;

		while( temp != NULL ) {
			if( temp -> data == value ) {

			}
		}
	}
};

// Driver code //
int main(void) {
	LinkedList li;
	li.insert(10);

	li.display();
	return 0;
}