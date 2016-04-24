#include "Stack.h"



Stack::Stack()
{
	top = 0;
	sum = 0;
}

bool Stack::isEmpty()const
{
	return top == 0;
}

bool Stack::isFull()const
{
	return top == MAX ;
}
	
bool Stack::push(const Item & item)
{
	if( top < MAX  )	
	{
		sum += item.payment;
		items[top++] = item;		
		return true;
	}
	else
	{
		return false;
	}	
}

bool Stack::pop(Item &item)
{
	if( top > 0 )
	{		
		item = items[--top];
		sum -= item.payment;
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::Show()
{
	using namespace std;
	
	cout <<  "total value is : " << sum ;

}
