#include <iostream>
class Node{
	public:
		int a;
	    Node *ptr; 
};

Node *head = NULL;

void insert(int value)
{
	Node *new_node = new Node();
	new_node -> a = value;
	new_node -> ptr = head;
	head = new_node;
}

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

void display(void)
{
    Node *temp = new Node();
    temp = head;
    while(temp != NULL)
    {
    	std::cout<<temp -> a <<  " ";
    	temp = temp -> ptr;
    }
}

int main()
{
	insert(9);
	insert(7);
	insert(5);
	reverse();
	display();

	return 0;
}