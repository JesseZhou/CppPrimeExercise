#include "Move.h"
#include <iostream>

using namespace std;

Move::Move(double a , double b )
{
	x = a;
	y = b;
}

void Move::showmove()const
{
	cout << " x is: " << x << endl;
	cout << " y is: " << y << endl;
}

Move &Move::add(const Move &m)
{
	x += m.x;
	y += m.y;
	
	return *this;
}

void Move::reset( double a , double b  )
{
	x = a;
	y = b;	
}
