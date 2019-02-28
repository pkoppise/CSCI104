//the code is for bounded array, need to work on unbounded array
#include <iostream>
#include <algorithm>
using namespace std;

/*
class BAListInt
{
public:
   BAListInt(unsigned int cap);
   ~BAListInt() { delete [] data_; }

   bool empty() const { return size_ == 0; }
   unsigned int size() const { return size_; }
   void insert(int pos, const int& val);
   void remove(int pos);
   int& get(int loc) { return data_[loc]; }
   void push_back(const int& val);

private:
   int* data_;
   unsigned int size_;
   unsigned int cap_;
};

BAListInt::BAListInt(unsigned int cap)
          :size_(0),cap_(cap)
{
	data_ = new int[cap_];
}

void BAListInt::push_back(const int& val)
{
	if(size_ < cap_)
	{
		data_[size_] = val;
		size_++;
	}
}

void BAListInt::insert(int loc, const int& val)
{
	if(size_ == cap_)
	{
		cout << "cannot insert as list is full" << endl;
	}

	if(size_ < cap_)
	{
		for(int i = size_ - 1; i >loc; i--)
		{
			data_[i + 1] = data_[i];
		}
        data_[loc] = val;
        size_++;
	}
}

void BAListInt::remove(int pos)
{
	for(int i = pos; i < int(size_ - 1); i++)
	{
		data_[i] = data_[i + 1];
	}
	size_--;
}

int main()
{
   BAListInt mylist(5);
   mylist.push_back(11);
   mylist.push_back(12);
   mylist.push_back(13);
   mylist.insert(1,9);

   for(unsigned int i=0; i < mylist.size(); i++){
      cout << mylist.get(i) << " ";
   }
   cout << endl;

   mylist.remove(1);
   mylist.remove(1);
   for(unsigned int i=0; i < mylist.size(); i++){
      cout << mylist.get(i) << " ";
   }
   cout << endl;


   if(mylist.empty())
   {
	   cout << "List is empty" << endl;
   }
   else
   {
	   cout << "List is not empty" << endl;
   }
   return 0;
}*/

