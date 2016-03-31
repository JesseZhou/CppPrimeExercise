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
private:
    char m_company[20];
    int m_shares;
    double m_share_val;
    double m_total_val;
    void set_tot(){ m_total_val = m_shares * m_share_val; }
    
public:
    void acquire(const char * co, int n, double pr );
    void buy( int num, double price );
    void sell( int num, double price );
    void update(double price);
    void show();
    // 另一个初始方法 
    Stock( const char * co, int n = 1000, double pr = 0.0 );
    Stock();
    ~Stock(){};
    const Stock & topval(const Stock &s )const;
};

#endif /* stocks_hpp */
