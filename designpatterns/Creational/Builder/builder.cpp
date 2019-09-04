#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class HtmlBuilder;

class HtmlElement
{
private:
    string name;
    string text;
    vector<HtmlElement> elements;
    const size_t indent_size = 2;
    HtmlElement() {}
    HtmlElement(const string& name, const string& text):name(name),text(text){}
public:
    string str(int indent = 0) const
    {
        ostringstream oss;
        string i(indent_size*indent, ' ');
        oss << i << "<" << name << ">" << endl;
        if (text.size() > 0)
            oss << string(indent_size*(indent + 1), ' ') << text << endl;

        for (const auto& e : elements)
            oss << e.str(indent + 1);

        oss << i << "</" << name << ">" << endl;
        return oss.str();
    }

    friend class HtmlBuilder;

    static HtmlBuilder build(string  root_name);  //for single line usage
    static HtmlBuilder create(string  root_name);  //for single line usage
};

class HtmlBuilder
{
private:
    HtmlElement root;
public:
    HtmlBuilder(string root_name)
    {
        root.name = root_name;
    }

    //void add_child(string child_name, string child_text)
    //{
    //    HtmlElement e(child_name, child_text);
    //    root.elements.emplace_back(e);
    //}

    HtmlBuilder& add_child(string child_name, string child_text)
    {
        HtmlElement e(child_name, child_text);
        root.elements.emplace_back(e);
        return *this;
    }

    HtmlBuilder* add_child_2(string child_name, string child_text)
    {
    	HtmlElement e(child_name, child_text);
        root.elements.emplace_back(e);
        return this;
    }

    string str() const
    {
        return root.str();
    }

    HtmlElement build2() { return root; }
    operator HtmlElement() const { return root; }
};

HtmlBuilder HtmlElement::build(string  root_name)
{
	return HtmlBuilder(root_name);
}

HtmlBuilder HtmlElement::create(string  root_name)
{
	return HtmlBuilder(root_name);
}

/*
int main()
{
    //HtmlBuilder r("ul");
    //r.add_child("li","Hello");
    //r.add_child("li","Morning"); //void case
    //r.add_child("li","Hello").add_child("li", "Morning"); //reference case
	HtmlBuilder build = HtmlElement::build("ul").add_child("li","Hello").add_child("li", "Morning"); //single line
	//HtmlBuilder* bptr  = HtmlElement::build("ul").add_child_2("li","Hello")->add_child_2("li", "Evening");
	HtmlElement e = HtmlElement::build("ul").add_child("li","Hi").add_child("li", "Mark"); //return HtmlElement instead of build
	cout << build.str() << endl;
	//cout << bptr->str() << endl;
    cout << e.str() << endl;
    //delete bptr;

    HtmlElement ele = HtmlElement::create("ul").add_child("li","Good").add_child("li","Night").build2(); //retutn Html Element w/o uisng opertor
    cout << ele.str() << endl;
    return 0;
}*/


