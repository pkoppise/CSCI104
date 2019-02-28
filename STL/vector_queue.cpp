
#include <iostream>
#include <vector>
using namespace std;

typedef struct object
{
	int data;
} Object;

class queue
{
public:
	explicit queue(int);
	~queue();
	void pop();
	void push(int);
	void deleteByIndex(int);
	int peek(){return qv.front()->data;}
	void printQueue();
private:
	vector<Object*> qv;

};

queue::queue(int n)
{
	Object *ptr = new Object;
	ptr->data = n;
	qv.push_back(ptr);
}

void queue::push(int n)
{
    Object *ptr = new Object;
	ptr->data = n;
	qv.push_back(ptr);

}

void queue::pop()
{
	vector<Object*>::iterator st = qv.begin();
	delete *st;
	qv.erase(st);
}

queue::~queue()
{
	vector<Object*>::iterator it;
	for(it = qv.begin(); it != qv.end(); ++it) {
		delete *it;
	}
	qv.erase(qv.begin(), qv.end());
}


void queue::printQueue()
{
	vector<Object*>::iterator tr;
	for(tr= qv.begin(); tr != qv.end(); ++tr)
	{
		cout << (*tr)->data << endl;
	}
}

void queue::deleteByIndex(int ind)
{
    delete qv.at(ind);
	qv.erase(qv.begin() + ind);
}


int main()
{
	queue *q = new queue(10);
	q->push(20);
	q->push(30);
	q->push(40);
	q->push(50);
	q->printQueue();
	cout << "-------" << endl;
	q->pop();
	q->pop();
	cout << q->peek() << endl;
	cout << "-------" << endl;
	q->printQueue();
	q->deleteByIndex(1);
	cout << "-------" << endl;
	q->printQueue();
	delete q;
	return 0;
}