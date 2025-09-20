#include <iostream>
#include <cstdlib>

using namespace std;

void PrintHello()
{
	std::cout << "Hello World!\n";
}

int getRandomNumber()
{
	srand(time(0)); // Seed the random number generator
	return rand() % 100; // Random number between 0 and 99
}

//Parameters
void printNumber(int num)
{
	cout << "Number: " << num << endl;
}

int sum(int a, int b)
{
	return a + b;
}

//Passing an array to a function
void reverseArray(int arr[], int size)
{
	for (int i = 0; j = size - 1; i < size / 2; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

//Field of view
int global = 10; // Global variable


int main()
{

	int localMain = 20; // Local variable

	if (localMain == global) {
		int localIf = 10; // Local variable in if block
	}
   
	PrintHello();

	int number = getRandomNumber();
	cout << "Random Number: " << getRandomNumber() << endl;

	printNumber(number);
	cout << "Sum: " << sum(5, 10) << endl;

}



