//
//  stocks.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright 漏 2016 yunda. All rights reserved.
//

#include "stocks.hpp"
#include <ioStream>

// 第一次购买 
void Stock::acquire(const char * co, int n, double pr )
{
	if( 0 == co || 0 >= n || 0.0 > pr )
	{
		std::cerr << "illegal params.\n";
		return;
	}
	
    company = co;
    
	shares = n;    
    share_val = pr;
    set_tot();
}


void Stock::buy( int num, double price )
{
    if (num < 0) {
        std::cerr << "number of purchase shouldn't be negative."
            << "Transaction aborted.\n";
    }
    // 加持并刷新价格 
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
    
}


void Stock::sell( int num, double price )
{
    using std::cerr;
    if (num < 0)
    {
        cerr << "number of sold can't be negative."
            << "Transaction aborted.\n";
    }
    else if( num > shares )
    {
        cerr << "Should not sell more than you have!"
            << "Transaction aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

// 刷新价格 
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout <<  "Stock Name:" << company <<
		 	 "Stock share "<<  shares <<
			 " total value " << total_val;
}

Stock::Stock()
{
	company = "default";
	shares = 99;
	total_val = 0;
}

// 第一次购买 
Stock::Stock(const char * co, int n, double pr )
{
   	company = co;
   	
	shares = n;    
    share_val = pr;
    set_tot();
}


const Stock & Stock::topval(const Stock &s) const
{
	if( s.total_val > this->total_val )
		return s;
	else
		return *this;	
}
