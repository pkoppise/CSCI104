#include <iostream>
using namespace std;

class Base
{
private:
	int val;
public:
	Base():val(0) {}
	Base(int _val):val(_val) {}
	Base& operator=(const Base& rhs)
	{
		cout << "Assignment operator called" << endl;
		this->val = rhs.val;
		return *this;
	}
	int getValue() const
	{
		return val;
	}
};

int main()
{
	Base b(10);
	cout << b.getValue() << endl;
	Base b2;
	b2 = b;
	cout << b2.getValue() << endl;

	Base b3, b4;
	(b3 = b4) = b; //for this purpose we need & in assigngment operator
    cout << b3.getValue() << endl;
    cout << b4.getValue() << endl;
	return 0;
}