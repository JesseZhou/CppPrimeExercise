#ifndef _BANKACCOUNT_H
#define _BANKACCOUNT_H

#include <string>

using namespace std;

class bankAccount{
	
	string name;
	string Account;
	double Balance;
			
	public:
		bankAccount( const std::string name = "anonymous", std::string Account = "default", double Balance = 0.0);
		void Show()const;
		void deposit( double cash );
		void withdraw( double cash );
};


#endif
