/*
 * communication_proxy.cpp
 *
 *  Created on: 02-Sep-2019
 *      Author: 503129832
 */

#include <iostream>
#include <string>
using namespace std;


class Pingable
{
public:
	virtual string ping(const string& message) = 0;
	virtual ~Pingable() = default;
};

class Pong: public Pingable
{
public:
	string ping(const string& message)
	{
		return message + " Pong";
	}
};

void tryit(Pingable &pp)
{
	cout << pp.ping("Ping") << endl;
}

//Not a complete implementation
/*int main()
{
	Pong p;
	for(int i = 0; i < 3; i++)
	{
		tryit(p);
	}
	return 0;
}*/


