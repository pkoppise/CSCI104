#include <iostream>
using namespace std;

class boVector
{
public:	
	int size;
	double* arr;
public:
    //default
    boVector()
	{
		size = 0;
		arr = NULL;
	}
	//copy constructor
	boVector(const boVector& rhs) {
		cout << "Copy called" << endl;
		size = rhs.size;
		arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rhs.arr[i];
		}
	}
	//move constructor
	boVector(boVector&& rhs)
	{
		cout << "move called" << endl;
		size = rhs.size;
		arr  = rhs.arr;
		rhs.arr = nullptr;
	}
	
	// Move assignment operator.
    boVector& operator=(boVector&& rhs)
    {
        cout << "move assignment called" << endl;
		if (this != &rhs) {
			delete[] arr;
			// Copy the data pointer and its length from the source object.
			arr = rhs.arr;
			size = rhs.size;
			// Release the data pointer from the source object so that
			// the destructor does not free the memory multiple times.
			rhs.arr = NULL;
			rhs.size = 0;
		}
        return *this;
    }
	
	//Assignment operator
	boVector& operator=(const boVector& rhs)
	{
		cout << "assignment called" << endl;
		if(&rhs == this) { cout << "Done" << endl; return *this;}
		if(arr != NULL) { delete []arr; }		
		size = rhs.size;
		arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rhs.arr[i];
		}
		return *this;
	}
	
	~boVector() { delete []arr; }
};

void foo(boVector v)
{
	for(int i = 0; i < v.size; i++)
	{
		cout << "pass value:" << v.arr[i] << " ";
	}
	cout << endl;
}

void foo_ref(boVector& v)
{
	for(int i = 0; i < v.size; i++)
	{
		cout << "pass by ref:" << v.arr[i] << " ";
	}
	cout << endl;
}

boVector createBoVector()
{
	boVector obj;
	obj.size = 5;
	obj.arr = new double[obj.size];
	for(int i = 0; i < obj.size; i++)
	{
		obj.arr[i] = i+10;
	}
	return obj;
}

int main()
{
	boVector reuse = createBoVector(); //assignment operation
	foo_ref(reuse);   //function call or no constructor
	foo(reuse);       //copy constructor
	foo(move(reuse)); //move constructor
	foo(createBoVector());  //move assignment operation temporary so better use move
	return 0;
}
