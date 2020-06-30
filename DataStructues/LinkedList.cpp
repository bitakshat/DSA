#include<bits/stdc++.h>

struct Node {
	int data;
	struct Node* next; 
};

struct Node* head = NULL;
void insert(int n) {

	struct Node* tmp = (struct Node*) malloc(sizeof(struct Node));
	tmp -> data = n;
	tmp -> next = head; 
	head = tmp;
	// std::cout << tmp -> data << std::endl;
}

void display() {

	std::cout <<"Contents of list: ";
	struct Node* temp = head;
	while( head != NULL ) {
		std::cout << temp -> data << " ";
		temp = temp -> next;
	}
}

int main(void) {

	insert(10);
	insert(20);

	display();
	return 0;
} 
