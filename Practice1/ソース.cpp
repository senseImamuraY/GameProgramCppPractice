#include <cstdio> 
#include<iostream>
using namespace std;

#define FIVE_TIMES for(int i_=0; i_ < 5; ++i_)

int main()
{
	signed char a = -1;
	int b;

	b = a;
	printf("%08X (%d) \n", b, b);

	b = (unsigned char)a;
	printf("%08X (%d) \n", b, b);

	int rows = 3; // s”
	int cols = 4; // —ñ”

	union Value {
		int i;
		double d;
		char c;
	};

	FIVE_TIMES{
		cout << "‚±‚ñ‚É‚¿‚Í" << endl;
	}
	
	return 0;
}