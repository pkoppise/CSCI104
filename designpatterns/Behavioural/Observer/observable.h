/*
 * observable.h
 *
 *  Created on: 03-Jun-2019
 *      Author: 503129832
 */

#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

#include <vector>
#include "Observer.h"

template<typename T>
class Observable
{
private:
	//list of subscribers
	vector<Observer<T> *> observers;
public:
	void notify(T& Source, const string& field_name)
	{
		for(auto observer : observers)
		{
			observer->field_changed(Source, field_name);
		}
	}

	void subscribe(Observer<T>& observer)
	{
		observers.push_back(&observer);
	}

	void unsubscribe(Observer<T>& observer)
	{
		observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
	}
};

#endif /* OBSERVABLE_H_ */
