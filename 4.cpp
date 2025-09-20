#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
//Array
	int intArr[5]; // Declare an array of 5 integers
	char charArr[4]; // Declare an array of 4 characters
	double doubleArr[10]; // Declare an array of 10 doubles

//Indexation
	intArr[0] = 10; // Assign value to the first element
	cout << intArr[0] << endl; // Output the first element

	charArr[1] = 'A'; // Assign value to the second element
//Out of borders
	int arr[3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	cout << arr[3]; // Accessing out of bounds (undefined behavior)
	//Rubbish value

//Initialization
	int initArr[5] = { 1, 2, 3, 4, 5 }; // Initialize an array with values
	double initDoubleArr[3] = { 1.1, 2.2, 3.3 }; // Initialize an array with double values

	//Initialization with cycle
	const int size_arr = 5;
	int intArr[size_arr];

	for (int i = 0; i < 5; i++) {
		intArr[i] = i * 10; // Assign values using a loop
	}

//Iterating through an array for output to the console
	const int s = 5;
	int nums[s] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < s; i++) {
		cout << nums[i] << " "; // Output each element
	}

//Iterating through an array for sum
	const int n = 5;
	int numbers[n] = { 1, 2, 3, 4, 5 };
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += numbers[i]; // Add each element to sum
	}
	cout << "\nSum: " << sum << endl; // Output the sum

	//Foreach loop
	const int m = 5;
	int arr_foreach[m] = { 5, 10, 15, 20, 25 };
	for (int num : arr_foreach) {
		cout << num << " "; // Output each element using foreach
	}

//Auto
	for (auto item : nums) {
		cout << item << " "; // Output each element using auto
	}

//Rand
	srand(time(nullptr)); // Seed the random number generator
	int r = rand();
	cout << r << endl;
}