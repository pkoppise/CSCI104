#include <iostream>
#include <thread>
using namespace std;

class myFunctor
{
public:
	void operator()()
	{
		cout << "This is my function object" << endl;
	}
    void publicFunction()
    {
	    cout << "public function of myFunctor class is called" << endl;
    }
    static void staticFunction()
    {
        cout << "staticFunction is called" << endl;
    }
};


int main()
{
    myFunctor myFunc;
    thread functorTest(myFunc);
    thread functorTest1(&myFunctor::publicFunction,myFunc);
    thread functorTest2(myFunctor::staticFunction);
    
    if (functorTest.joinable())
        functorTest.join();

    if (functorTest1.joinable())
        functorTest1.join();
        
    if (functorTest2.joinable())
        functorTest2.join();        
        
    return 0;
}