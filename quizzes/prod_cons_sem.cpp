/*#include <iostream>
#include <thread>
#include <random>

using namespace std;

#define BUFFER_SIZE 10

class semaphore
{
private:
	int cv;
public:
	semaphore(int val):cv(val) {}
	void sem_wait()
	{
		--cv;
	}
	void sem_signal()
	{
		++cv;
	}
};

semaphore n(0);  //under flow
semaphore e(BUFFER_SIZE); //overflow
semaphore s(1); //control

int index = 0;

void* produce(void* arg){
	while(1){
		sem_wait(&e);
		sem_wait(&s);
		int item = rand()%100;
		buffer[index++] = item;
		cout<<"Produced "<<item<<endl;
		sem_post(&s);
		sem_post(&n);
	}
}

void* consume(void* arg){
	while(1){
		sem_wait(&n);
		sem_wait(&s);
		int item = buffer[--index];
		cout<<"Consumed "<<item<<endl;
		sem_post(&s);
		sem_post(&e);
	}
}*/


#include <thread>  
#include <mutex>  
#include <condition_variable>  
#include <random>  
#include <iostream>  

using namespace std;

class CSemaphore  
{  
private:  
   mutex mutex_;  
   condition_variable condition_;  
   unsigned int count_;  
public:  
   CSemaphore(int val):count_(val) {}

   void reset()  
   {  
     std::unique_lock<std::mutex> lock(mutex_);  
     count_=0;  
   } 

   void signal()  
   {  
        std::unique_lock<std::mutex> lock(mutex_);  
        ++count_;  
        condition_.notify_one();  
   }  

   void wait()  
   {  
        std::unique_lock<std::mutex> lock(mutex_);  
        while(!count_)  
           condition_.wait(lock);  
           --count_;  
   }  
 };

CSemaphore s(1);
CSemaphore n(0);
CSemaphore e(BUFFER_SIZE);

void* produce(void* arg){
	while(1){
		e.wait();
		s.wait();
		int item = rand()%100;
		buffer[index++] = item;
		cout<<"Produced "<<item<<endl;
		s.signal();
		n.signal();
	}
}

void* consume(void* arg){
	while(1){
		n.wait();
		s.wait();
		int item = buffer[--index];
		cout<<"Consumed "<<item<<endl;
		s.signal();
		e.signal();
	}
}  
  

int main()
{
	thread t(producer,consumer);
	t.join();
	return 0;
}