#include <iostream>

using namespace std;

int main()
{
 //Seen 
	int integer = (int)3.4;

	double double1 = 4.5;
	double double2 = 5.6;

	cout << (int)(double1 * double2) << endl;

//Unseen
	bool boolean = 10;

	int integer1 = 5;
	float floatNumber = 1.4;

	cout << integer1 + floatNumber << endl;

//Narrowing
	float float1 = 5.78;
	int int1 = float1; // Warning: narrowing conversion from 'float' to 'int'

//Widening
	int int1 = 5;
	double double1 = int1; // No warning: widening conversion from 'int' to 'float'

//If/Else/If-Else 
	int number1, number2;
	cin >> number1 >> number2;
	if (number1 > number2)
	{
		cout << "Number 1 is greater than Number 2" << endl;
	}
	else if (number1 < number2)
	{
		cout << "Number 1 is less than Number 2" << endl;
	}
	else
	{
		cout << "Number 1 is equal to Number 2" << endl;
	}

//And -- &&
	int num;
	cin >> num;

	if (num >= 1 && num <= 10) {
		cout << "The number is between 1 and 10" << endl;
	}

//Or -- ||
	int num;
	cin >> num;

	if (num < 1 || num > 10) {
		cout << "The number is outside the range of 1 to 10" << endl;
	}

//Not -- !
	if (!(num > 10)) {
		cout << "The number is 10 or less" << endl;
	}

//Switch
	int day;
	cin >> day;
	switch (day) {
	case 1:
		cout << "Monday" << endl; break;
	case 2:
		cout << "Tuesday" << endl; break;
	case 3:
		cout << "Wednesday" << endl; break;
	default:
		cout << "Invalid day" << endl; break;
	}
}