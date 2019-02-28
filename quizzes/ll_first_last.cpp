#include <iostream>
using namespace std;

/*
struct Item
{
	int val;
	Item* next;
};

void appendEnd(Item*& head, int v)
{
    Item* newptr= new Item;
    newptr->val= v;
    newptr->next = NULL;

    if(head == NULL)
    {
        head = newptr;
    }
    else
    {
    	Item* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newptr;
    }
}

void moveLastToFront(Item*& head)
{
	Item* last     = head;
	Item* sec_last = NULL;

	while(last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = head;
	head = last;
}

void swapTwoNodes(Item*& head, int x, int y)
{
	if(x == y)
	{
		return;
	}

	Item* prevX = NULL;
    Item* currX = head;

    Item* prevY = NULL;
    Item* currY = head;

    while(currX && currX->val != x)
    {
    	prevX = currX;
    	currX = currX->next;
    }

    while(currY && currY->val != y)
    {
    	prevY = currY;
    	currY = currY->next;
    }

    if(currX == NULL || currY == NULL)
    {
    	return;
    }

    // If x is not head of linked list
    if (prevX != NULL)
        prevX->next = currY;
    else // Else make y as new head
        head = currY;

    // If y is not head of linked list
    if (prevY != NULL)
        prevY->next = currX;
    else  // Else make x as new head
        head = currX;

    // Swap next pointers
    Item *temp = currY->next;
    currY->next = currX->next;
    currX->next  = temp;
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
      cout << ptr->val << " ";
      print(ptr->next);
    }
}

int main()
{
  Item* head = NULL;

  appendEnd(head,4);
  appendEnd(head,5);
  appendEnd(head,6);
  appendEnd(head,7);
  appendEnd(head,8);

  print(head);
  cout << endl;

  moveLastToFront(head);
  print(head);
  cout << endl;

  swapTwoNodes(head,4,6);
  print(head);

  return 0;
}*/
