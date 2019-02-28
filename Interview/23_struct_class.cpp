#include <iostream>
using namespace std;

class classBase  //private by default
{
	int _bar;
};


struct structBase //public by default
{
	int _bar;
};

int main(int argc, char const *argv[])
{
	classBase obj;
	struct structBase sobj;

	//obj._bar = 10;
	sobj._bar = 20;

	return 0;
}

//same holds for inheritance also

