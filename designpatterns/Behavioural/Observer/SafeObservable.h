/*
 * SafeObservable.h
 *
 *  Created on: 03-Jun-2019
 *      Author: 503129832
 */

#ifndef SAFEOBSERVABLE_H_
#define SAFEOBSERVABLE_H_

#include <vector>
#include <mutex>
#include <thread>
#include "Observer.h"

template<typename T>
class SafeObservable
{
private:
	vector<Observer<T> *> observers;
	std::mutex mtx;
public:
	void notify(T& Source, const string& field_name)
	{
		std::lock_guard<std::mutex> lock{ mtx };
		for(auto observer : observers)
		{
			if(observer)
				observer->field_changed(Source, field_name);
		}
	}

	void subscribe(Observer<T>& observer)
	{
		std::lock_guard<std::mutex> lock{ mtx };
		observers.push_back(&observer);
	}

	void unsubscribe(Observer<T>& observer)
	{
		//std::lock_guard<std::mutex> lock{ mtx };
		//observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
		auto it = find(observers.begin(), observers.end(), &observer);
		if(it != observers.end())
		{
			*it = nullptr;
		}
	}
};



#endif /* SAFEOBSERVABLE_H_ */
