#include <iostream>
using namespace std;

/*
class StackInt
{
public:
	StackInt(unsigned int capacity);
	~StackInt();

	unsigned int size() const { return size_; }//get size
    void push_back(const int& value); //enqueue
    void pop_back(); // dequeue
    int const& top() const { return data[top_]; } //get the front vale
    int const& get(int loc) const {return data[loc]; } // get the value
    bool empty() const; //checks if Stack is empty
private:
    int* data;
    int  top_;
    unsigned int size_;
    unsigned int cap;
};

StackInt::StackInt(unsigned int capacity):size_(0),cap(capacity)
{
	data = new int[cap];
	top_  = -1;
}

StackInt::~StackInt()
{
	delete []data;
}

void StackInt::push_back(const int& value)
{
	if(size_ < cap)
	{
		data[size_] = value;
		size_++;
		top_++;
	}
	else
	{
		cout << "Stack is full" << endl;
	}
}

void StackInt::pop_back()
{
	if(size_ == 0)
	{
		cout <<"Stack is empty" << endl;
	}
	else
	{
		--size_;
		--top_;
	}
}


int main()
{
	StackInt obj(3);
    obj.push_back(6);
    obj.push_back(7);
    obj.push_back(8);

    for(unsigned int i=0; i < obj.size(); i++){
       cout << obj.get(i) << " ";
    }
    cout << endl;

    cout << obj.top() << endl;

    obj.pop_back();
    for(unsigned int i=0; i < obj.size(); i++){
       cout << obj.get(i) << " ";
    }
    cout << endl;
    cout << obj.top() << endl;
}*/
