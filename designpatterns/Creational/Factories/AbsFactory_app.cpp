//============================================================================
// Name        : design_patterns.cpp
// Author      : pkoppise
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "DrinkFactory.h"
//#include "HotDrink.h"
//#include "HotDrinkFactory.h"
//#include <memory>
//#include <string>

using namespace std;

/*
unique_ptr<HotDrink> make_drink(string type) {
	unique_ptr<HotDrink> drink;
	if(type == "tea")
	{
		drink = make_unique<Tea>();
		drink->prepare();
	}
	else
	{
		drink = make_unique<Coffee>();
		drink->prepare();
	}
	return drink;
}*/

/*
unique_ptr<HotDrinkFactory> make_drink(string type) {
	unique_ptr<HotDrinkFactory> drink;
	if(type == "tea")
	{
		drink = make_unique<TeaFactory>();
		drink->make()->prepare();
	}
	else
	{
		drink = make_unique<CoffeeFactory>();
		drink->make()->prepare();
	}
	return drink;
}*/

/*
int main()
{
    //unique_ptr<HotDrink> d = make_drink("tea");
    //d = make_drink("coffee");

    //unique_ptr<HotDrinkFactory> d = make_drink("tea");
    //d = make_drink("coffee");

	DrinkFactory drink_factory;
	auto t = drink_factory.make_drink("tea");
	auto c = drink_factory.make_drink("coffee");

	return 0;
}*/


