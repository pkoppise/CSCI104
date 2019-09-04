/*
 * bridge.cpp
 *
 *  Created on: 22-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	class PersonImpl;
	PersonImpl* impl;

	string name;
	Person(string name);
	~Person();
	void greet();
};
