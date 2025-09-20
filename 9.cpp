#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
// Two-dimensional dynamic array
	int size_x = 3, size_y = 5;

	int** arr_3x5 = new int* [size_x];

	for (int i = 0; i < size_x; i++)
	{
		arr_3x5[i] = new int[size_y];
		for (int j = 0; j < size_y; j++)
		{
			arr_3x5[i][j] = rand() % 10;
			cout << arr_3x5[i][j] << " ";
		}
		cout << endl;
	}
// Deleting the array
	for (int i = 0; i < size_x; i++)
	{
		delete[] arr_3x5[i];
	}
	delete[] arr_3x5;

}