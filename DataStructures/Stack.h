#include "LinkedList.h"

#ifndef STACK
#define STACK

class Stack {
public:
	Stack();
	void pop();
	void push(int data);
	int peek();
	void isEmpty();
private:
	Node top;                                
	int min;
};

#endif