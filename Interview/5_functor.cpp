#include <iostream>
using namespace std;

class Multiply
{
public:
    Multiply(int x):val(x) {}

	int operator()(int value)
	{
		return val * value;
	}
private:
	int val;
};

int main()
{
	Multiply mul(3); //function + object -->functor ; objecy state is saved
	cout << mul(5) << endl;
	return 0;
}