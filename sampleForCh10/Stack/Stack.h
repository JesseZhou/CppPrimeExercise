#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Customer.h"

typedef customer Item;

class Stack{
	static const int MAX = 10;
	Item items[MAX];	
	int top;
	long sum;
	
public:
	Stack();
	bool isEmpty()const;
	bool isFull()const;
	
	bool push(const Item & item);
	bool pop(Item &item);
	void Show();
};

#endif
