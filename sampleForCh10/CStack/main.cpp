//
//  main.cpp
//  CStack
//
//  Created by Sabrina on 3/29/16.
//  Copyright © 2016 yunda. All rights reserved.
//

#include <iostream>
#include <ctype>
#include "Stack.h"


int main()
{
 	using namespace std;
 	Stack st;
 	// ��ȡ���� 
 	char ch;
	// ��Ҫ��ջ������ 
	unsigned long po;
	
	while( cin >> ch &&  'Q' != toupper(ch) )
	{
		// ���˻س�֮ǰ�������ַ����¼���get 
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

