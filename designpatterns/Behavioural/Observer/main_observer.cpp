/*
 * observer.cpp
 *
 *  Created on: 03-Jun-2019
 *      Author: 503129832
 */

#include <iostream>
#include <boost/signals2.hpp>
#include "observer.h"
#include "SafeObservable.h"
#include "observable.h"

using namespace std;
using namespace boost::signals2;

class Person: public SafeObservable<Person>
{
private:
	int age;
public:
	Person(int age): age(age) {}
	void set_age(int age)
	{
		if(this->age == age) return;
		auto old_can_vote = get_can_vote();
		this->age = age;
		notify(*this,"age");
		if(old_can_vote != get_can_vote())
		{
			notify(*this,"can vote");
		}
	}

	int get_age()
	{
		return age;
	}

	bool get_can_vote()
	{
		return age >= 16;
	}
};

class ConsolePersonObserver : public Observer<Person>
{
private:
	void field_changed(Person& source, const string& field_name) override
	{
		if(field_name == "age")
		{
			cout << "Person's " << field_name << " has changed to " << source.get_age() << endl;
		}
		if(field_name == "can vote")
		{
			cout << "Person's " << field_name << " has changed to " << bool(source.get_can_vote()) << endl;
		}
	}
};

class TrafficAdmin: public Observer<Person>
{
public:
	void field_changed(Person& source, const string& field_name)
	{
		if(field_name == "age")
		{
			if(source.get_age() < 17)
			{
				cout << " You are not old enough to drive" << endl;
			}
			else
			{
				cout << "Oh ok, we no longer care" << endl;
				source.unsubscribe(*this);
			}
		}
	}
};

/*template<typename T>
class Observable2
{
public:
	boost::signals2::signal<void(T&, const string&)> field_changed;
};

class Person2: public Observable2<Person2>
{
private:
	int age;
public:
	int get_age()
	{
		return age;
	}
	void set_age(int age)
	{
		if(this->age == age) return;
		this->age = age;
		field_changed(*this, "age");
	}
};*/
/*
int main()
{
	Person p(10);

	ConsolePersonObserver cp;
	p.subscribe(cp);

	p.set_age(11);
	p.set_age(12);*/

	/*Person2 p2;
	auto conn = p2.field_changed.connect(
			[](Person2& p, const string& field_name)
			{
				cout << field_name << " has changed to " << p.get_age() << endl;
			}
	);

	p2.set_age(11);
	conn.disconnect();

	p2.set_age(12);*/

	/*Person person(15);
	ConsolePersonObserver cop;
	person.subscribe(cop);

	person.set_age(14);
	person.set_age(17);*/

	/*Person p(10);
	TrafficAdmin ta;
	p.subscribe(ta);

	p.set_age(15);
	p.set_age(16);
	try
	{
		p.set_age(17);
	}
	catch(const std::exception& e)
	{
		cout << "Oops, " << e.what() << "\n";
	}*/

	//return 0;
//}
