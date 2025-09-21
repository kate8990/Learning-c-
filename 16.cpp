#include <iostream>

using namespace std;

// Methods out of class

//Getters
char* Cat::getNickname() {
	return nickname;
}
int Cat::getAge() {
	return age;
}

//Setters
void Cat::setNickname(char* n) {
	nickname = n;
}
void Cat::setAge(int a) {
	age = a;
}

// Methods 
void Cat::AskForFood() {
	while (true)
	cout << "Meow! Meow!" << endl;
}


//avgAssessment processes data

#define MAX_NAME_LEN 30

struct StudentStruct {
	int assessmentCount = 5;
	int assessments[5];

	char name[MAX_NAME_LEN];
};

int avgAssessment(const StudentStruct& st) {
	int sum = st.assessments[0];
	for (int i = 1; i < st.assessmentCount; i++) {
		sum += st.assessments[i];
	}
	return sum / st.assessmentCount;
}

//imitation
class Animal {
private:
	char* nickname;
	int age;
public:
	char* getNickname() {
		return nickname;
	}
	int getAge() {
		return age;
	}
	//Setters
	void setNickname(char* n) {
		nickname = n;
	}
	void setAge(int a) {
		age = a;
	}
};

class Dog : public Animal {
private:
	char* breed;
public:	
	char* getBreed() {
		return breed;
	}
	void setBreed(char* b) {
		breed = b;
	}
};

//OOP
class Student {
private:
	int assessmentCount = 5;
	int assessments[5];
	char name[MAX_NAME_LEN];
public:
	Student(const char* name, int* assessments) {
		int avgAssessment() {
			int sum = this->assessments[0];
			for (int i = 1; i < this->assessmentCount; i++) {
				sum += this->assessments[i];
			}
			return sum / this->assessmentCount;
		}
	}
};

//class and object
//class
class Student {
private:
	int name[MAX_NAME_LEN];
	int assessments[5];
	int assessmentCount = 5;
public:
	Student(const char* name, int* assessments) {
		strcpy(this->name, name);
		int avgAssessment() {
			int sum = this->assessments[0];
			for (int i = 1; i < this->assessmentCount; i++) {
				sum += this->assessments[i];
			}
			return sum / this->assessmentCount;
		}
};

// fields and methods
	class Cat {
	private:
		char* nickname;
		int age;
	public:
		void AskForFood() {
			cout << "Meow! Meow!" << endl;
		}
		void MakePurr() {
			cout << "Purr! Purr!" << endl;
		}
		void PrintCat() {
			cout << "Nickname: " << nickname << endl;
			cout << "Age: " << age << endl;
		}
	};

//accesories
	class Cat {
	private:
		char* nickname;
		int age;
	public:
		//Getters
		char* getNickname() {
			return nickname;
		}
		int getAge() {
			return age;
		}
		//Setters
		void setNickname(char* n) {
			nickname = n;
		}
		void setAge(int a) {
			age = a;
		}
	};

int main()
{
	StudentStruct st = { 5, { 10, 6, 7, 9 ,12}, "Lemishko Kate" };
	cout << avgAssessment(st) << endl;

	int assessments[5] = { 10, 6, 7, 9 ,12 };
	Student student = Student("Lemishko Kate", assessments);
	cout << student.avgAssessment() << endl;

	Student student = Student("Lemishko Kate", assessments);

	char nickname[] = "Barsik";
	char* nm = new char[strlen](nickname) + 1];
	strcpy_s(nm, strlen(nickname) + 1, nickname);

	Cat cat;
	// using setters
	cat.setAge(10);
	cat.setNickname(nm);

	// using getters
	cout << "Cat's nickname: " << cat.getNickname() << endl;
	cout << "Cat's age: " << cat.getAge() << endl;

	delete[] nm;
}