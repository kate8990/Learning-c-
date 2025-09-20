#include <iostream>

using namespace std;

int main()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);

//Select Sort
	int minIndex;

	for (int i = 0; i < size; i++)
	{
		minIndex = i;
		for (int j = i; j < size; j++)
		{
			if (arr[minIndex] < arr[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

//Bubble Sort
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

//Insertion Sort
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

//Line Search

	int target = 5;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			cout << "Found at index: " << i << endl;
			break;
		}
	}

//Binary Search
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] == target)
		{
			cout << "Found at index: " << mid << endl;
			break;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return 0;

}
