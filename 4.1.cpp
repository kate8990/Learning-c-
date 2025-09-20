#include <iostream>
using namespace std;

int main()
{
//Two-dimensional array
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	// Print the array
	arr[0][1] = -2;
	cout << arr[0][1] << endl;

//Initialization using a loop
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = i + j;
		}
	}

//List of elements
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}