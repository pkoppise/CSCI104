/*
 * flyweight.cpp
 *
 *  Created on: 01-Sep-2019
 *      Author: 503129832
 */

#include <iostream>
#include <map>
#include <boost/bimap.hpp>
#include <boost/flyweight.hpp>
#include <boost/flyweight/key_value.hpp>
using namespace boost;
using namespace flyweights;
using namespace std;

typedef uint32_t key;

class User
{
private:
	key firstname, lastname;
public:
	User(const string& firstname, const string& lastname):firstname(add(firstname)), lastname(add(lastname)) {}

	const string& get_first_name() const
	{
		return names.left.find(firstname)->second;
	}

	const string& get_last_name() const
	{
		return names.left.find(lastname)->second;
	}

	key get_lastname_index()
	{
		return lastname;
	}

protected:
	static bimap<key,string> names;
	static key seed;
	static key add(const string &s)
	{
		auto it = names.right.find(s);
		if(it == names.right.end())
		{
			key id = ++seed;
			names.insert({seed, s});
			return id;
		}
		return it->second;
	}
};

ostream& operator<<(ostream& out, User& user)
{
	out << "first name:" << user.get_first_name();
	out << " last name:" << user.get_last_name() << "(" << user.get_lastname_index() << ")";
	return out;
}

key User::seed = 0;
bimap<key,string> User::names{};

class User2
{
public:
	flyweight<string> first_name, last_name;
	User2(const string& firstname, const string& lastname): first_name(firstname), last_name(lastname) {}
};

/*
int main()
{
    User user1("John", "Smith");
    User user2("Jane", "Smith");

    cout << user1 << endl;
    cout << user2 << endl;

    User2 user3("John", "Smith");
    User2 user4("Jane", "Smith");

    cout << user3.first_name << endl;
    cout << boolalpha;

    cout << (&user3.first_name.get() == &user4.first_name.get()) << endl;
    cout << (&user3.last_name.get() == &user4.last_name.get()) << endl;

	return 0;
}*/


