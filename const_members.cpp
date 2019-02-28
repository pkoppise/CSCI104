#include <iostream>
using namespace std;

class Item {
public:
   // notice the two versions of getValue()
   // this is the non-const version
   int& getValue()
   {
	   cout << "non-const" << endl; return value; 
   }

   // this is the const version...what should it return
    int const &  getValue() const
    {
     cout << "const" << endl; return value;
    }

   void setValue(int val)
   {
	   this->value = val;
   }
   
private:
   int value;
};


void increment_it(Item& i)
{
   // how could we do this using
   //  the non-const getValue()
   //i.setValue(i.getValue() + 1);
	int &val2 = i.getValue();
    val2++;
}

// experiment
void print_it(const Item& i)
{
   cout << i.getValue() << endl;
}

/*
int main()
{
   Item x;
   x.setValue(2);
   increment_it(x);
   print_it(x);
   return 0;
}*/




