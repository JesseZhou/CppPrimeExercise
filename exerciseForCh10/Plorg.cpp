#include <iostream>
#include <string>

using namespace std;

void plorg::Show()const
{
	cout << "name is: " << name << endl;
	cout << "CI is: " << CI << endl;
}

plorg::plorg()
{
	strncpy( name, "plorg", Len);
	CI = 50;
}

void plorg::modifyCI(int CI)
{
	this.CI = CI;
}
