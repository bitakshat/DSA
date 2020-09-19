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
	    if( front == 0 && rear == size - 1 ) {
	        return true;
	    }
	    if( front == rear + 1 ) {
			return true;
	    }
	    return false;
	}

	bool isEmpty() {
	    if( front == -1 ) {
			return true;
	    }
	    else {
	    	return false;
	    }
	}

	//Adding an element
	void enQueue( int element ) {
    	if( isFull() ) {
			std::cout << "Queue is already full" << std::endl;
	    }
	    else {
			if( front == -1 ) front = 0;
			rear = (rear + 1 ) % size;
			items[rear] = element;
			std::cout << std::endl << "Inserted: " << element << " ";
	    }
	}
	
	//Removing an element
	int deQueue() {
	    int element;
	 
	    if( isEmpty() ) {
			std::cout << "Queue is empty!" << std::endl;
		    return (-1);
	    }
	    else {
		    element = items[front];
		    if( front == rear ) {
		        front = -1;
		        rear = -1;
		    }
		    else {
		        front = (front + 1) % size;
		    }
		}
    	return (element);   
	}
	
	void display() {
	    int i;
	    if( isEmpty() ) {
			std::cout << std::endl;
	    }
	    else {
			std::cout << "Front -> " << front << std::endl;
			std::cout << "Items -> ";
			for( i = front; i != rear; i = ( i + 1 ) % size ) 
	            std::cout << items[i] << " ";
	    	
	   		std::cout << std::endl;
			std::cout << "Rear -> " << rear << std::endl;
	    }
	}
};

int main( void ) {
    Queue q;
    q.deQueue(); //fails because no element is added 

    for( int x = 0; x <= 5; ++x ) {
		q.enQueue(x);
    } 

    q.display();
    return 0;
}

