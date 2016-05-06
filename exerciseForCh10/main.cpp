#include <iostream>
#include "Move.h"
#include "listSample.h"

using namespace std;

int main(void)
{
	list  nList;
	nlist.add(34);
	nlist.add(33);
	nlist.add(644);
	nlist.add(74);
	
	printf("%s", nlist.isEmpty()?"is Empty":"not Empty" );
	printf("%s", nlist.isFull()?"is Full":"not Full" );
	
	void doIncrease(Item &a)
	{
		a++;
	}
	
	nList.visit(doIncrease);
	
	return 0;
}


