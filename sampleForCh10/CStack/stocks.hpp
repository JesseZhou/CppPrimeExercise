//
//  stocks.hpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright © 2016 yunda. All rights reserved.
//

#ifndef stocks_hpp
#define stocks_hpp

#include <iostream>
#include <cstring>

class Stock
{
	const static int Len = 30;
    std::string company;
    // �������� 
    int shares;
    double share_val;
    double total_val;
    // ��������ֵ�ģ��ƺ�����setXXX 
    void set_tot(){ total_val = shares * share_val; }
    
public:
    void acquire(const char *co, int n, double pr );
    void buy( int num, double price );
    void sell( int num, double price );
    void update(double price);
    void show();
    // ���캯�� 
    Stock();
    Stock(const char * co, int n, double pr );

	// ���ʵ����Ҫ������һ�����ʵ�� 
	const Stock & topval(const Stock &) const;
		
};

#endif /* stocks_hpp */
