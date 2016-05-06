#include "listSample.h"

list::list()
{
	 index = 0;	 
}

void list::Add(Item &a)
{
	if( isFull() )	
	{
		return;
	}
	
	array[index++] = a;
}

bool list::isEmpty(void)
{
	return ( index == 0 );
}

bool list::isFull(void)
{
	return index >= ListSize - 1;
}

void list::visit( void(*pf)(Item &) )
{
	for( int i = 0; i < index; ++i )
	{
			pf( array[i] );
	}
}
