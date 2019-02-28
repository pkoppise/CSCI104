#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>

using namespace std;

class LogFile
{
private:
	mutex mu;
	ofstream f;
public:
	LogFile()
	{
		f.open("lock_resource.txt");
	}  
	void shared_print(string msg, int id)
	{
		lock_guard<mutex> locker(mu); //unlock happends if function goes out of scope
		//mu.lock();  //exception ma occur better ise lock_guard
		f << msg << ":" << id << endl;
		//mu.unlock();
	}
	
	//never do things
	//return the shared resources
	//shread resources as arguments
	//interface should be proper ex: stack sharing
};

void func_1(LogFile& log)
{
	for(int i = 0; i < 100; i++)
	{
		log.shared_print(string("From t:"),i);
	}
}

int main()
{
	LogFile log;
	thread t(func_1, ref(log));	
	for(int i = 0; i < 100; i++)
	{
		log.shared_print(string("From Main:"),i); 
	}		
	t.join();
    return 0;
}