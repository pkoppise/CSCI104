#include <iostream>
using namespace std;

int SIZE;

void setSize(int sz)
{
	SIZE = sz;
}

struct Item
{
	int val;
	Item* next;
};

int size(Item* front)
{
	int count = 0;
	while(front != NULL)
	{
		count++;
		front = front->next;
	}
	return count;
}

bool full(Item* front)
{
	int temp = size(front);
	return(temp == SIZE);
}

bool empty(Item* front, Item* rear)
{
	return (front == NULL && rear == NULL);
}


void appendEnd(Item*& front, int va, Item*& rear)
{
	if(full(front))
	{
		cout << "Queue is full" << endl;
		return;
	}

	Item* newptr = new Item;
	newptr->val = va;
	newptr->next = NULL;

	if(empty(front, rear))
	{
		front = newptr;
		rear = newptr;
	}
	else
	{
	    rear->next = newptr;
	    rear = newptr;
	}
}


void deleteBegin(Item*& front, Item*& rear)
{
	if(empty(front,rear))
	{
		cout << "Queue is empty" << endl;
	}
	else if(front == rear)
	{
		front = NULL;
		rear  = NULL;
		free(front);
	}
	else
	{
		Item* temp = front;
		front = temp->next;
		free(temp);
	}
}

int frontValue(Item* ptr)
{
	return ptr->val;
}

void displayQueue(Item* ptr)
{
	if(ptr == NULL)
	{
		return;
	}
	else
	{
		cout << ptr->val << " ";
		displayQueue(ptr->next);
	}
}

int main()
{
	setSize(5);

	Item* front = NULL;
	Item* rear = NULL;

	deleteBegin(front, rear);

	appendEnd(front,6, rear);
	appendEnd(front,7, rear);
	appendEnd(front,8, rear);
	appendEnd(front,9, rear);
	appendEnd(front,10, rear);

    displayQueue(front);
    cout << endl;

    appendEnd(front,10, rear);
    displayQueue(front);
    cout << endl;

    cout << frontValue(front) << endl;

    deleteBegin(front, rear);
    deleteBegin(front, rear);
    displayQueue(front);
    cout << endl;
    cout << frontValue(front) << endl;

    return 0;
}



