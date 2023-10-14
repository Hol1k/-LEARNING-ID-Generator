#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(const string name, const int age)
	{
		this->name = name;
		this->age = age;
		id = count;
		count++;
	}

	int GetID()
	{
		return id;
	}

private:
	string name;
	static int count;
	int age, id;
};

int Student::count = 1;

int main()
{
	Student a("Oleg", 19);
	Student b("Biba", 21);
	cout << b.GetID() << "\t" << a.GetID() << "\n";
}