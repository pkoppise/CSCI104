#include <iostream>
#include <thread>

using namespace std;

void func_1()
{
	for(int i = 0; i < 100; i++)
	{
		cout << "from t:" << i << endl; 
	}
}

int main()
{
	thread t(func_1);	
    try{
		for(int i = 0; i < 100; i++)
		{
			cout << "from main:" << i << endl; 
		}		
	}
	catch (...)
	{
		t.join();
		throw;
	}
	
	t.join();
    return 0;
}