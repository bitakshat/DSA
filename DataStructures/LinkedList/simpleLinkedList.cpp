 
#include <bits/stdc++.h>

class Node {
public:
	int data;
	Node* ptr;
};

Node *head = NULL;
/* class with utility functions */
class SimpleLinkedList {

public:
	/* store new element in list */
	void insert(int value) {
		Node* new_node = new Node();
		new_node -> data = value;
		new_node -> ptr = head;
		head = new_node;
	}

	/* deletes an element */
	void deleteNode(int value) {
		Node *temp, *prev;
		temp = head;

		while((temp != NULL) && (temp -> data != value)) {
			prev = temp;
			temp = temp -> ptr;
		}

		/* case 1: empty list */
		if(prev == NULL) {
			std::cout << "[!] Empty list" << std::endl;
		}
		/* case2: only 1 node is present in list */
		if(temp == head) {
			head = head -> ptr;
		}
		/* case3: delete from a given position */
		else {
			prev -> ptr = temp -> ptr;
			if(temp -> ptr == NULL) {
				temp = prev;
			}
		}
	}

	/* prints the list in reverse */
	void reverse(void) {
		Node *curr = head;
		Node *prev = NULL;
		Node *next = NULL;

		while(curr != NULL) {
			/* store next*/
			next = curr -> ptr;
			/* reverse current node's pointer */
			curr -> ptr = prev;
			/* moves pointers one position ahead */
			prev = curr;
			curr = next;
		}
		head = prev;
	}

	/* display list contents */
	void display() {
		Node* temp;
		temp = head;
		
		while(temp != NULL) {
			std::cout << temp -> data << " ";
			temp = temp -> ptr;
		}
	}
};

/* Driver function */
int main(void) {

	SimpleLinkedList li;
	
	/* loop to add multiple values */
	for (int i = 0; i < 10; ++i){
		li.insert(i);
	}

	li.deleteNode(4);
	li.display();
	
	// Use more utility functions 
	return 0;
}