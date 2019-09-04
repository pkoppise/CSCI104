#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>
#include <boost/lexical_cast.hpp>
using namespace std;

class Token
{
public:
	enum Type { integer, plus, minus, lparen, rparen } type;
	string text;
public:
	Token(Type type, string text): type(type), text(text) {}
	friend ostream& operator <<(ostream& out, const Token& obj)
	{
		out << "'" << obj.text << "'";
		return out;
	}
};

vector<Token> lexi(const string& input)
{
	vector<Token> result;
	for(unsigned int i = 0; i < input.size(); i++)
	{
		switch(input[i])
		{
		case '+':
			result.push_back(Token{Token::plus, "+"});
			break;
		case '-':
			result.push_back(Token{Token::minus, "-"});
			break;
		case ')':
			result.push_back(Token{Token::rparen, ")"});
			break;
		case '(':
			result.push_back(Token{Token::lparen, "("});
			break;
		default:
			ostringstream buffer;
			buffer << input[i];
			for(unsigned int j=i+1; j < input.size(); j++)
			{
				if(isdigit(input[j]))
				{
					buffer << input[j];
					++i;
				}
				else
				{
					result.push_back(Token{Token::integer, buffer.str()});
					break;
				}
			}
		}
	}
	return result;
}

class Element
{
public:
	virtual int eval() const = 0;
	virtual ~Element() {}
};

class Integer: public Element
{
private:
	int value;
public:
	Integer(int value): value(value){}
	int eval() const override
	{
		return value;
	}
};

class BinaryOperation: public Element
{
private:
	enum Type {addition, subtraction } type;
	shared_ptr<Element> lhs, rhs;
public:
	int eval() const override
	{
		auto left = lhs->eval();
		auto right = rhs->eval();
		if(type == addition)
		{
			return left + right;
		}
		else
		{
			return left - right;
		}
	}
	friend shared_ptr<Element> parse(const vector<Token>& tokens);
};

shared_ptr<Element> parse(const vector<Token>& tokens)
{
	  auto result = make_unique<BinaryOperation>();
	  bool have_lhs = false;
	  for (size_t i = 0; i < tokens.size(); i++)
	  {
	    auto token = tokens[i];
	    switch(token.type)
	    {
	    case Token::integer:
	    {
	      int value = boost::lexical_cast<int>(token.text);
	      auto integer = make_shared<Integer>(value);
	      if (!have_lhs) {
	        result->lhs = integer;
	        have_lhs = true;
	      }
	      else result->rhs = integer;
	    }
	      break;
	    case Token::plus:
	      result->type = BinaryOperation::addition;
	      break;
	    case Token::minus:
	      result->type = BinaryOperation::subtraction;
	      break;
	    case Token::rparen:
	    	break;
	    case Token::lparen:
	    {
	      unsigned int j = i;
	      for (; j < tokens.size(); ++j)
	        if (tokens[j].type == Token::rparen)
	          break; // found it!

	      vector<Token> subexpression(&tokens[i + 1], &tokens[j]);
	      auto element = parse(subexpression);
	      if (!have_lhs)
	      {
	        result->lhs = element;
	        have_lhs = true;
	      }
	      else result->rhs = element;
	      i = j; // advance
	    }
	    break;
	    }
	  }
	  return result;}

/*
int main()
{
	string input{"(13-4)-(12+1)"};
	auto tokens = lexi(input);

	for(auto &tk: tokens)
		cout << tk << "	";
	cout << endl;

	try
	{
	    auto parsed = parse(tokens);
	    cout << input << " = " << parsed->eval() << endl;
	}
	catch (const exception& e)
	{
	    cout << e.what() << endl;
	}

	return 0;
}*/
