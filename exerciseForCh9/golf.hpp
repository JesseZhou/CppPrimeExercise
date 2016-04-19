//
//  golf.hpp
//  linuxSysFunc
//
//  Created by 昭蕾王 on 16/4/19.
//  Copyright © 2016年 personal. All rights reserved.
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

void setgolf( golf &g, const char *name, int he );

// 用用户的输入初始化g的值
int setgolf(golf & g);

// 重置handicap的值
void handicap( golf &g, int he );

// 展示g的内容
void showgolf( const golf &g );

#endif /* golf_hpp */
