#include <iostream>
using namespace std;

/*
class QueueInt
{
public:
	QueueInt(unsigned int capacity);
	~QueueInt();

	unsigned int size() const { return size_; }//get size
    void push_back(const int& value); //enqueue
    void pop_front(); // dequeue
    int const& front() const { return data[front_]; } //get the front vale
    int& get(int loc) {return data[loc]; } // get the value
    bool empty() const; //checks if Queue is empty
    void displayQueue();
private:
    int* data;
    int rear;
    int front_;
    unsigned int size_;
    unsigned int cap;
};

QueueInt::QueueInt(unsigned int capacity):size_(0),cap(capacity)
{
	data = new int[cap];
	front_ = -1;
	rear = -1;
}

QueueInt::~QueueInt()
{
	delete []data;
}

void QueueInt::push_back(const int& value)
{
	if(rear == (int)cap)
	{
		cout << "Queue is full" << endl;
		return;
	}

	if(front_ == -1)
	{
		front_= 0;
	}

	rear++;
	size_++;
	data[rear] = value;
}

void QueueInt::pop_front()
{
	if(front_ == -1 && rear == -1)
	{
		cout <<"Queue is empty" << endl;
		return;
	}

	if(front_ == rear)
	{
		front_ = -1;
		rear = -1;
		size_--;
	}
	else
	{
		front_++;
		size_--;
	}
}

void QueueInt::displayQueue()
{
	for(int i = front_; i <= rear; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

int main()
{
	QueueInt obj(3);
    obj.push_back(6);
    obj.push_back(7);
    obj.push_back(8);

    obj.displayQueue();
    cout << obj.front() << endl;

    obj.pop_front();
    cout << obj.front() << endl;
    obj.displayQueue();
}*/
