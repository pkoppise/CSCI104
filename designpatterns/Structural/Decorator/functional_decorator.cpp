/*
 * functional_decorator.cpp
 *
 *  Created on: 31-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <string>
#include <functional>
using namespace std;

class Logger
{
private:
	function<void()> func;
	string name;
public:
	Logger(const function<void()> &func, const string &name):func(func), name(name) {}
	void operator()()
	{
		cout << "Entering" << name << endl;
		func();
		cout << "Exiting" << name << endl;
	}
};

template<typename Func>
class Logger2
{
private:
	Func func;
	string name;
public:
	Logger2(const Func &func, const string &name):func(func), name(name) {}
	void operator()()
	{
		cout << "Entering " << name << endl;
		func();
		cout << "Exiting " << name << endl;
	}
};


//Helper Function
template <typename Func>
auto make_logger2(Func func, const string &name)
{
	return Logger2<Func>(func,name);
}

template <typename> class Logger3;
template <typename R, typename... Args>
class Logger3<R(Args...)>
{
private:
	  function<R(Args ...)> func;
	  string name;
public:
  Logger3(function<R(Args...)> func, const string& name)
    : func(func),name(name)
  {
  }

  R operator() (Args ...args)
  {
    cout << "Entering " << name << endl;
    R result = func(args...);
    cout << "Exiting " << name << endl;
    return result;
  }
};

template <typename R, typename... Args>
auto make_logger3(R (*func)(Args...), const string& name)
{
  return Logger3<R(Args...)>(
    std::function<R(Args...)>(func),
    name);
}

double add(double a, double b)
{
  cout << a << "+" << b << "=" << (a + b) << endl;
  return a + b;
}


/*
int main()
{
	//Logger([]() { cout << "Hello" << endl;}, "HelloFunction")();
	//Logger2([]() { cout << "Hello" << endl;}, "HelloFunction")(); compilation issue use of class template requires template argument.
	auto log = make_logger2([](){ cout << "Hello" << endl;}, "HelloFunction");
	log();

	string temp = "Add";
	auto log_add = make_logger3(add, temp);
	auto result = log_add(2,3);
	cout << "result:" << result;
    return 0;
}*/


