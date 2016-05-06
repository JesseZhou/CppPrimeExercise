#include <iostream>
#include "Move.h"
#include "listSample.h"

using namespace std;

void doIncrease(Item &a)
{
	a++;
}
	

int main(void)
{
	long a1 = 31;
	long a2 = 312;
	long a3 = 311;	
	long a4 = 341;	
	
	list  nlist;
	nlist.Add(a1);
	nlist.Add(a2);
	nlist.Add(a3);
	nlist.Add(a4);
	
	printf("%s", nlist.isEmpty()?"is Empty":"not Empty" );
	printf("%s", nlist.isFull()?"is Full":"not Full" );
	
	printf("init state of item nList.\n");
	nlist.description();
	

	nlist.visit(doIncrease);
	
	printf("state of item nList after visit.\n");	
	nlist.description();
	
	return 0;
}


