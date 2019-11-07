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

	virtual void TestStudent()
	{
		cout << "Hello Base" << endl;
	}

	virtual ~Person() {};
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

	void TestStudent()
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
    //Person &p = s; //object is not sliced
    //p.TestStudent(); //derived class function is called since virtual is there

    Person p = s; //object is sliced
    p.TestStudent(); //base class function is called since virtual is there
    return 0;
}
