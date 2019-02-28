#include <iostream>
using namespace std;

/*
class MyArray
{
public:
	MyArray();
	MyArray(int d[], int num); //normal
	~MyArray();

	MyArray(const MyArray& copy) //deep copy constructor
	{
		dat = new int[copy.len];
		len = copy.len;
		for(int i = 0; i < len; i++)
		{
			dat[i] = copy[i];
		}
	}

	MyArray& operator=(const MyArray& assign)
	{
		if(&assign == this) { cout << "Done" << endl; return *this;}
		if(dat != NULL) { delete []dat; }
		this->len = assign.len;
		this->dat = new int[this->len];
		for(int i = 0; i < this->len; i++)
		{
			dat[i] = assign[i];
		}
		return *this;
	}

	int& operator[](int loc) { return dat[loc]; }
	int const & operator[](int loc) const { return dat[loc]; }
	int size() const{ return len;}
private:
	int len;
	int* dat;
};

MyArray::MyArray():len(0),dat(NULL)
{

}

// Normal constructor
MyArray::MyArray(int d[],int num)
{
    dat = new int[num];
	len = num;
	for(int i=0; i < len; i++){
		dat[i] = d[i];
	}
}

MyArray::~MyArray()
{
	cout << "In destructor" << endl;
	delete []dat;
}

void printVals(MyArray& arr)
{
  for(int i=0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
    int vals[] = {9,3,7,5};
    MyArray a1(vals,4);
    MyArray a2(a1); // calls default copy
    MyArray a3 = a1; // calls default copy
    MyArray a4;
    a4 = a1; // calls default assignment
    //how are the contents of a2, a3, a4 related to a1
    a1[0] = 11;
    printVals(a1);
    printVals(a2);
    printVals(a3); //--->shallow copy is happening with defaul copy constructor so implement copy and
    printVals(a4); // assignment respectively.

    //already assigned--gotcha
    MyArray a5;
    a5 = a2 = a1;
    printVals(a1);
    printVals(a2);
    printVals(a5);

    //self assign-gotcha
    //a1 = a1;
}*/
