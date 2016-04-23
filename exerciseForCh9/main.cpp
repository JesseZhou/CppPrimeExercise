//
//  main.cpp
//  linuxSysFunc
//
//  Created by 昭蕾王 on 16/4/19.
//  Copyright © 2016年 personal. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "golf.hpp"
#include "sales.h"

const int Num = 20;

int main( void )
{
    using namespace std;
    using namespace SALES;
	Sales  s1,s2;
	
	double ar[] = {3.2,33.1,5.3,1.5};
	
	setSales( s1, ar, 3 );
	setSales(s2 );
	showSales(s2);
	
	
	return 0;
}
