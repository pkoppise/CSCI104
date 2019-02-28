// C++ program to demonstrate static variables inside a class

#include<iostream>
using namespace std;
/*
class GfG
{
public:
	static int i;

	GfG()
	{
		// Do nothing
	};
};

int GfG::i = 1;

int main()
{
	GfG obj;
	// prints value of i
	cout << obj.i;
}*/

/*
class GfG
{
	int i = 0;

	public:
	GfG()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}

	~GfG()
	{
		cout << "Inside Destructor\n";
	}
};

int main()
{
	int x = 0;
	if (x==0)
	{
		static GfG obj;
	}
	cout << "End of main\n";
}*/

/*
class GfG
{
public:
	GfG(int val): x(val) { }
	// static member function
	static void printMsg()
	{
		cout<<"Static" << endl;
		cout << y << endl;
	}

	void printMembers()
	{
		cout << "Non static" << endl;
		cout << x << endl;
		cout << y << endl;
	}
private:
	int x;
	static int y;
};

int GfG::y = 10;

// main function
int main()
{
	// invoking a static member function
	//static member functions can only access static variables
	GfG::printMsg();
	GfG obj(15);
	obj.printMsg();
	obj.printMembers();
	return 0;
}*/


