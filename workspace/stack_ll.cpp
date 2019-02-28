#include <iostream>
using namespace std;
/*
struct Item
{
	int val;
	Item* next;
};

void appendBegin(Item*& head, int v)
{
	Item *newptr = new Item;
	newptr->val = v;
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
	if(head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	Item *temp = head;
	head = temp->next;
	free(temp);
}

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

int getTopElement(Item *ptr)
{
	return (ptr->val);
}

int main()
{
  Item* head = NULL;

  appendBegin(head,6);
  appendBegin(head,7);
  appendBegin(head,8);
  appendBegin(head,9);
  appendBegin(head,10);


  cout << lenghtLL(head) << endl;
  cout << "------------" << endl;
  print(head);

  deleteBegin(head);
  cout << "------------" << endl;
  print(head);
  cout << "------------" << endl;
  cout << getTopElement(head) << endl;

  return 0;
}*/
