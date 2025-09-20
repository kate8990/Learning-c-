#include <iostream>
//#define SQR(X) ((X) * (X)) // macro function
//#define CUBE(X) (SQR(X) * (X))

using namespace std;

// inline function
//inline int add(int a, int b)
//{
//	return a + b;
//}

// overloading
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//float sum(float a, float b)
//{
//	return a + b;
//}

// Знаходження максимального значення з двох цілих
int FindMax(int a, int b) {
    return (a > b) ? a : b;
}

// Знаходження максимального значення з трьох цілих
int FindMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Знаходження максимального значення у масиві цілих
int FindMax(int arr[], int size) {
    int max = arr[0];   // Припускаємо, що перший елемент найбільший
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Знаходження максимального значення у масиві дробових
double FindMax(double arr[], int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Знаходження максимального значення з трьох дробових
double FindMax(double a, double b, double c) {
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}



// Template function
template <typename T> T Multiply(T left, T right)
{
	return left * right;
}

template <typename T> double avgArr(T arr[], int size)
{
	int sum = arr[0];
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

//Recursion
int Factorial(int n)
{
	if (n == 0) return 1;
	return n * Factorial(n - 1);
}




int main()
{
	//// macro function
	//cout << SQR(10) - CUBE(5) << endl;

	//// overloading
	//cout << sum(10, 20) << endl;
	//cout << sum(10.5f, 20.3f) << endl;

    cout << "Max of 5 and 10: " << FindMax(5, 10) << endl;
    cout << "Max of 3, 7, 1: " << FindMax(3, 7, 1) << endl;

    int arr1[] = { 1, 9, 3, 7, 5 };
    cout << "Max in int array: " << FindMax(arr1, 5) << endl;

    double arr2[] = { 1.2, 3.4, 2.2, 9.9 };
    cout << "Max in double array: " << FindMax(arr2, 4) << endl;

    cout << "Max of 2.5, 7.1, 5.8: " << FindMax(2.5, 7.1, 5.8) << endl;

    return 0;
}