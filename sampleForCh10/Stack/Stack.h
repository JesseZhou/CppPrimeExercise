#ifndef STACK_H
#define STACK_H

typdef unsigned long Item;

class Stack{
	const int MAX = 10;
	Item items[MAX];	
	int top;
	
public:
	Stack();
	bool isEmpty()const;
	bool isFull()const;
	
	bool push(const Item & item);
	bool pop(Item &item);
};

#endif
