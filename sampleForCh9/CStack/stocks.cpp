//
//  stocks.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright © 2016 yunda. All rights reserved.
//

#include "stocks.hpp"

Stock::Stock( const char * co, int n, double pr )
{
    std::strncpy(m_company, co, 19);
    m_company[19] = '\0';
    
    if (n < 0)
    {
        std::cerr<< "Number can't be negative:"
        << m_company ;
        m_shares = 0;
    }
    else
        m_shares = n;
    
    m_share_val = pr;
    set_tot();
}

void Stock::acquire(const char * co, int n, double pr )
{
    std::strncpy(m_company, co, 19);
    m_company[19] = '\0';
    
    if (n < 0)
    {
        std::cerr << "Number shouldn't be negative."
            << m_company << " shares set to 0.\n";
        m_shares = 0;
    }
    else
        m_shares = n;
    
    m_share_val = pr;
    set_tot();
}


void Stock::buy( int num, double price )
{
    if (num < 0) {
        std::cerr << "number of purchase shouldn't be negative."
            << "Transaction aborted.\n";
    }
    else
    {
        m_shares += num;
        m_share_val = price;
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
    else if( num > m_shares )
    {
        cerr << "Should not sell more than you have!"
            << "Transaction aborted.\n";
    }
    else
    {
        m_shares -= num;
        m_share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    m_share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;

    
    
}