#include <iostream>

using namespace std;

void heightInInch(void);

int main(int argc, char** argv)
{
	
	
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
	
	cout << "Enter your in part of Height:";
	int In;
	cin >> In;
	cout << "Enter your inch part of Height:";
	int inch;
	cin >> inch;
	cout << "Enter your weight in pound:";
	int pounds;
	cin >> pounds;
	
	float height = (In * inToInch + inch)*inchToM;
	float weight = pounds / poundToKg;
	
	cout << "Your BMI is " << height/weight << endl;
}


