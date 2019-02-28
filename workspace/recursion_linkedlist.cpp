#include <iostream>
using namespace std;

struct Item
{
	int val;
	Item* next;
	Item() {
		val = 0;
		next = NULL;
	};
	Item(int v, Item* n)
	{
		val = v;
		next = n;
	}
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

void deleteEnd(Item*& head)
{
	if(head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}

	Item *temp = head;
	Item *prev = NULL;

	if(temp->next == NULL)
	{
		head = NULL;
		free(temp);
	}
	else
	{
		while(temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		free(temp);
	}
}


void reverseList(Item*& head)
{
	Item *prev = NULL;
	Item *curr = head;
	Item *ntt = NULL;

	while(curr != NULL)
	{
		ntt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = ntt;
	}
	head = prev;
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

void printReverse(Item *ptr)
{
	if(ptr == NULL)
	{
		return;
	}
	else
	{
		printReverse(ptr->next);
		cout << ptr->val << endl;
	}
}

void displayMiddle(Item *ptr)
{
	Item *slow = ptr;
	Item *fast = ptr;

	while(fast->next != NULL && fast != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->val << endl;
}

void findLoop(Item *ptr)
{
	Item *slow = ptr;
	Item *fast = ptr;

	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		{
			cout << "Loop found" << endl;
			throw("Loop found in linked list");
		}
	}
	cout << "Loop not found" << endl;
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

void interSection(Item *ptr1, Item *ptr2)
{
	int l1 = lenghtLL(ptr1);
    int l2 = lenghtLL(ptr2);
    int d;

    Item *slow = NULL;
    Item *fast = NULL;

    if(l1 > l2)
    {
    	d = l1 - l2;
    	slow = ptr2;
    	fast = ptr1;
    }
    else
    {
    	d = l2 - l1;
    	slow = ptr1;
    	fast = ptr2;
    }

    for(int i = 0; i < d; i++)
    {
    	fast = fast->next;
    }

    while(fast != NULL && fast->next != NULL)
    {
    	slow = slow->next;
    	fast = fast->next->next;
        if(fast == slow)
        {
        	cout << "Intersection point:" << slow->val << endl;
        }
        break;
    }
}

int addHead(Item* ptr)
{
	if(ptr == NULL)
	{
		return 0;
	}
	else
	{
		int sum = addHead(ptr->next);
        return (sum + ptr->val);
	}
}

int addTailHelper(Item* ptr, int total)
{
	if(ptr == NULL)
	{
		return total;
	}
	else
	{
		int temp =  total + ptr->val;
        return addTailHelper(ptr->next,temp);
	}
}

//Checks whether the value x is present in linked list
bool search(Item* ptr, int x)
{
    if (ptr == NULL)
        return false;

    if (ptr->val == x)
        return true;

    return search(ptr->next, x);
}

int addTail(Item *ptr)
{
	return addTailHelper(ptr,0);
}

Item* recursiveCopy(Item* ptr)
{
	if(ptr == NULL)
	{
		return NULL;
	}
	else
	{
		return new Item(ptr->val, recursiveCopy(ptr->next));
	}
}

int main()
{
  Item* head = NULL;
  
  appendBegin(head,3);
  appendBegin(head,2);
  appendBegin(head,1);

  appendEnd(head,4);
  appendEnd(head,5);
  appendEnd(head,6);
  appendEnd(head,7);

  cout << lenghtLL(head) << endl;
  cout << "------------" << endl;
  print(head);

  cout << "------------" << endl;
  displayMiddle(head);

  cout << "------------" << endl;
  deleteBegin(head);
  deleteEnd(head);
  print(head);

  cout << "---------" << endl;
  reverseList(head);
  print(head);

  cout << "Sum head recursion:" << addHead(head) << endl;
  cout << "Sum tail recursion:" << addTail(head) << endl;

  Item* newhead = recursiveCopy(head);
  printReverse(newhead);

  findLoop(head);

  return 0;
}
