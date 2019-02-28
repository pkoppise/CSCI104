#include<iostream>
using namespace std;
/*
class CircularQueueInt
{
private:
	int *data;
	int size_t;
	int capacity;
	int front;
	int rear;
public:
	CircularQueueInt(int cap):size_t(0),capacity(cap)
	{
		front =  -1;
		rear  =  -1;
		data  = new int[capacity];
	}

    ~CircularQueueInt() {
    	delete []data;
    }

    int size() const { return size_t; }

    bool empty() const { return (front == -1 && rear == -1); }

    bool full() const
    {
    	if(front == 0 && rear == capacity - 1)
    	{
    		return true;
    	}
    	else if(rear + 1 == front)
    	{
    		return true;
     	}
    	else
    	{
    		return false;
    	}
    }

    void push(const int& val)
    {
    	if(full())
    	{
    		cout << "Queue is full" << endl;
    	}
    	else
    	{
    		if(rear == -1)
    		{
    			front = 0;
    			rear  = 0;
    		}
    		else if(rear == capacity - 1)
    		{
    			rear = 0;
    		}
    		else
    		{
    			rear++;
    		}
			data[rear] = val;
			size_t++;
    	}
    }

    void pop()
    {
    	if(empty())
    	{
    		cout << "Queue is empty" << endl;
    	}
    	else
    	{
    		if(front == rear)
    		{
    			front = -1;
    			rear = -1;

    		}
    		else if(front == capacity - 1)
    		{
    			front = 0;
    		}
    		else
    		{
    			front++;
    		}
    		size_t--;
    	}
    }

    int frontValue() const { return data[front]; }

    void displayQueue() const {
    	int i = 0;
		int j = 0;
    	if(front > rear)
    	{
    		for(i = front; i < capacity ; i++)
    		{
    			cout << data[i] << " ";
    		}
    		for(j = 0; j <= rear; j++)
    		{
    			cout << data[j] << " ";
    		}
    		cout << endl;
    	}
    	else
    	{
    		for(i = front; i <= rear; i++)
    		{
    			cout << data[i] << " ";
    		}
    		cout << endl;
    	}
    }
};

int main()
{
	CircularQueueInt q(5);

	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	q.push(10);

	cout << "no.of elements" << q.size() << endl;
    q.displayQueue();

    q.push(11);

    q.pop();
    q.pop();
    q.displayQueue();
    cout << "no.of elements:" << q.size() << endl;
    return 0;
}*/
