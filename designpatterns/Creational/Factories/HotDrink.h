/*
 * HotDrink.h
 *
 *  Created on: 25-May-2019
 *      Author: 503129832
 */

#ifndef HOTDRINK_H_
#define HOTDRINK_H_

#include <iostream>
using namespace std;

class HotDrink
{
public:
	virtual void prepare() = 0;
	virtual ~HotDrink() = default;
};

class Tea: public HotDrink
{
public:
	void prepare()
	{
		cout << "Tea is prepared" << endl;
	}
};

class Coffee: public HotDrink
{
public:
	void prepare()
	{
		cout <<"Coffee is prepared" << endl;
	}
};


#endif /* HOTDRINK_H_ */
