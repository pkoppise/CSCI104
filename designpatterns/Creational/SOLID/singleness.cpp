#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <boost/lexical_cast.hpp>
#include <algorithm>
using namespace std;

class Journal
{
private:
  string title;
public:
  vector<string> entries;
  Journal(const string& title): title(title) {}
  void add_entry(const string& entry);
  void printJournals();
};

void Journal::add_entry(const string& entry)
{
  static int count = 1;
  entries.push_back(boost::lexical_cast<string>(count++) + ": " + entry);
}

void Journal::printJournals()
{
	vector<string>::iterator it;
	for(it = entries.begin(); it != entries.end(); ++it)
	{
		cout << *it << endl;
	}
}

class PersistenceManager
{
public:
	void save(Journal& journal, string filename)
	{
		ofstream ofile(filename);
		if(ofile.is_open())
		{
			for(unsigned int i = 0; i < journal.entries.size(); i++)
			{
				ofile << journal.entries.at(i) << endl;
			}
		}
		else
		{
			cout << "file is notopened" << endl;
		}
		ofile.close();
	}
};

/*
int main()
{
  Journal journal{"Dear Diary"};
  journal.add_entry("I ate a bug");
  journal.add_entry("I cried today");
  journal.printJournals();

  PersistenceManager mg;
  mg.save(journal, "journals.txt");
  return 0;
}*/



