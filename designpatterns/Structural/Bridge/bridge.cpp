/*
 * bridge.cpp
 *
 *  Created on: 24-Aug-2019
 *      Author: 503129832
 */

#include "bridge.h"

class Person::PersonImpl
{
public:
	void greet(Person* p);
};

void Person::PersonImpl::greet(Person *p)
{
	cout << "Hello my name is " << p->name << endl;
}

Person::Person(string name): impl(new PersonImpl), name(name) { }
Person::~Person() { delete impl; }

void Person::greet()
{
	impl->greet(this);
}

/*
int main()
{
	Person* p = new Person("Phani");
	p->greet();
}*/
