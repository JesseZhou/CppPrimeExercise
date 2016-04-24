//
//  main.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright 漏 2016 yunda. All rights reserved.
//

#include <iostream>
#include <ctype>
#include "Stack.h"


int main()
{
 	using namespace std;
 	Stack st;
 	// 获取输入 
 	char ch;
	// 需要入栈的内容 
	unsigned long po;
	
	while( cin >> ch &&  'Q' != toupper(ch) )
	{
		// 过滤回车之前的所有字符，新技能get 
		while( '\n' != cin.get() )
			continue;
			
		if( !isalpha(ch) )	
		{
			cout << '\a';
			continue;
		}
		
		switch(toupper(ch))
		{
			case 'A':cout << 
			
		}
	}
	
    return 0;
}

