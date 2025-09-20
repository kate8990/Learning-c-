#include <iostream>
#include <cstdlib>

using namespace std;  
//link parqameter
template <typename T>
void SwapValues(T& a, T& b) // reference parameters
{
	T temp = a;
	a = b;
	b = temp;
}

// adding elements to a dynamic array
void addToArr(int*& arr, int& size, int value) // reference to pointer and reference to int
{
	int* newArr = new int[size + 1]; // allocate memory for a new array with one extra element
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i]; // copy old elements to the new array
	}
	newArr[size] = value; // add the new element at the end
	size++; // increase the size
	delete[] arr; // free memory allocated for the old array
	arr = newArr; // point arr to the new array
}

int main()
{
	// constant pointer
	int a = 10, b = 12;
	int* const ptr = &a; // const pointer to int
	ptr = &b; // Error!

	// dereferencing a const pointer
	int a = 10, b = 12;
	int* const ptr = &a; // const pointer to int
	*ptr = 20; // OK
	cout << "a: " << a << endl; // Output: a: 20
	//allows dereferencing to change the value of a const pointer

	// link 
	int value = 1234;
	int* valPtr = &value; // pointer to int
	int& valRef = value; // reference to int
	int* p = &valRef; // OK: valRef is an alias for value
	cout << "*valPtr: " << *valPtr << endl; // Output: *valPtr: 1234
	cout << "valRef: " << valRef << endl; // Output: valRef: 1234
	cout << "value: " << value << endl; // Output: value: 1234
	cout << "p: " << *p << endl; // Output: p: 1234

	// swap values using reference
	int a = 10, b = 20;
	SwapValues(a, b); // a is now 20, b is now 10
	cout << "a: " << a << ", b: " << b << endl; // Output: a: 20, b: 10

	/*Static memory - memory allocated by the operating system 
	for a program at the compilation stage. Its volume is 
	determined in advance and cannot be changed. This memory stores
	all variables that have been declared statically.
	Dynamic memory - memory allocated at the request of the 
	program during execution. Allows you to create an array by 
	learning the number of elements after starting the program 
	from the user.*/

	//Memory allocation
	float* fptr = new float(3.5); // allocate memory for a float
	int* iptr = new int(6); // allocate memory for an int
	char* cptr = new char('a'); // allocate memory for a char

	//Memory deallocation
	delete fptr; // free memory allocated for float
	delete iptr; // free memory allocated for int
	delete cptr; // free memory allocated for char

	//Dynamic array allocation
	int s;
	cout << "Enter size of array: ";
	cin >> s;

	double* dArr = new double[s]; // allocate memory for an array of doubles

	for (int i = 0; i < s; i++)
	{
		dArr[i] = rand() % 100;
		cout << dArr[i] << " ";
	}

	// Dynamic array deallocation
	delete[] dArr; // free memory allocated for the array

	//Memory leak example
	int* arr = new int[5]; // allocate memory for an array of 5 integers
	 
	delete[] arr; // free memory allocated for the array
	delete[] arr; // Error: double deletion of memory




}