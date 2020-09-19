
#include <bits/stdc++.h>

struct Node {
	int data;
	Node* next;
};

Node *head = NULL;

class LinkedList {
public:

	// Utility Functions //
	void insert( int value ) {
		Node* new_node = new Node();
		new_node -> data = value;
		new_node -> next = head;
		head = new_node;
	}

	void display( void ) {
		Node* temp;
		temp = head;

		while( temp != NULL ) {
			std::cout << temp -> data << " ";
			temp = temp -> next;
		}
	}

	void deleteNode( int value ) {
		Node *temp, *prev;

		temp = head;
		prev = head;

		std::cout << std::endl;
		while( (temp != NULL) && (temp -> data != value) ) {
			prev = temp;
			temp = temp -> next;
		}
		//********case 1: empty list********//
		if( prev == NULL ) {
			std::cout << "Record not found!" << std::endl;
		}
		//********case 2: only one node is present********///
		if( temp == head ) {
			head = head -> next;
		}
		//********case 3: delete from a given position********//
		else {
			prev -> next = temp -> next;
			if( temp -> next == NULL ) {
				temp = prev;
			}
		}
		delete temp;
	}

	void reverse() {
		Node *curr = head;
		Node *prev, *ptr;
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
	li.deleteNode(3);
	li.display();
	li.reverse();
	std::cout << std::endl;
	li.display();
	return 0;
}
