#ifndef _PERSON_H
#define _PERSON_H

#include <string>

using namespace std;

class Person{
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
	
public:
	Person(){
		lname = "nobody";
		fname[0] = '\0';
	}	
	
	Person(const string &ln, const char *fn = "Hey U");
	
	void Show()const;
	void FormalShow() const;
		
};

#endif
