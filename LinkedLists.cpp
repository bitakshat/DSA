#include<bits/stdc++.h>

struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;
void insert(int new_data) {
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = new_data;    
	new_node -> next = head;
	head = new_node;
}

void display() {
	struct node* ptr;
	ptr = head;
	while( ptr != NULL ) {
		std::cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
}

int main(void) {

	std::cout <<"Inserting data: ";
	for( int x=0; x<=5; x++ ) {
		insert(x);
	}
	display();
	return 0;
}