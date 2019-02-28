#include<iostream>
#include<pthread.h>

using namespace std;

#define THREAD_COUNT 8

long long sum = 0;
pthread_mutex_t sumLock;

int gcd(int a, int b)
{
	return a < b ? gcd(b, a) : b == 0 ? a : gcd(b, a % b);
}

int phi(int n)
{
	int i, r = 0;
	for( i=1; i<n; i++ )
		if ( gcd(n, i) == 1 ) r++;
	return r;
}

typedef struct
{
	int first;
	int last;
}Pair;

void* threadRoutine(void* arg)
{
	Pair p = *((Pair*)arg);
	int n;
	long long local_sum = 0;
	for( n=p.first; n<=p.last; n++ )
	{
		local_sum += phi(n);
	}
	pthread_mutex_lock(&sumLock);
	sum += local_sum;
	pthread_mutex_unlock(&sumLock);
}


int main()
{

	int low = 2;
	int high = 30000;
	
	int job_size  = (high - low + 1) / THREAD_COUNT;
	int remaining = (high - low + 1) % THREAD_COUNT;
	
	int first = low;
	
	Pair intervals[THREAD_COUNT];
	
	pthread_t tid[THREAD_COUNT];
	pthread_mutex_init(&sumLock, NULL);

	for( int i=0; i<THREAD_COUNT; i++ )
	{
		intervals[i].first = first;
		intervals[i].last  = first + job_size - 1;
		if ( remaining > 0 ) {
			intervals[i].last++;
			remaining--;
		}
		first = intervals[i].last + 1;
	}

	for( int i=0; i<THREAD_COUNT; i++ )
	{
		pthread_create(&tid[i], NULL, threadRoutine, &intervals[i]);
	}
	
	for(int i=0; i<THREAD_COUNT; i++ )
	{
		pthread_join(tid[i], NULL);
	}
	
	cout << "Sum is" << sum << endl;
	
	return 0;
}
