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

	int rows = 3; // �s��
	int cols = 4; // ��

	enum E{S,A,P};

	cout << (int)A << endl;
	char* p = reinterpret_cast<char*>(1000000);
}