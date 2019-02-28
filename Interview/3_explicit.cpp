#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
	int real;
	int img;
public:
	explicit Complex(int r, int i = 0)
	{
		real = r;
		img = i;
	}
	friend ostream& operator<<(ostream &out, const Complex &temp);
};

ostream& operator<<(ostream &out, const Complex &temp)
{
	out << temp.real << "+i" << temp.img << endl;
	return out;
}

int main()
{
	Complex cp(3,5);
	cout << cp;

	Complex cp2 = static_cast<Complex>(10);
	cout << cp2;
}