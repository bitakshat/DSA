#include<bits/stdc++.h>

#define MAX 10
int size = 0;

/*creating a stack*/
 struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;
void 
createEmptyStack( st *s ) {
    s -> top = -1;
}

/* check if the stack is full */
int
isFull( st *s ) {
    if(s->top == MAX - 1)
        return 1;
    else
    return 0;
}

/* check if the stack is empty */
int 
isEmpty( st *s ) {
    if(s->top == -1)
        return 1;
    else
    return 0;
}

/* push elemnts to the stack */
void 
push( st* s, int new_item ) {
    if( isFull(s) ) {
        std::cout << "Stack is already full!" << std::endl;
    }
    else {
        s->top++;
        s->items[s->top] = new_item;
    }
    size++;
}


/* Remove element from stack */
void
pop( st *s ){
    if(isEmpty(s)){
        std::cout << "The stack is empty!" << std::endl;
    }
    else {
    std::cout << "Item popped: ";
    s->top--;
    }
    size--;
    std::cout << std::endl;
}

/* Prints elements of stack */
void 
printStack( st *s ) {
    std::cout << "Stack: ";
    for( int i=0; i<=size; i++ ) {
        std::cout << s->items[i] << " ";
    }
    std::cout << std::endl;
}

//driver code
int
main( void ) {
    int ch;
    st *s = (st*) malloc(sizeof(st));

    createEmptyStack(s);
    for( int x=0; x<=5; x++) {
        push(s, x);
    }

    printStack(s);
    pop(s);
    std::cout << "After poppint out!" << '\n';
    printStack(s);
}
