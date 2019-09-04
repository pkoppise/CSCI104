/*
 * DrinkFactory.h
 *
 *  Created on: 25-May-2019
 *      Author: 503129832
 */

#ifndef DRINKFACTORY_H_
#define DRINKFACTORY_H_

#include "HotDrink.h"
#include "HotDrinkFactory.h"
#include <map>
#include <memory>

//facilitator class
class DrinkFactory
{
private:
	map<string, unique_ptr<HotDrinkFactory>> hot_factories;
public:
	DrinkFactory()
	{
		hot_factories["tea"]    = make_unique<TeaFactory>();
        hot_factories["coffee"] = make_unique<CoffeeFactory>();
	}

	unique_ptr<HotDrink> make_drink(string type)
	{
		unique_ptr<HotDrink> drink = hot_factories[type]->make();
		drink->prepare();
		return drink;
	}
};

//functional factory


#endif /* DRINKFACTORY_H_ */
