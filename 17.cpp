#include <iostream>

using namespace std;

// object initialization - constructor

class Monkey {
public:
	char name[20];
	int age;
public:
	// constructor without parameters
	Monkey() {
		// initialize attributes
		strcpy(name, "George");
		age = 5;
	}
};

// modifier public, private, protected
void SetName(char* value) {
	strcpy(name, value);
}
char* SetAge() {
	return age;
}

// inspector public, private, protected
char* GetName() {
	return name;
}
int GetAge() {
	return age;
}

// class with constructor
class Monkey2 {
private:
	char name[20];
	int age;
public:
	// constructor without parameters
	Monkey2() {
		strcpy_s(name, "Kate");
		age = 20;
	}
	// constructor with parameters
	Monkey2(char* n) {
		if(n != NULL)
			strcpy_s(name, n);
		else:
		strcpy_s(name, "Kate");
		age = 20;
	}
};

// modificer public, private, protected
void SetName2(char* value) {
	strcpy_s(name, value);
}
char* SetAge2() {
	return age;
}

// inspector public, private, protected
char* GetName2() {
	return name;
}
int GetAge2() {
	return age;
}

// inizialization list
Dog(char* n, char* b, int a) : age(a) {
	SetName(n);
	SetBreed(b);
}

// destructor
~Dog() {
	cout << "Destructor called for Dog: " << name << endl;
}

int main()
{
	Monkey monkey;
	cout << "Monkey name: " << monkey.GetName2() << endl;
	cout << "Monkey age: " << monkey.GetAge2() << endl;


	char name[] = "Alice";
	// create object with constructor with parameters
	Monkey2 monkey2("Bob");
	cout << "Monkey2 name: " << monkey2.GetName2() << endl;
}