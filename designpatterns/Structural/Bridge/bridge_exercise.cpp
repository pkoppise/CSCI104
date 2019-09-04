/*
 * bridge_exercise.cpp
 *
 *  Created on: 25-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <string>
using namespace std;

class Render
{
public:
	virtual void render_sqaure() = 0;
	virtual void render_triangle() = 0;
	virtual ~Render() = default;
};

class VectorRender : public Render
{
public:
    void render_sqaure() override
    {
        cout <<  "Drawing sqaure as lines" << endl;
    }

    void render_triangle() override
    {
        cout <<  "Drawing triangle as lines" << endl;
    }
};

class RasterRender : public Render
{
public:
    void render_sqaure() override
    {
        cout <<  "Drawing sqaure as pixels" << endl;
    }

    void render_triangle() override
    {
        cout <<  "Drawing triangle as pixels" << endl;
    }
};

class Shape2
{
public:
	Render& render;
	Shape2(Render& render): render(render) {}
	virtual void draw() = 0;
	virtual ~Shape2() = default;
};

class Triangle : public Shape2
{
public:
    Triangle(Render& render):Shape2(render) {}
    void draw() override { render.render_triangle(); }
};

class Square : public Shape2
{
public:
    Square(Render& render):Shape2(render) {}
    void draw() override { render.render_sqaure(); }
};

/*
int main()
{
	VectorRender vr;
	RasterRender rr;

    Triangle t(vr);
    t.draw();

    Square s(vr);
    s.draw();

    Triangle t1(rr);
    t1.draw();

    Square s1(rr);
    s1.draw();
    return 0;
 }*/


