#include <bits/stdc++.h>

struct Node {
	int data;
	struct Node* next;
};

class linked_list {
public:
	struct Node *head, *tail;
	//constructor
	linked_list() {
		head = NULL;
		tail = NULL;
	}

	///////FUNCTIONS AND OPERATIONS/////////

	void insert( int value ) {
		struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
		temp -> data = value;
		temp -> next = head;
		head = temp;
	}

	void display( void ) {
		struct Node* ptr;
		ptr = head;

		std::cout << "List: ";
		while( ptr != NULL ) {
			std::cout << ptr -> data << " ";
			ptr = ptr -> next;
		}
	}

	void delete_node( int n ) {
		struct Node *temp, *prev;
		temp = head;

		while( temp -> next != NULL ) {
			
			if(temp -> data == n ) {
				temp = temp -> next;
				delete temp;
				prev = temp;
			}
		}
	}
};


////////Driver Code///////
int main( void ) {

	linked_list li;
	for( int x = 1; x <= 3; x++ ) {
		li.insert(x);
	}
	li.display();
	li.delete_node(2);
	li.display();

	return 0;
}