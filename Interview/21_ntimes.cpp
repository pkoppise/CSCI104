#include <iostream>
using namespace std;

class Test
{
public:
	Test() {cout << "Bingo" << endl;}
};

int main(int argc, char const *argv[])
{
	Test t[5];
	return 0;
}


