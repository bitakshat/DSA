

#include <bits/stdc++.h>

class Node {
    public:
        int data;
        Node* addr;
};

Node* head = NULL;

class LinkedList {
    public:
        void insert(int data) {
            Node* new_node = new Node();
            new_node -> data = data;
            new_node -> addr = head;
            head = new_node;
        }
        
        void display(void) {
            Node* temp = new Node();
            temp = head;
            while(temp != NULL) {
                std::cout << temp -> data << std::endl;
                temp = temp -> addr;
            }
        }
        
        void reverse(void) {
        	Node *curr = head;
			Node *prev = NULL;
			Node *next = NULL;

			while(curr != NULL) {
				next = curr -> addr;
				curr -> addr = prev;
				prev = curr;
				curr = next;
			}
			head = prev; 
        }
};

/* Driver Code */
int main(void) {
    LinkedList li;
    li.insert(10);
    li.insert(20);
    li.insert(30);
    
    li.display();
    return 0;
}
