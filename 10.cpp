#include <iostream>

using namespace std;

// Function address
void Foo()
{
	// Function pointer
	int (*sumptr)(int, int) = sum;
	cout << sumptr(2, 3) << endl;
}

int sum(int a, int b)
{
	return a + b;
}

// Array of function pointers
double sum(double a, double b)
{
	return a + b;
}

double substruct(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}

double divide(double a, double b)
{
	return a / b;
}

// Tail return type
template<typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}
int main()
{
	// Function adress
	cout << Foo << endl;

	//auto and decltype
	auto a1 = 0;           // int
	decltype(a1) a2 = a1;   // int

}
