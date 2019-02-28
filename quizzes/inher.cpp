/*
 * Types of Polymorphism:
 * ----------------------
 * function overloading
 * function overriding
 * operator overloading
 * virtual function
 * compile time/ early/ static binding
 * run time / late / dynamic binding
 */

/*
#include <iostream>
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
	void print_info() // print major too
	{
		cout << "Derived Student" << endl;
		cout << major << endl;
		cout << gpa << endl;
	}
private:
	int major;
	double gpa;
};

class Faculty : public Person
{
public:
	Faculty(string name, int id, bool tenure) : Person(name,id)
    {
		this->tenure = tenure;
    }
	void print_info() // print tenured
	{
		cout << "Derived Faculty" << endl;
		cout << tenure << endl;
	}
private:
	bool tenure;
};


int main()
{
	//Objects no virtual
	Person  p = Person("Pain", 123);
    Student s = Student("Hoe",2,5,1.9);
    Faculty f = Faculty("Ken",3,0);*/

    /*p.print_info();
    s.print_info();
    f.print_info();*/

	/* pointers no virtual
	Person  *p = new Person("Pain",123);
    Student *s = new Student("Hoe",2,5,1.9);
	Faculty *f = new Faculty("Ken",3,0);

	p->print_info();
	s->print_info();
	f->print_info();*/


	//Objects-->virtual does not work due to early binding or static binding
	/*Person  p = Person("Pain", 123);
    Person  s = Student("Hoe",2,5,1.9);
    Person  f = Faculty("Ken",3,0);

    p.print_info();
    s.print_info();
    f.print_info();*/

	//Pointers-->virtual work due to late binding or run-time binding.
	//Person  *p = new Person("Pain", 123);
    //Person  *s = new Student("Hoe",2,5,1.9);
    //Person  *f = new Faculty("Ken",3,0);

    /*Person *ptr = &p;
    Person *str = &s;
    Person *ftr = &f;

    ptr->print_info();
    str->print_info();
    ftr->print_info();
    return 0;
}*/
