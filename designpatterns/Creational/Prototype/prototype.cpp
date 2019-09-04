/*
 * prototype.cpp
 *
 *  Created on: 26-May-2019
 *      Author: 503129832
 */

#include <iostream>
#include <string>
#include <memory>
using namespace std;

#include <boost/serialization/serialization.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
using namespace boost;

class Address
{
private:
	string street;
	string city;
	int suite;
public:
	Address() { street = ""; city = ""; suite = 0;}
	Address(const string& street, const string& city, int suite):street(street),city(city), suite(suite) {}
	/*Address(const Address& other)
	{
		street = other.street;
		city   = other.city;
		suite  = other.suite;
	}*/

	/*friend ostream& operator<<(ostream& out, const Address& add)
	{
		out << add.city << " " << add.street << " " << add.suite << endl;
		return out;
	}*/

	friend ostream& operator<<(ostream& out, const Address* add)
	{
		out << add->city << " " << add->street << " " << add->suite << endl;
		return out;
	}

	void setSuite(int st)
	{
		suite = st;
	}

	friend class serialization::access;

	template <class archive>
	void serialize(archive& ar, const unsigned version)
	{
	    ar & street;
	    ar & city;
	    ar & suite;
	}
};

class Contact
{
private:
	string name;
	//Address address;
	Address* address;

public:
	Contact() { name = ""; address = nullptr; }
	Contact(const string &name, Address* address):name(name),address(address){}
	//Contact(const string &name, const Address& address):name(name),address(address){}
	/*Contact(const Contact& other)
	{
		address = new Address(*other.address);
		//address = new Address(other.address->street, other.address->city, other.address->suite);
		name = other.name;
	}*/
	friend ostream& operator<<(ostream& out, const Contact& cont)
	{
		out << cont.name << " " << cont.address << endl;
		return out;
	}

	void setName(const string& str)
	{
		name = str;
	}
	void setSuite(int suite)
	{
		address->setSuite(suite);
	}

	friend class serialization::access;

	template <class archive>
	void serialize(archive& ar, const unsigned version)
	{
	    ar & name;
	    ar & address;
	}
};

//Prototype factory
class EmployeeFactory
{
public:
	static unique_ptr<Contact> new_main_office_employee(const string& name, int suite)
	{
		static Contact p(" ", new Address("123 East Drive", "London", 0));
		return new_employee(name, suite, p);
	}
private:
	static unique_ptr<Contact> new_employee(const string& name, int suite, const Contact& prototype)
	{
		auto employee = make_unique<Contact>(prototype);
		employee->setName(name);
		employee->setSuite(suite);
		return employee;
	}

};

//we can make contact global but not recommended

//int main()
//{
	//Contact john("John", Address("123 East Drive", "London", 303); //cannot be used if pointer is used
	/*Contact john("John", new Address("123 East Drive", "London", 303)); //who deletes address
	Contact jane = john;
	jane.setName("Jane");
	jane.setSuite(103);
	cout << john;
	cout << jane;*/

	//unique_ptr<Contact> john = EmployeeFactory::new_main_office_employee("John", 123);
	//cout << *john << endl;

	/*auto clone = [](const Contact& c) {
			ostringstream oss;
			boost::archive::text_oarchive oa(oss);
			oa << c;
			string s = oss.str();
			//cout << s << endl;

			istringstream iss(s);
			boost::archive::text_iarchive ia(iss);
			Contact result;
			ia >> result;
			return result;
	};

	auto john = EmployeeFactory::new_main_office_employee("John", 123);
	auto jane = clone(*john);*/

//	return 0;
//}


