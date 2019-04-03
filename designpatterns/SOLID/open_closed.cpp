yy#include <string>
#include <vector>
#include <iostream>
using namespace std;

enum Color{red, green, blue};
enum Size{small, medium, large};

struct Product
{
	string name;
    Color color;
    Size size;
};

/*
class ProductFilter
{
public:
	vector<Product*> bycolor(vector<Product*> items, Color color)
	{
		vector<Product*> result;
		for(auto &i: items)
			if(i->color == color)
				result.push_back(i);
		return result;
	}

	vector<Product*> bysize(vector<Product*> items, Size size)
	{
		vector<Product*> result;
		for(auto &i: items)
			if(i->size == size)
				result.push_back(i);
		return result;
	}
};*/

class Specifications
{
public:
	virtual bool is_satisfied(Product *item) =  0;
	virtual ~Specifications() {}
};


class ColorSpecification:public Specifications
{
private:
	Color color;
public:
	ColorSpecification(Color color):color(color) {}
	bool is_satisfied(Product* item)
	{
		return (item->color == color);
	}

};

class SizeSpecification:public Specifications
{
private:
	Size size;
public:
	SizeSpecification(Size size):size(size) {}
	bool is_satisfied(Product* item)
	{
		return (item->size == size);
	}

};

class AndSpecification:public Specifications
{
private:
	Specifications &color;
	Specifications &size;
public:
	AndSpecification(Specifications &color, Specifications &size):color(color), size(size) {}
	bool is_satisfied(Product *item)
	{
		return (color.is_satisfied(item) && size.is_satisfied(item));
	}
};

class Filter
{
public:
	virtual vector<Product*> filter(vector<Product*> items, Specifications &spec) = 0;
	virtual ~Filter() {}
};

class BetterFilter:public Filter
{
public:
	vector<Product*> filter(vector<Product*> items, Specifications &spec) //no slicing
	{
		vector<Product*> result;
		for(auto &i: items)
			if(spec.is_satisfied(i))
			{
				result.push_back(i);
			}
		return result;
	}
};

int main()
{
	  Product apple{"Apple", Color::green, Size::small};
	  Product tree{"Tree", Color::green, Size::large};
	  Product house{"House", Color::blue, Size::large};

	  vector<Product*> list_items{&apple, &tree, &house};

	  ColorSpecification color(Color::green);
	  SizeSpecification size(Size::large);
	  BetterFilter bf;

	  cout << "Filter by colour" << endl;
	  cout <<"-------------------" << endl;
	  vector<Product*> green_things = bf.filter(list_items,color);
	  for(auto &i: green_things)
		  cout << i->name << endl;
	  cout <<"-------------------" << endl;      

	  vector<Product*> size_things = bf.filter(list_items,size);
	  cout << "Filter by size" << endl;
	  cout <<"-------------------" << endl;
	  for(auto &i: size_things)
		  cout << i->name << endl;
	  cout <<"-------------------" << endl;

	  AndSpecification combi(color, size);
	  vector<Product*> things = bf.filter(list_items, combi);
	  cout << "Filter by size and color" << endl;
	  cout <<"-------------------" << endl;
	  for(auto &i: things)
		  cout << i->name << endl;
	  cout <<"-------------------" << endl;	  
	  	  	  
	  /*ProductFilter obj;

	  cout << "Filter by colour" << endl;
	  cout <<"-------------------" << endl;
	  vector<Product*> green_things = obj.bycolor(list_items, Color::green);

	  for(auto &i: green_things)
		  cout << i->name << endl;
	  cout <<"-------------------" << endl;

	  cout << "Filter by size" << endl;
	  cout <<"-------------------" << endl;
	  vector<Product*> size_things = obj.bysize(list_items, Size::large);
	  for(auto &i: size_things)
		  cout << i->name << endl;
	  cout <<"-------------------" << endl;*/
	  return 0;
}
