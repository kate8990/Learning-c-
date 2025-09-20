#include <iostream>

using namespace std;

// structures
struct date {
	int day;
	int month;
	int year;
	int weekday;
	char month_name[15];
};

//struct in struct
struct person {
	char name[50];
	char address[100];
	char zipcode[10];
	int s_number[10];
	int salary[4];
	date birthdate;
	date hiredate;
};

// size of struct
struct Test {
	char c; // 1 byte
	int i; // 4 bytes
};

// struct with bit fields
struct fieldbite {
	unsigned char fieldbite1 : 3;
	unsigned char fieldbite2 : 5; 
	unsigned char fieldbite3 : 10;

}; // total 18 bits = 3 bytes

// giving struct like a argument
void PrintDate(cosnst date& d) {
	cout << d.day << " " << d.month_name << " " << d.year << endl;
}

//union
union Data {
	int i;
	float f;
	char str[20];
};


int main()
{
	date myBirthday = { 15, 8, 1990, 3, "August" };
	// change the day
	myBirthday.day = 16;
	cout << "My birthday is on " << myBirthday.day << " " << myBirthday.month_name << " " << myBirthday.year << endl;

	point p = { 10, 11 };

	// operations on struct
	// accessing members
	cout << p.x << endl;
	// accessing adress of x
	point* pp = &p;
	// accessing member x using pointer
	cout << pp->x << endl;
	//copy struct
	point p2 = p;

	//sizeof struct
	int value = 10;
	cout << sizeof(value) << endl;

	bool* ptr = &boolean;
	cout << sizeof(ptr) << endl;

	int arr[10];
	cout << sizeof(arr) << endl;

	// size of struct
	cout << sizeof(Test) << " " << sizeof(d) << endl;

	
}