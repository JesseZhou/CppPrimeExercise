//
//  main.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright © 2016 yunda. All rights reserved.
//

#include <stdio.h>
#include "stocks.hpp"

int main()
{
    using std::cout;
    using std::ios_base;
    Stock stock1("Hero ink");
    stock1.acquire("Nano", 20, 12.50);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    stock1.show();
    stock1.buy(15, 10.25);
    stock1.show();
    stock1.sell(400, 20.00);
    stock1.show();
    
    return 0;
}
