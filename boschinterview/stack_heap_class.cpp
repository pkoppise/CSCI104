#include <iostream>
using namespace std;

class Test
{
private:
	~Test()
	{
		cout << "Destructor called" << endl;
	}
public:
	Test()
	{
		cout <<"Default constructor called" << endl;
	}
	friend void destructTest(Test* ); 
}; 
  
// Only this function can destruct objects of Test 
void destructTest(Test* ptr) 
{ 
    delete ptr; 
} 
  
int main()
{
	//Test obj;
	Test *ptr = new Test;
	destructTest(ptr);
	return 0;
}


#include <iostream>
using namespace std;

class Test
{
private:
	void* operator new(size_t size) {}
public:
	Test()
	{
		cout <<"Default constructor called" << endl;
	}

	~Test()
	{
		cout << "Destructor called" << endl;
	}
};

int main()
{
	Test obj;
	//Test *ptr = new Test;
}

