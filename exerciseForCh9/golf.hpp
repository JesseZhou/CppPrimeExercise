//
//  golf.hpp
//  linuxSysFunc
//
//  Created by æ˜­è•¾ç‹ on 16/4/19.
//  Copyright Â© 2016å¹´ personal. All rights reserved.
//

#ifndef golf_hpp
#define golf_hpp

#include <stdio.h>

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

struct chaff{
};

// ÕâÊÇµÚÒ»¸ö¹¹Ôìº¯Êı°É 
void setgolf( golf &g, const char *name, int he );

// ÕâÊÇµÚ¶ş¸ö¹¹Ôìº¯Êı°É 
int setgolf(golf & g);

// ÖØÖÃvalue 
void handicap(golf &g, int he);

// ´òÓ¡Öµ ÓÃÒıÓÃµÄºÃ´¦ÊÇ²»±Ø´´½¨ÁÙÊ±¶ÔÏó 
void showgolf( const golf &g );

#endif /* golf_hpp */
