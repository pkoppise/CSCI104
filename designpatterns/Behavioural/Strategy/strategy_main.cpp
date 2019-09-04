#include <iostream>
#include <string>
#include <sstream>
#include <memory>
#include <vector>
using namespace std;

enum OutputFormat
{
  Markdown,
  Html
};

class ListStrategy
{
public:
  virtual ~ListStrategy() = default;
  virtual void add_list_item(ostringstream& oss, const string& item) = 0;
  virtual void start(ostringstream& oss) = 0;
  virtual void end(ostringstream& oss) = 0;
};

class MarkdownListStrategy : public ListStrategy
{
public:
  void start(ostringstream& oss) override {}
  void end(ostringstream& oss) override {}
  void add_list_item(ostringstream& oss, const string& item) override
  {
    oss << " * " << item << endl;
  }
};

class HtmlListStrategy : public ListStrategy
{
public:
  void start(ostringstream& oss) override
  {
    oss << "<ul>" << endl;
  }

  void end(ostringstream& oss) override
  {
    oss << "</ul>" << endl;
  }

  void add_list_item(ostringstream& oss, const string& item) override
  {
    oss << "<li>" << item << "</li>" << endl;
  }
};

template<typename LS>
class TextProcessor
{
public:
  void clear()
  {
    oss.str("");
    oss.clear();
  }
  void append_list(const vector<string> items)
  {
    list_strategy.start(oss);
    for (auto& item : items)
      list_strategy.add_list_item(oss, item);
    list_strategy.end(oss);
  }

  void set_output_format(const OutputFormat format)
  {
    switch(format)
    {
    case OutputFormat::Markdown:
      list_strategy = make_unique<MarkdownListStrategy>();
      break;
    case OutputFormat::Html:
      list_strategy = make_unique<HtmlListStrategy>();
      break;
    default:
      throw runtime_error("Unsupported strategy.");
    }
  }
  string str() const { return oss.str(); }
private:
  ostringstream oss;
  //unique_ptr<ListStrategy> list_strategy;
  LS list_strategy;
};

/*
int main()
{
  // markdown
  //TextProcessor tp;
  TextProcessor<MarkdownListStrategy> tp;
  //tp.set_output_format(OutputFormat::Markdown);
  tp.append_list({"foo", "bar", "baz"});
  cout << tp.str() << endl;

  // html
  tp.clear();

  TextProcessor<HtmlListStrategy> tp2;
  //tp.set_output_format(OutputFormat::Html);
  tp2.append_list({"foo", "bar", "baz"});
  cout << tp2.str() << endl;

  return 0;
}*/

