/*
 * observer.h
 *
 *  Created on: 03-Jun-2019
 *      Author: 503129832
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include <string>
using namespace std;

template <typename T>
class Observer
{
public:
	virtual void field_changed(T& source, const string& field_name) = 0;
	virtual ~Observer() = default;
};

#endif /* OBSERVER_H_ */
