//
//  main.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright © 2016 yunda. All rights reserved.
//

#include <stdio.h>
#include "stocks.hpp"

const int STKS = 4;

int main()
{
    using std::cout;
    using std::ios_base;
    
    Stock stocks[STKS] = {
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Objects",200,2.0),
		Stock("Mono",130,3.25),
		Stock("Fleep", 60, 6.5)
	};
    
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    
    cout << "Stock holdings:\n";    
    int st;
    for(st = 0; st < STKS; ++st)
    	stocks[st].show();
    	
	Stock top = stocks[0];
	for(st = 1; st < STKS; ++st)	    
		    top = top.topval(stocks[st]);

	cout << "Most valuable holding is:\n";
	top.show();
		    
    return 0;
}

