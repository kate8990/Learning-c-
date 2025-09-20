#include <iostream>

using namespace std;

int main()
{
//While loop
	int i = 0;
	while (i < 5) {
		cout << "While: " << i << endl;
		i++;
	}
//Do-while loop
	int j = 0;
	do {
		cout << "Do-While: " << j << endl;
		j++;
	} while (j < 5);

//For loop
	for (int k = 0; k < 5; k++) {
		cout << "For: " << k << endl;
	}

//Nested loops
	for (int m = 0; m < 3; m++) {
		for (int n = 0; n < 2; n++) {
			cout << "Nested: " << m << ", " << n << endl;
		}
	}
//Forever loop
	while (true)
	{
		cout << "Forever loop" << endl;
	}
}
