/*
 * text_formatting.cpp
 *
 *  Created on: 01-Sep-2019
 *      Author: 503129832
 */

#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FormattedText
{
public:
	string plain_text;
	bool *caps;
public:
	FormattedText(const string& plain_text): plain_text(plain_text) {
		caps = new bool[plain_text.length()];
		memset(caps, 0, plain_text.length());
	}

	~FormattedText()
	{
		delete[] caps;
	}

	void capitalize(int start, int end)
	{
		for(int i = start; i <=end; i++)
		{
			caps[i] = true;
		}
	}

	friend ostream& operator<<(ostream& out, FormattedText &obj)
	{
		string s;
		for(unsigned int i = 0; i < obj.plain_text.length(); i++)
		{
			char c = obj.plain_text[i];
			s += (obj.caps[i] ? toupper(c) : c);
		}
		return out << s;
	}
};

class BetterTextFormat
{
public:
	struct TextRange
	{
		int start, end;
		bool capitalize;

		bool covers(int position)
		{
			return (position >= start && position <= end);
		}
	};

	TextRange& get_range(int start, int end)
	{
	    formatting.emplace_back(TextRange{ start, end });
	    return *formatting.rbegin();
	}

	BetterTextFormat(const string& plainText): plain_text(plainText) {}

private:
	string plain_text;
	vector<TextRange> formatting;
public:
	friend std::ostream& operator<<(std::ostream& os, BetterTextFormat& obj)
	{
	    string s;
	    for (size_t i = 0; i < obj.plain_text.length(); i++)
	    {
	        auto c = obj.plain_text[i];
	        for (auto& rng : obj.formatting)
	        {
	            if (rng.covers(i) && rng.capitalize)
	            {
	                c = toupper(c);
	            }
                s += c;
	        }
	    }
	    return os << s;
	  }
};

/*
int main()
{
	FormattedText text("This is a brave new world");
	text.capitalize(10,15);
	cout << text << endl;


	BetterTextFormat obj("This is a brave new world");
	obj.get_range(10,15).capitalize = true;
	cout << obj << endl;


	return 0;
}*/




