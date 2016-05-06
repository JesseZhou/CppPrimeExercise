#ifndef __LISTSAMPLE_H
#define __LISTSAMPLE_H

typedef long Item;

const int ListSize = 40;

class list{
private:
	Item array[ListSize];
	int index;
public:
	list();
	void description(void);
	void Add(Item &a);
	bool isEmpty(void);
	bool isFull(void);
	void visit( void(*pf)(Item &a) );
};


#endif
