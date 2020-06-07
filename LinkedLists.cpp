/*Linked List*/
#include <bits/stdc++.h>

struct Node {
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void insert( int new_data ) {
	//struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node* new_node = new Node();
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}
void display() {
	struct Node* ptr;
	ptr = head;
	while( ptr != NULL ) {
		std::cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
}
//function to delete contents of node
void delte(int data) {
	struct Node* del;
}

int main( void ) {
	for( int x=1; x<=5; ++x ) {
		insert(x);
		if( x == 2 ) {
			delete_data(x);
		}
		else {
			continue;
		}
	}
	std::cout <<"Contents of Linked list: ";
	display();
	return 0;
}