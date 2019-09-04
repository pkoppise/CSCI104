/*
 * decorator.cpp
 *
 *  Created on: 31-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Shape
{
public:
	virtual string str() const = 0;
	virtual ~Shape() = default;
};

class Circle: public Shape
{
private:
	float radius;
public:
	Circle():radius(0.0) {}
	Circle(float radius):radius(radius) {}
	void resize(float factor)
	{
		radius *= factor;
	}
	string str() const override
	{
		ostringstream oss;
		oss << "A circle with radius:" << radius;
		return oss.str();
	}
};

class Square: public Shape
{
private:
	float side;
public:
	Square():side(0.0) {}
	Square(float side):side(side) {}
	string str() const override
	{
		ostringstream oss;
		oss << "A Square with side:" << side;
		return oss.str();
	}
};

//1st Dynamic Decorator
class ColoredShape: public Shape
{
private:
	Shape& shape;
	string color;
public:
	ColoredShape(Shape& shape, string color): shape(shape), color(color) {}
	string str() const override
	{
		ostringstream oss;
		oss << shape.str() << " has the color " << color;
		return oss.str();
	}
};

//2nd dynamic decorator
class TransparentShape: public Shape
{
private:
	Shape& shape;
	uint8_t transparency;
public:
	TransparentShape(Shape& shape, uint8_t transparency): shape(shape),transparency(transparency) {}
	string str() const override
	{
		ostringstream oss;
		oss << shape.str() << " has "
			<< static_cast<float>(transparency) / (255.f * 100.f)
		    << "% transparency";
		return oss.str();
	}

};


//1st static decorator
template <typename T>
class ColoredShape2: public T
{
private:
	static_assert(is_base_of<Shape, T>::value,
			      "Template argument must not be shape");

	string color;
public:
	ColoredShape2() {}
	template <typename...Args>
	ColoredShape2(const string& color, Args ...args): T(std::forward<Args>(args)...), color(color)
	    // you cannot call base class ctor here
	    // b/c you have no idea what it is
	{}

	string str() const override
	{
		ostringstream oss;
		oss << T::str() << " has the color "<< color;
		return oss.str();
	}
};


//2nd static decorator
template <typename T>
class TransparentShape2: public T
{
private:
	static_assert(is_base_of<Shape, T>::value,
			      "Template argument must not be shape");

	uint8_t transparency;
public:
	template <typename...Args>
	TransparentShape2(const uint8_t transparency, Args ...args): T(std::forward<Args>(args)...), transparency(transparency)
	    // you cannot call base class ctor here
	    // b/c you have no idea what it is
	{}

	string str() const override
	{
		ostringstream oss;
		oss << T::str() << " has "
			<< static_cast<float>(transparency) / (255.f * 100.f)
		    << "% transparency";
		return oss.str();
	}
};

/*
int main()
{
	Square s(5);
	cout << s.str() << endl;

	ColoredShape red_sqaure(s,"Red");
	TransparentShape trans_sqaure(red_sqaure,10);

	cout << red_sqaure.str() << endl;
	cout  << trans_sqaure.str() << endl;

	Circle c(2);
	c.resize(2);

	ColoredShape green_circle(c,"Green");
	cout << green_circle.str() << endl;
	// green_circle.reszie(); cannot access called as down side

	ColoredShape2<Circle> green_circle2("green", 5);
	cout << green_circle2.str() << endl;
	green_circle2.resize(2);
	cout << green_circle2.str() << endl;

	TransparentShape2<ColoredShape2<Circle>> t_circle(51,"blue", 10);
	cout << t_circle.str() << endl;

	return 0;
}*/
