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

struct chaff{
};

// ���ǵ�һ�����캯���� 
void setgolf( golf &g, const char *name, int he );

// ���ǵڶ������캯���� 
int setgolf(golf & g);

// ����value 
void handicap(golf &g, int he);

// ��ӡֵ �����õĺô��ǲ��ش�����ʱ���� 
void showgolf( const golf &g );

#endif /* golf_hpp */
