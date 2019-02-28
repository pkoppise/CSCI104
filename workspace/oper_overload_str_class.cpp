#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cstring>
using namespace std;

/*
class Str {
public:
  Str():data(NULL),length(0) {}
  Str(const char* s);
  ~Str() { delete data;}



  // s += t
  Str operator+=(Str& s);
  // s += " more"
  Str& operator+=(const char* s);

  //size_t size() const;---------------------------------------->

  // str s1("103");  s1[2] = '4';
  char& operator[](unsigned int i);

  // str s1("104");  char c = s1[2];
  //char const & operator[](unsigned int i) const;------------------>

  // str s1, s2;  s1 == s2
  bool operator==(const Str &rhs) const;

  // str s1, s2;  s1+s2
  Str operator+(const Str& rhs) const;

  // str s1; s1 + " world"
  Str operator+(const char* rhs  ) const;

  friend ostream& operator<<(ostream& out, Str& obj);

private:
  char* data;
  unsigned int length;
};

Str::Str(const char* s)
{
	length = strlen(s);
	data = new char[length];
	strncpy(data, s, length);
}

ostream& operator<<(ostream& out, Str& obj)
{
	for( unsigned int i=0; i < obj.length; i++ )
	{
		out.put( obj.data[i] );
	}
	return out;
}

char& Str::operator[](unsigned int i){
	if (i >= length) throw 1;
	return data[i];
}

bool Str::operator==(const Str &rhs) const {
	unsigned int count = 0;
	if(this->length != rhs.length) { return false; }
	else
	{
		for(unsigned int i = 0; i < rhs.length; i++)
		{
			if(this->data[i] == rhs.data[i])
			{
				count++;
			}
		}
		if(count == rhs.length) { return true;}
		else {return false;}
	}
}

Str Str::operator+=(Str& s) {
	unsigned int len = this->length + s.length;
	char* temp = new char[len];

    for (unsigned int j=0; j < this->length; j++)
        temp[j] = this->data[j];

    for (unsigned int i=0; i < s.length; i++)
    {
    	temp[this->length+i] = s[i];
    }

	delete data;
    this->data = temp;
    this->length = len;
    return *this;
}


Str Str::operator+(const Str& rhs) const{
	Str temp;
	temp.length = this->length + rhs.length;
	temp.data = new char[temp.length];
	strncpy(temp.data,this->data,length);
	strncpy(temp.data + this->length, rhs.data, rhs.length);
	return temp;
}

Str& Str::operator+=(const char* s) {
	unsigned int len = this->length + strlen(s);
	char* temp = new char[len];

    for (unsigned int j=0; j < this->length; j++)
        temp[j] = this->data[j];

    for (unsigned int i=0; i < strlen(s); i++)
    {
    	temp[this->length+i] = s[i];
    }

	delete data;
    this->data = temp;
    this->length = len;
    return *this;
}

Str Str::operator+(const char* rhs) const {
	Str temp;
	temp.length = this->length + strlen(rhs);
	temp.data = new char[temp.length];
	strncpy(temp.data,this->data,length);
	strncpy(temp.data + this->length, rhs, strlen(rhs));
	return temp;
}

int main()
{
  Str s1("Hello");
  cout << "s1 is " << s1 << endl;
  Str s2("world");
  cout << "s2 is "<< s2 << endl;

  cout << "s1[1]=" << s1[1] << endl;

  s1[0] = 'J';
  cout << s1 << endl;

  Str s3 = s1 + s2;
  cout << s3 << endl;

  Str s4("world");
  cout << "Is " << s2 << " == " << s4 << "? " << boolalpha << (s2 == s4) << endl;
  cout << "Is " << s1 << " == " << s4 << "? " << boolalpha << (s1 == s4) << endl;

  s4 += s4;  // "worldworld"
  cout << "s4 after is now " << s4 << endl;

  s4 = s2;   // back to "world"
  cout << "S4 is now " << s4 << endl;

  s4 += "world";  // "worldworld"
  cout << "S4 is now doubled to be " << s4 << endl;

  Str s6 = s1 + "world";
  cout << "s6 is " << s6 << endl;
  return 0;
}*/
