#include<bits/stdc++.h>
#include<typeid>

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
	std::cout << tmp -> data << std::endl;
}

int main(void) {

	insert(10);
	insert(20);
	return 0;
}