/*
 * adapter_exercise.cpp
 *
 *  Created on: 21-Aug-2019
 *      Author: 503129832
 */

//You are given a Rectangle  protocol and an extension method on it.
//Try to define a SquareToRectangleAdapter  that adapts the Square  to the Rectangle  interface.

#include <iostream>
using namespace std;

class Square
{
public:
  int side{ 0 };
public:
  explicit Square(const int side) : side(side) {}
};

class Rectangle
{
public:
  virtual ~Rectangle() = default;
  virtual int width() const = 0;
  virtual int height() const = 0;
  int area() const
  {
    return width() * height();
  }
};

class SquareToRectangleAdapter : public Rectangle
{
private:
	const Square& square;
public:
  SquareToRectangleAdapter(const Square& square): square(square) {}
  int width() const override { return square.side;}
  int height() const override { return square.side;}
};

/*
int main()
{
	Square s(5);
	SquareToRectangleAdapter rectangle(s);
	cout << rectangle.area() << endl;
	return 0;
}*/
