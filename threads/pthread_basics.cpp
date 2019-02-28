#include <iostream>
#include <pthread.h>

using namespace std;

pthread_mutex_t lock;

void* ThreadFunction(void* arg)
{
	int a = *((int*)arg);
	pthread_mutex_lock(&lock);
	cout << "ThreadFunction" << a << endl;
	pthread_mutex_unlock(&lock);
}

int main()
{
	pthread_t my_thread[5];
	int ret;
	int x = 2;
	
	pthread_mutex_init(&lock,NULL);
	
	for(int i = 0; i < 5; i++)
	{	
		ret = pthread_create(&my_thread[i],NULL,ThreadFunction,&i);
	    if(ret != 0)
	    {
			cout << "pthread create failed" << endl;
		}
	}
	
	for(int i = 0; i < 5; i++)
	{
		pthread_join(my_thread[i],NULL);
	}
	pthread_mutex_destroy(&lock);
	return 0;
}
