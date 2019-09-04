#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

// A. High-level modules should not depend on low-level modules.
//    Both should depend on abstractions.
// B. Abstractions should not depend on details. 
//    Details should depend on abstractions.

enum Relationship
{
	parent,
	child,
	sibling
};


class Person
{
private:
	string name;
public:
	Person(string name):name(name) {}
	string getName() const { return name; }
};


class RelationshipsBrowser
{
public:
	virtual vector<Person> find_all_children_of(const string& name) = 0;
	virtual ~RelationshipsBrowser() {}
};

//low level module
class Relationships:public RelationshipsBrowser //Low Level class
{
public:
	vector<tuple<Person, Relationship, Person>> relations;
public:
	void add_parent_and_child(const Person& parent, const Person& child)
	{
    	relations.push_back(make_tuple(parent, Relationship::parent, child));
    	relations.push_back({child, Relationship::child, parent});
	}


	vector<Person> find_all_children_of(const string &name)
	{
    	vector<Person> result;
    	/*for (auto&& [first, rel, second] : relations)
    	{
      		if (first.name == name && rel == Relationship::parent)
      		{
        		result.push_back(second);
      		}
    	}*/
    	return result;
	}
};


class Research //High level class
{
private:
public:
	Research(RelationshipsBrowser &browser)
	{
    	for (auto& child : browser.find_all_children_of("John"))
    	{
    		cout << "John has a child called " << child.getName() << endl;
    	}		
	}
};

/*
int main()
{
	Person parent("John");
	Person child1("Phani");
	Person child2("Raja");

	Relationships rs;
	rs.add_parent_and_child(parent, child1);
	rs.add_parent_and_child(parent,child2);

	//Research obj(rs);
	return 0;
}*/
