#include <iostream>
using namespace std;

/*
struct Item
{
	int val;
	Item* next;
};

bool isEmpty(Item* head, Item* rear)
{
	if(head == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void appendEnd(Item*& head, int v, Item*& rear)
{
    Item* newptr= new Item;
    newptr->val= v;
    newptr->next = NULL;

    if(head == NULL)
    {
    	head = newptr;
    	rear = newptr;
    }
    else
    {
    	rear->next = newptr;
    	rear = newptr;
    }
}


void deleteBegin(Item*& head, Item*& rear)
{
	if(isEmpty(head,rear))
	{
        return;
	}

	if(head == rear)
	{
		head = rear = NULL;
		free(head);
	}
	else
	{
		Item* temp = head;
        head = temp->next;
        free(temp);
	}
}

//Tail recursion for first to last and head recursion from last to first
void print(Item* ptr)
{
    if(ptr == NULL)
    {
      return;
    }
    else
    {
      cout << ptr->val << endl;
      print(ptr->next);
    }
}

int lenghtLL(Item *ptr)
{
	Item *temp = ptr;
	int count = 0;
	while(temp != NULL)
	{
		temp = temp->next;
		count = count + 1;
	}
	return count;
}

int main()
{
  Item* head = NULL;
  Item* rear = NULL;

  appendEnd(head,4,rear);
  appendEnd(head,5,rear);
  appendEnd(head,6,rear);
  appendEnd(head,7,rear);

  cout << lenghtLL(head) << endl;
  cout << "------------" << endl;
  print(head);

  cout << "------------" << endl;
  deleteBegin(head,rear);
  print(head);

  return 0;
}*/
