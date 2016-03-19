#include <iostream>
#define KEYS sizeof(funcArr)/sizeof(funcArr[0])

using namespace std;


typedef void(*func)(void);

void showPersonalInfo(void);
void lenToMile(void);
void doublePrt(void);
void prtPattern1(void);
void prtPattern2(void);
void  celsToFahr( void );
void lightYearToMile(void);
void showTime(void);

func funcArr[] = { showPersonalInfo,lenToMile,doublePrt,celsToFahr,lightYearToMile, showTime};

int main(int argc, char** argv)
{
	int index = 0;

	cout << "Enter the No of func that you wish to test,or -1 if you wish to quit:";
	
	while( (cin >> index) && ( -1 != index ) && ( KEYS > index ) )
	{
	funcArr[index]();
	cout << "\nEnter the No of func that you wish to test,or -1 if you wish to quit:";	
	};
}

void showPersonalInfo(void)
{
	cout << "Sabrina " << "Shanghai minghang district longmingRD NO.4288";
}

void lenToMile(void)
{
	cout << "Enter the length in len:";
	int len;
	cin >> len;
	cout << len << " len= ";
	cout << len * 220 << " miles.";
}

void doublePrt(void)
{
	prtPattern1();
	prtPattern1();
	prtPattern2();
	prtPattern2();

}

void prtPattern1(void)
{
	cout << "Three blind mice\n";
}
void prtPattern2(void)
{
	cout << "See how they run\n";
}

void  celsToFahr( void )
{
	cout << "Please enter a Celsius value:";
	int cels;
	cin >> cels;
	cout << endl << cels << " degrees Celsius is " << (int)(1.8 *cels + 32) << " degree Fahrenheit.";
	
}

void lightYearToMile(void)
{
	cout << "Enter the number of light years:";
	float lightYear;
	cin >> lightYear;
	cout << endl << lightYear << " light years = " << lightYear * 63240 << " astronomical units.";
}
              
void showTime(void)
{
	cout << "Enter the numbeer of hours:";
	int hour;
	cin >> hour;
	cout << endl << "Enter the number of minutes:";
	int minute;
	cin >> minute;
	cout << "Time:" << hour <<":" << minute;
	
}              
