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

int size(Item* ptr)
{
	int count = 0;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}

bool full(Item* ptr)
{
	int temp = size(ptr);
	return(temp == SIZE);
}

bool empty(Item* ptr)
{
	return (ptr == NULL);
}

void appendBegin(Item*& head, int rval)
{
	if(full(head))
	{
		cout << "Stack is full" << endl;
		return;
	}

	Item* newptr = new Item;
	newptr->val = rval;
	newptr->next = NULL;

	if(head == NULL)
	{
		head = newptr;
	}
	else
	{
		newptr->next = head;
		head = newptr;
	}
}

void deleteBegin(Item*& head)
{
	if(empty(head))
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		Item* temp = head;
		head = temp->next;
		free(temp);
	}
}

void display(Item* ptr)
{
	if(ptr == NULL)
	{
		return;
	}
	else
	{
		display(ptr->next);
		cout << ptr->val << " ";
	}
	cout << endl;
}

int topValue(Item* ptr)
{
	return ptr->val;
}

int main()
{
	Item* head = NULL;
	deleteBegin(head);

	setSize(5);
	appendBegin(head, 6);
	appendBegin(head, 7);
	appendBegin(head, 8);
	appendBegin(head, 9);
	appendBegin(head, 10);

	display(head);
	appendBegin(head, 10);
	display(head);

	cout << topValue(head) << endl;

	deleteBegin(head);
	deleteBegin(head);
	display(head);
	cout << topValue(head) << endl;
	return 0;
}
