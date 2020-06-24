#include<bits/stdc++.h>

#define size 5
class Queue {
private:
	int items[size], front, rear;
public:
	Queue() {
		front = -1;
		rear = -1;
	}

	bool isFull() {
		if( front == 0 && rear == size -1 ) {
			return true;
		}
		return false;
	}

	bool isEmpty() {
		if( front == -1 )
			return true;
		else
			return false;
	}

	void enQueue( int element ) {
		if( isFull() ) {
			std::cout << "Queue is already full!" << std::endl;
		}
		else {
			if( front == -1 ) front = 0;
			rear++;
			items[rear] = element;
			std::cout << "Inserted element: " << element << std::endl;
		}
	}

	int deQueue() {
		int element;
		if( isEmpty() ) {
			std::cout << "Queue is already empty!" << std::endl;			
			return (-1);
		}
		else {
			element = items[front];
			if( front >= rear ) {
				front = -1;
				rear = -1;
			}
			else {
				front++;
			}
			std::cout << "Deleted: " << element << std::endl;
			return (element);
		}
	}

	void display() {
		/*
		 * Function to display elements of queue
		*/
		int i;
		if( isEmpty() ) {
			std::cout << "Queue is empty!" << std::endl;
		}
		else {
			std::cout << "Front index: " << front << std::endl;
			for( i=front; i<=rear; i++ ) {
				std::cout << items[i] << " ";
			}
		}

	}
};

int main() {
	Queue q;

	for( int x=1; x<=5; x++ ) {
		q.enQueue(x);
	}

	q.display();
	q.deQueue();

	q.display();

	return 0;
}