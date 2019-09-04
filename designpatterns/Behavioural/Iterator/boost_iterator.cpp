/*
 * boost_iterator.cpp
 *
 *  Created on: 03-Sep-2019
 *      Author: 503129832
 */


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include <boost/iterator/iterator_facade.hpp>

//Singly linked list
class Node
{
public:
	string value;
	Node *next{nullptr};

	Node(const string &value):value(value) {}
	Node(const string &value, Node *parent):value(value) {
		parent->next = this;
	}
};

class ListIterator: public boost::iterator_facade<ListIterator, Node, boost::forward_traversal_tag>
{
public:
	Node *current{nullptr};
	ListIterator() {}
	ListIterator(Node *current): current(current) {}
private:
	friend class boost::iterator_core_access;

	void increment() { current = current->next; }

	bool equal(const ListIterator& other) const
	{
		return other.current == current;
	}
	Node& dereference() const
    {
		return *current;
    }
};

int main()
{
	  Node alpha{ "alpha" };
	  Node beta{ "beta", &alpha};
	  Node gamma{ "gamma", &beta };

	  for_each(
			   ListIterator{ &alpha },
			   ListIterator{},
			   [](const Node& n) { cout << n.value << endl; }
	          );

	  return 0;
}
