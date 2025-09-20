#include <iostream>
using namespace std;

int main()
{
	//bite move
		//unsigned short x = 10;
		//int y = 5;

		//cout << (x >> 1) << (x << 1);

		//cout << ~x << endl;

		//cout << (x | y);
		//cout << (x & y);

	int a = 5, b = 9;

	cout << a << endl;
	cout << b << endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << endl;
	cout << b << endl;
}
