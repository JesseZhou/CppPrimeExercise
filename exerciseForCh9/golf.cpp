//
//  golf.cpp
//  linuxSysFunc
//
//  Created by 昭蕾王 on 16/4/19.
//  Copyright © 2016年 personal. All rights reserved.
//

#include "golf.hpp"
#include <string>
#include <iostream>

using namespace std;

void setgolf( golf &g, const char *name, int he )
{

    
    strncpy( g.fullname, name, Len );
    g.handicap = he;
}

int setgolf(golf & g)
{
    cout << "Enter the name:\n";
    
}


void handicap( golf &g, int he )
{
    g.handicap = he;
}

void showgolf( const golf &g )
{
    cout << "fullname is " << g.fullname
    << "handicap is" << g.handicap << endl;
}