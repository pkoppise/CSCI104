#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class HtmlElement
{
private:
    string name;
    string text;
    vector<HtmlElement> elements;
    const size_t indent_size = 2;
public:
    HtmlElement() {}
    HtmlElement(const string& name, const string& text):name(name),text(text){}
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
      // void to start with
    void add_child(string child_name, string child_text)
    {
        HtmlElement e(child_name, child_text);
        root.elements.emplace_back(e);
    }
    
    string str()
    {
        return root.str();
    }
};

int main()
{
    HtmlBuilder r("ul");
    r.add_child("li","Hello");
    r.add_child("li","Morning");
    cout << r.str() << endl;
    return 0;

}
