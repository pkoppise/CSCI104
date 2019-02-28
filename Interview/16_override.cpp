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
    virtual void print_info() // print name, ID
	{
		cout << "Base" << endl;
		cout << name << endl;
		cout << id << endl;
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
	void print_info(int x) override  //compile time check
	{
		cout << "Derived Student" << endl;
		cout << major << endl;
		cout << gpa << endl;
	}
private:
	int major;
	double gpa;
};


int main()
{
    Person  *s = new Student("Hoe",2,5,1.9);
    s->print_info();
    delete s;

    return 0;
}
