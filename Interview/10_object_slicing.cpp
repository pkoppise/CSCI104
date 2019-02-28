#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name, int id)
	{
		this->name = name;
		this->id = id;
	}

	void TestStudentBase()
	{
		cout << "Hello Base" << endl;
	}

	~Person() {};
private:
	string name; int id;
};

class Student : public Person
{
public:
	Student(string name, int id, int major, double gpa) : Person(name,id)
	{
        this->major = major;
		this->gpa = gpa;
	}

	void TestStudentDerived()
	{
		cout << "Hello Derived" << endl;
	}
private:
	int major;
	double gpa;
};



int main()
{
	//Objects no virtual
    Student s = Student("Hoe",2,5,1.9);
    Person  p = s;
    //p.TestStudentDerived(); error since object is sliced
    return 0;
}
