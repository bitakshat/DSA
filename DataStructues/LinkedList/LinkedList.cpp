#include<bits/stdc++.h>
#include<cstddef>

class Node {
private:
	int data;
	int* next;
	Node(int d) {
		data = -1;
		next = nullptr;
	}
};

class LinkedList:private Node{
public:
	int *head, *tail;
	LinkedList(): Node(){	
		head = nullptr;
		tail = nullptr;
	}
};

///////////list Functions//////////
bool insert( int value ) { 
	
}
bool deleteNode() { return true;}
int length(void) { return 0; }
int peek(void) { return 0;}
int pop(void) { return 0;}
bool push( int value ) { return true; }
void traverse(void) {}

int main(void) {
	LinkedList li(35); 			//inserting test value
	return 0;
}