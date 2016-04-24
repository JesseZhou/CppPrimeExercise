#include <iostream>
#include "Move.h"

using namespace std;

int main(void)
{
	Move one;
	Move two( 23,125 );
	Move three( 150,9 );
	
	one.showmove();
	
	one.add(two);
	one.add(three);
	
	one.showmove();
	
	one.reset();
	
	one.showmove();
	
	return 0;
}


