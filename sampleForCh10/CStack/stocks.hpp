//
//  stocks.hpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright 漏 2016 yunda. All rights reserved.
//

#ifndef stocks_hpp
#define stocks_hpp

#include <iostream>
#include <cstring>

class Stock
{
	const static int Len = 30;
    std::string company;
    // 持有数量 
    int shares;
    double share_val;
    double total_val;
    // 凡是生成值的，似乎都叫setXXX 
    void set_tot(){ total_val = shares * share_val; }
    
public:
    void acquire(const char *co, int n, double pr );
    void buy( int num, double price );
    void sell( int num, double price );
    void update(double price);
    void show();
    // 构造函数 
    Stock();
    Stock(const char * co, int n, double pr );

	// 类的实例需要访问另一个类的实例 
	const Stock & topval(const Stock &) const;
		
};

#endif /* stocks_hpp */
