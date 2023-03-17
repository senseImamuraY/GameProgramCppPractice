#include <cstdio>
#include<iostream>
using namespace std;

void main()
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
}