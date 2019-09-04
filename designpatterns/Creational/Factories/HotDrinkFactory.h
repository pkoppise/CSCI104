/*
 * HotDrinkFactory.h
 *
 *  Created on: 25-May-2019
 *      Author: 503129832
 */

#ifndef HOTDRINKFACTORY_H_
#define HOTDRINKFACTORY_H_


#include "HotDrink.h"
#include <memory>

class HotDrinkFactory
{
public:
	virtual unique_ptr<HotDrink> make() = 0;
	virtual ~HotDrinkFactory() = default;
};

class TeaFactory: public HotDrinkFactory
{
public:
	unique_ptr<HotDrink> make()
	{
		return make_unique<Tea>();
	}
};

class CoffeeFactory: public HotDrinkFactory
{
public:
	unique_ptr<HotDrink> make()
	{
		return make_unique<Coffee>();
	}
};


#endif /* HOTDRINKFACTORY_H_ */
