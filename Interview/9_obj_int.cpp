#include <iostream>
using namespace std;

class Base
{
private:
	int var;
public:
	Base(int x): var(x) {}
	operator int() const
	{
		return var;
	}

};

int main()
{
	Base obj(20);
	int temp = obj;

	cout << temp << endl;

	return 0;
}

