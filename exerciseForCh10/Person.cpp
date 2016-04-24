#include "Person.h"
#include <String.h>
#include <iostream>

Person::Person(const string &ln, const char *fn )
{
	lname = ln;
	strncpy(fname,fn, LIMIT);
		
}
	
void Person::Show()const
{
	cout << "default name is " << lname << "." << fname << endl;
}

void Person::FormalShow() const
{
	cout << "Formal name is " << fname << "." << lname << endl;	
}
