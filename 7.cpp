#include <iostream>

using namespace std;

//swapping arguments using pointers
void ChangeValue(int* value)
{
	*value += 10;
}

int main()
{

	// print address of variable
	int x = 100;
	cout << &x << endl;

	// pointer to variable
	int* ptrx = &x;
	cout << ptrx << endl;

	// dereference pointer
	cout << *ptrx << endl;

	// multiple pointers to the same memory location
	int value = 15;

	int* ptr1 = &value;
	int* ptr2 = &value;

	cout << ptr1 << endl;
	cout << ptr2 << endl;

	//swapping arguments using pointers
	int number = 10;

	cout << number << endl;
	ChangeValue(&number);
	cout << number << endl;

	//pointers nullptr
	double* ptrD = 0;
	ptrD = NULL;
	ptrD = nullptr;

	cout << ptrD << endl;

}
