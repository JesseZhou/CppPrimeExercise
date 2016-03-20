#include <iostream>
#define KEYS sizeof(funcArr)/sizeof(funcArr[0])

using namespace std;

typedef void(*func)(void);

void heightInInch(void);
void BMIindex(void);
void latitude(void);
void secToDay(void);
void fuePerMile(void);
void EuropeStyleToAmerica(void); 

func funcArr[] = { heightInInch, BMIindex, latitude, secToDay, fuePerMile, EuropeStyleToAmerica };

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

void heightInInch(void)
{
	const int inchToIn = 12;
	
	cout << "Enter your height in inch:";
	int inchHeight;
	cin >> inchHeight;
	
	int In = inchHeight / inchToIn;
	inchHeight = inchHeight % inchToIn;
	
	cout << "\nYour length is " << In << " Ins And " << inchHeight  <<" inches.";
	
}

void BMIindex(void)
{
	const float poundToKg = 2.2f;
	const float inchToM = 0.0254;
	const int inToInch = 12;

	int In;	
	cout << "Enter your In part of Height:";
	cin >> In;
	
	int inch;
	cout << "Enter your inch part of Height:";
	cin >> inch;
	
	int pounds;
	cout << "Enter your weight in pound:";
	cin >> pounds;
	
	float height = (In * inToInch + inch)*inchToM;
	float weight = pounds / poundToKg;
	
	cout << "Your BMI is " << height/weight << endl;
}


void latitude(void)
{
	const int degreeToMin = 60;
	const int MinToSec = 60;
	
	int degrees,minutes,seconds;
	degrees = minutes = seconds = 0;
	
	cout << "Enter a latitude in degrees,minutes, and seconds:\n";
	cout << "First, enter the degress:";
	cin >> degrees;
	cout << "Second, enter the minutes:";
	cin >> minutes;
	cout << "Third, enter the seconds:";
	cin >> seconds;

	float fDegrees = degrees + (float)minutes / degreeToMin + (float)seconds / ( degreeToMin * MinToSec );
	
	cout <<  degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << fDegrees << " degrees.";

}


void secToDay(void)
{
	const int hourInDay = 24;
	const int miniteInHour = 60;
	const int secondInMinute = 60;
	
	cout << "Enter the number of seconds:";
	long allSeconds,allSecondsCopy;
	cin >> allSeconds;
	
	allSecondsCopy = allSeconds;
	int days = allSeconds / ( hourInDay * miniteInHour * secondInMinute );
	allSeconds %= ( hourInDay * miniteInHour * secondInMinute );
	
	int hours = allSeconds / ( miniteInHour * secondInMinute );
	allSeconds %= ( miniteInHour * secondInMinute );
	
	int minutes = allSeconds / ( miniteInHour * secondInMinute );
	allSeconds %= ( secondInMinute );
	
	cout <<  allSecondsCopy << " seconds = " << days << " days,"
											 << hours << " hours,"
											 << minutes << " minutes,"
											 << allSeconds << " allSeconds.";											 
}


void fuePerMile(void)
{
	cout << "Enter miles and fue In galone\n";
	cout << "First Enter miles:";
	int miles;
	cin >> miles;
	cout << "Second Enter fuel in galo:";
	int fuel;
	cin >> fuel;
	
	cout <<  miles / (float)fuel << " miles costs 1 galo of fuel.";
	
}


void EuropeStyleToAmerica(void)
{
	const float enMilePerMile = 0.6214;
	const float LPerGal = 3.875;
	
	cout << "Enter the gas for per 100 miles in L:";
	float fuel;
	cin >> fuel;
		
	cout << "In America style, your cost is " << 1 / (fuel * 100 / enMilePerMile * LPerGal )  << "mpg";
	
}
