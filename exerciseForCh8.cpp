#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
	char name[80];
	double wt;
	int cal;
};

struct stringy{
	char * str;
	int ct;
};


// 供习题一调用的方法 
void printStr( char *s	,int cnt = 0 );

// 供习题二调用的方法 
inline void printCandy(const struct CandyBar & candy) { cout << candy.name << " " << candy.wt << " " << candy.cal << endl; }
const struct CandyBar & initCandy( struct CandyBar & candy,const char *s = "Millennium Munch", double wt = 2.85, int cal = 350 );

// 供习题三调用 
string toUpper( const string & str );

// 习题四的方法 
void set( string & str, const char *s );
void show( const string & str, int n = 1 );
void show( const char *s, int n = 1 );

// 习题五 
template< typename T >
const T &max5( T arr[] );

// 习题六 
template< typename T> 
const T maxn( const T arr[], int n );

template<>const string maxn<string>( const string arr[], int n );


int main()
{
	char *arr_c[] = {
						"tender",
						"tender_maxn",
						"tender____dttqdf",
						"tender_ssssssssssssssd",
						"tenderw392894fdj"				
					};
	
	int arr_i[] = {32,5,13,45,31,61};
	float arr_f[] = {12.3, 41.3, 41.2, 52.23};
	
	cout << maxn(arr_i,6) << endl;
	cout << maxn(arr_f,4) << endl;
	cout << maxn(arr_c,5) << endl;
	return 0;
}

void printStr( char *s	,int cnt )
{
	static int i = 0;	
	++i;

	if( 0 == cnt )
	{
		cout << s << endl;
	}
	else
	{
		for( int j = 0; j < i; ++j )
			cout << s << endl;					
	}

}

const struct CandyBar & initCandy( struct CandyBar & candy,const char *s, double wt, int cal)
{
	strcpy( candy.name, s );
	candy.wt = wt;
	candy.cal = cal;

	return candy;
} 

string toUpper( const string & str )
{
	char temp[200] = {0};
	int i = 0;
	
	while( str[i] )
	{
		if( isalpha(str[i]) )
			temp[i] = toupper(str[i]);
		else
			temp[i] = str[i];				
		
		++i;	
	}
	
	temp[i] = '\0';
	
	return temp;
}

void set( string & str, const char *s )
{
	str = string(s);
}

void show( const string & str, int n)
{
	if( n < 0 )
		n = 0;
		
	for( int i = 0; i < n; ++i )
		cout << str << endl;	
}

void show( const char *s, int n )
{
	if( n < 0 )
		n = 0;
		
	for( int i = 0; i < n; ++i )
		cout << s << endl;	
	
}

template< typename T>
const T &max5( T arr[] )
{
	T temp = arr[0];
	
	for( int i = 1; i < 5; ++i ) 
	{
		if( arr[i] > temp )
		{
			temp = arr[i];
		}
	}
	
	return temp;
}

template< typename T> 
const T maxn( const T arr[], int n )
{
	T temp = arr[0];
	
	for( int i = 1; i < n; ++i ) 
	{
		if( arr[i] > temp )
		{
			temp = arr[i];
		}
	}
	
	return temp;
}

// 用string代替char *,效果极好 
template<>const string maxn<string>( const string arr[], int n )
{
	string temp = arr[0];
	
	for(int i = 1; i < n; ++i)
	{
		if( arr[i].length() > temp.length() )
		{
			temp = arr[i];
		}
	}
	
	return temp;
}

