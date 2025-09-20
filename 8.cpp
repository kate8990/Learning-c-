#include <iostream>
#include <cstring>

using namespace std;

int main()
{
// lines indexation
	char string[6] = "Hello";
	char* ptr = string;

	cout << string[1] << endl;
	cout << (int)string[5] << endl;

	char str[] = "Hello my love";
	char str1[] = "Hello my love"; , str2[] = "Hello my bumbum";
	size_t size = strlen(str1) + strlen(str2) + 1;
	char* buffer = new char[size];
	buffer[0] = '\0';
//cstring
	//strlen
	cout << strlen(str) << endl;
	//ctrcat
	strcat(buffer, str1);
	strcat(buffer, str2);
	cout << buffer << endl;
	delete[] buffer;
	//strcpy
	strcpy(buffer, str);
	//strcmp
	cout << strcmp(str1, str2) << endl;
	//strchr
	cout << strchr(str, 'm') << endl;
	//strstr
	cout << strstr(str, "my") << endl;
	//strlwr
	_strupr(str);
	cout << str << endl;
	//strnset
	_strnset(str, '*', 5);
	cout << str << endl;
// dynamic memory allocation for strings
	//malloc
	int* arr = (int*)malloc(5 * sizeof(int));
	//calloc
	int* arr1 = (int*)calloc(5, sizeof(int));
	//realloc
	int* arr = (int*)malloc(5 * sizeof(int));
	arr = (int*)realloc(arr, 10 * sizeof(int));
	//free
	free(arr);
}