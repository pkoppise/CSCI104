#include "stackchar.h"
#include <iostream>

using namespace std;

StackChar::StackChar(unsigned int capacity):size_(0),cap(capacity)
{
	data = new char[cap];
	top_ = NULL;
}

StackChar::~StackChar()
{
	delete []data;
}

void StackChar::push_back(const char& value)
{
	if(size_ < cap)
	{
		data[size_] = value;
		size_++;
		top_ = data + (size_ - 1);
	}
	else
	{
		cout << "Stack is full" << endl;
	}
}

void StackChar::pop_back()
{
	if(size_ == 0)
	{
		cout <<"Stack is empty" << endl;
	}
	else
	{
		--size_;
		top_ = data + (size_ - 1);
	}
}

unsigned int StackChar::size() const { return size_; }

char const & StackChar::top() const { return *top_; }

char* StackChar::topf(){ return top_; }

char& StackChar::get(int loc) {return data[loc]; }

bool StackChar::empty() const
{
	if(size_ == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
