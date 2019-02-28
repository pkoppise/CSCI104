#include <iostream>
#include <string>
using namespace std;

class Item 
{
public:
    Item(int x, string y);
	int x;
	string y;
};

Item::Item(int x, string y)
{
	this->x = x;
	this->y = y;
}

Item* buildItem() 
{
    //Item x(4, "hi"); //object creation Note:Item& does not work
    Item* x = new Item(4,"hi");
    return x;
}
 

int main()
{
    Item* i = buildItem(); // access i’s data.
    cout << i->x << endl;
    cout << i->y << endl;
    delete i;
}
