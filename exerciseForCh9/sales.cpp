#include "sales.h"
#include <ioStream>

// 这应该就是类的雏形 
namespace SALES{
	using namespace std;	

	void setSales( Sales &s, const double ar[], int n )
	{
		cout << "Hi I'm  void setSales( Sales &s, const double ar[], int n )\n";
	}
	
	void setSales( Sales &s )
	{
		cout << "Hi I'm void setSales( Sales &s )\n";	
	}
	
	void showSales(const Sales &s)
	{
		cout << "Hi I'm void showSales(const Sales &s) \n";
	}

}
