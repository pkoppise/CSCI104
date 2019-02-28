#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>

using namespace std;

class LogFile
{
private:
	mutex mu;
	mutex mu2;
	ofstream f;
public:
	LogFile()
	{
		f.open("lock_resource.txt");
	}
	void shared_print(string msg, int id)
	{
		lock(mu,mu2);
		lock_guard<mutex> locker(mu,adopt_lock); 
		lock_guard<mutex> locker2(mu2,adopt_lock);
		cout << msg << ":" << id << endl;
	}
	
	void shared_print2(string msg, int id)
	{
		lock(mu,mu2);
		lock_guard<mutex> locker(mu,adopt_lock); 
		lock_guard<mutex> locker2(mu2,adopt_lock);
		cout << msg << ":" << id << endl;
	}	
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
		log.shared_print2(string("From Main:"),i); 
	}		
	t.join();
    return 0;
}