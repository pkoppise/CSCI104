/*
 * bridge_implementataion.cpp
 *
 *  Created on: 24-Aug-2019
 *      Author: 503129832
 */

#include <iostream>
using namespace std;

class Renderer
{
public:
	virtual void render_circle(float x, float y, float radius) = 0;
	virtual ~Renderer() = default;
};

class RasterRenderer: public Renderer
{
public:
	void render_circle(float x, float y, float radius) override
	{
		cout <<" Render circle raster with radius " << radius  << endl;
	}
};

class VectorRenderer: public Renderer
{
public:
	void render_circle(float x, float y, float radius) override
	{
		cout <<" Render circle vector with radius " << radius << endl;
	}
};


class Shape
{
protected:
	Renderer& renderer;
	Shape(Renderer &renderer): renderer(renderer) {}
public:
	virtual void draw() = 0;
	virtual void resize(float factor) = 0;
	virtual ~Shape() = default;
};

class Circle: public Shape
{
private:
	float x,y,radius;
public:
	Circle(Renderer& renderer, float x, float y, float radius): Shape(renderer), x(x), y(y), radius(radius) {}
	void resize(float factor) override
	{
		radius *= factor;
	}

	void draw() override
	{
		renderer.render_circle(x,y,radius);
	}
};

/*
int main()
{
	RasterRenderer rr;
	Circle circle(rr, 5,5,5);
    circle.draw();
    circle.resize(5);
    circle.draw();
}*/



