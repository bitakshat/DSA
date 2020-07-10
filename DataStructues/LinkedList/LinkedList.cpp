
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

	void deleteNode( int value ) {
		struct Node *temp, *prev;

		temp = head;
		prev = head;

		std::cout << std::endl;
		while( (temp != NULL) && (temp -> data != value) ) {
			prev = temp;
			temp = temp -> next;
		}
		if( prev == NULL ) {
			std::cout << "Record not found!" << std::endl;
		}
		if( temp == head ) {
			head = head -> next;
		}
		else {
			prev -> next = temp -> next;
			if( temp -> next == NULL ) {
				temp = prev;
			}
		}
		delete temp;
	}
};

// Driver code //
int main(void) {
	LinkedList li;
	
	for( int i=1; i<=5; i++) {
		li.insert(i);
	}
	li.display();
	li.deleteNode(5);
	li.display();
	return 0;
}