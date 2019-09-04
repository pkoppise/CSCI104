/*
 * composite.cpp
 *
 *  Created on: 25-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GraphicObject
{
public:
	virtual void draw() = 0;
	virtual ~GraphicObject() = default;
};

class Circle: public GraphicObject
{
public:
	void draw() override
	{
		cout << "Circle" << endl;
	}
};

class Group: public GraphicObject
{
private:
	string name;
public:
	vector<GraphicObject*> objects;
	Group(const string& name):name(name) {}
	void draw() override
	{
		cout << "Group " << name.c_str() << " contains:" << endl;
		//for(auto&& o: objects)
		for(GraphicObject* o: objects)
			o->draw();
	}
};

/*
int  main()
{
	Circle c1;
	c1.draw();

	Group root("root");
	Circle c2, c3;
    root.objects.push_back(&c2);
    root.objects.push_back(&c3);
    root.draw();
}*/
