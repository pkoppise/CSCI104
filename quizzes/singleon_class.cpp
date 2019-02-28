#include <iostream>
#include <vector>
using namespace std;

// Classical C++ implementation of singleton design pattern
class Singleton
{
private:
	vector<int> a;
	static Singleton *ptr;

	// private constructor to force use of getInstance() to create Singleton object
	Singleton() { cout << "Private Constructor called" << endl; }

public:
	static Singleton *getInstance()
	{
		if (ptr == NULL)
			ptr = new Singleton;
		return ptr;
	}
	void pushValue(int x)
	{
		a.push_back(x);
	}
	void printvec()
	{
		vector<int>::iterator it;
		for(it = a.begin(); it != a.end(); ++it)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
};

Singleton *Singleton::ptr = 0;


int main()
{
    Singleton *app1 = Singleton::getInstance();
    app1->pushValue(2);

    Singleton *app2 = Singleton::getInstance();
    app2->pushValue(3);

    app1->printvec();
	return 0;
}
