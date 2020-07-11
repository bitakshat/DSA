
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
		struct Node* new_node = new Node();
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

	void reverse() {
		struct Node *curr = head;
		struct Node *prev, *ptr;
		prev = NULL;
		ptr = NULL;	

		while( curr != NULL ) {
			//store next
			ptr = curr -> next;
			//reverse current node's pointer
			curr -> next = prev;
			//moves pointers one position ahead
			prev = curr;
			curr = ptr;
		}
		head = prev;
	}
};

// Driver code //
int main(void) {
	LinkedList li;
	
	for( int i=1; i<=5; i++) {
		li.insert(i);
	}
	li.display();
	li.reverse();
	std::cout << std::endl;
	li.display();
	return 0;
}