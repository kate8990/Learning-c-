#include <iostream>

using namespace std;

int main()
{
	//Arithmetic operators: +, -, *, / , %
	//Assignment operators: =, +=, -=, *=, /= etc.
	//Comparison operators: == , != , > , <, >= , <=
	//Logical operators: &&, || , !
	//Bitwise operators: &, | , ^, ~, << , >>
	//Increment/decrement operators: ++, --

	int a = 10;
	int b = 3;
	int c = 0;

	//Arithmetic operators
	c = a + b; // c = 13
	cout << "c = a + b = " << c << endl;
	c = a - b; // c = 7
	cout << "c = a - b = " << c << endl;
	c = a * b; // c = 30
	cout << "c = a * b = " << c << endl;
	c = a / b; // c = 3
	cout << "c = a / b = " << c << endl;
	c = a % b; // c = 1
	cout << "c = a % b = " << c << endl;
	c += a; // c = c + a = 1 + 10 = 11
	//Assignment operators
	cout << "c += a -> c = " << c << endl;
	c -= a; // c = c - a = 11 - 10 = 1
	cout << "c -= a -> c = " << c << endl;
	c *= a; // c = c * a = 1 * 10 = 10
	cout << "c *= a -> c = " << c << endl;
	c /= a; // c = c / a = 10 / 10 = 1
	cout << "c /= a -> c = " << c << endl;
	c %= a; // c = c % a = 1 % 10 = 1
	cout << "c %= a -> c = " << c << endl;
	//Comparison operators
	bool result; // true or false
	result = (a == b); // false
	cout << "a == b -> " << result << endl;
	result = (a != b); // true
	cout << "a != b -> " << result << endl;
	result = (a > b); // true
	cout << "a > b -> " << result << endl;
	result = (a < b); // false
	cout << "a < b -> " << result << endl;
	result = (a >= b); // true
	cout << "a >= b -> " << result << endl;
	result = (a <= b); // false
	cout << "a <= b -> " << result << endl;
	//Logical operators
	bool x = true;
	bool y = false;
	result = x && y; // false
	cout << "x && y -> " << result << endl;
	result = x || y; // true
	cout << "x || y -> " << result << endl;
	result = !x; // false
	cout << "!x -> " << result << endl;
	result = !y; // true
	cout << "!y -> " << result << endl;
	//Increment/decrement operators
	int i = 5;
	cout << "i = " << i << endl; // 5
	cout << "i++ = " << i++ << endl; // 5
	cout << "i = " << i << endl; // 6
	cout << "++i = " << ++i << endl; // 7
	cout << "i = " << i << endl; // 7
	cout << "i-- = " << i-- << endl; // 7
	cout << "i = " << i << endl; // 6
	cout << "--i = " << --i << endl; // 5
	cout << "i = " << i << endl; // 5
	return 0;

}
