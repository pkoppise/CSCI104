#include<iostream>
using namespace std;

class QueueInt
{
private:
	int *data;
	int size_t;
	int capacity;
	int front;
	int rear;
public:
	QueueInt(int cap):size_t(0),capacity(cap)
	{
		front =  -1;
		rear  =  -1;
		data  = new int[capacity];
	}

    ~QueueInt() {
    	delete []data;
    }

    int size() const { return size_t; }

    bool empty() const { return (front == -1 && rear == -1); }

    bool full() const  { return rear == (capacity - 1); }

    void push_back(const int& val)
    {
    	if(full())
    	{
    		cout << "Queue is full" << endl;
    		return;
    	}

    	if(empty())
    	{
    		front = 0;
    	}

    	rear++;
    	data[rear] = val;
    	size_t++;
    }

    void pop_front()
    {
    	if(empty())
    	{
    		cout << "Queue is empty" << endl;
    		return;
    	}
    	else if(front == rear) {
    		front = -1;
    		rear = -1;
    		size_t--;
    	}
    	else
    	{
        	front++;
        	size_t--;
    	}
    }

    int frontValue() const { return data[front]; }

    void displayQueue() const {
    	for(int i = front; i <= rear; i++)
    	{
    		cout << data[i] << " ";
    	}
    	cout << endl;
    }
};

int main()
{
	QueueInt q(5);

	q.pop_front();

	q.push_back(6);
	q.push_back(7);
	q.push_back(8);
	q.push_back(9);
	q.push_back(10);

	cout << q.size() << endl;

    q.displayQueue();

    q.push_back(11);
    q.displayQueue();

    cout << q.frontValue() << endl;

    q.pop_front();
    q.pop_front();
    q.displayQueue();
    cout << q.size() << endl;
    cout << q.frontValue() << endl;

    q.push_back(11);
    q.displayQueue();

    return 0;
}
