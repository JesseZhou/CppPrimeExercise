#include "BankAccount.h"
#include <iostream>

bankAccount::bankAccount( const string name, string Account, double Balance)
{
	this->name = name;
	this->Account = Account;
	this->Balance = Balance;
}

void bankAccount::Show()const
{
	cout << "name: " << name << endl;
	cout << "Account: " << Account << endl;
	cout << "Balance: " << Balance << endl;
}


void bankAccount::deposit( double cash )
{
	if( cash < 0.001 )
	{
		cout << "deposit cash must be positive!" << endl;
	}
	else 
	{
		Balance += cash;
	}
}

void bankAccount::withdraw( double cash )
{
	if( cash < 0.001 )
	{
		cout << "withdraw cash must be positive!" << endl;
	}
	else if( cash > Balance )
	{
		cout << "no enough cash in Account,withdraw failed!" << endl;
	}
	else
	{
		Balance -= cash;
	}	
}
