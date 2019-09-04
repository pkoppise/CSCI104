/*
 * property_proxy.cpp
 *
 *  Created on: 02-Sep-2019
 *      Author: 503129832
 */

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Property
{
private:
	T value;
public:
	Property(T value)
    {
		*this = value;
    }

	T operator=(T new_value)
	{
		cout << "Assignment" << endl;
		return value = new_value;
	}

	operator T()
	{
		return value;
	}
};

class Creature
{
public:
	Property<int> strength{10};
	Property<int> agility{5};
};

/*
int main()
{
	Creature c;
	c.strength = 11;
	int x = c.agility;
	cout << x << endl;
}*/


