//
//  golf.cpp
//  linuxSysFunc
//
//  Created by æ˜­è•¾çŽ‹ on 16/4/19.
//  Copyright Â© 2016å¹´ personal. All rights reserved.
//

#include "golf.hpp"
#include <string.h>
#include <iostream>

using namespace std;

// µÚÒ»¸ö¹¹Ôìº¯Êý 
void setgolf( golf &g, const char *name, int he )
{
    strncpy( g.fullname, name, Len );
    g.handicap = he;
}

int setgolf(golf & g)
{
    cout << "Enter your name:\n";
    cin >> g.fullname;
    
    if( 0 == strlen(g.fullname)  )
    {
    	return 0;
	}
    
    cout << "Enter your age:\n";
    cin >> g.handicap;
    
    if( !cin )
    {
    	return 0;
	}
    
    
    return 1;
}


void handicap( golf &g, int he )
{
    g.handicap = he;
}

void showgolf( const golf &g )
{
    cout << "fullname is " << g.fullname
    << " actual age is " << g.handicap << endl;
}
