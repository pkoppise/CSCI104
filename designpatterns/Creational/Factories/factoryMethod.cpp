#include <iostream>
#include <cmath>
using namespace std;

/*enum PointType
{
	cartesian,
	ploar
};*/

class Point
{
private:
	float x;
	float y;
	//Point(float x, float y): x(x),y(y) {}
public:
	// Add more documentation
	/*Point(float a, float b, PointType type = PointType::cartesian)
    {
		if(type == PointType::cartesian)
		{
			x = a;
			y = b;
		}
		else
		{
			x = a*cos(b);
			y = a*sin(b);
		}
    }*/

	Point(float x, float y): x(x),y(y) {} //default is cartesian
	friend ostream& operator<<(ostream& out, Point& coor)
	{
		out << coor.x << " " << coor.y << endl;
		return out;
	}
	//To ensure constructor is private we can use Inner Factory i.e delcare PointFactory inside Point class as Public
	// static PointFactory Factory; //needed in case Inner factory is private too inside Point class
};


class PointFactory
{
public:
	static Point NewCartesian(float x, float y)
	{
		return {x, y};
	}
	static Point NewPolar(float rho, float thetha)
	{
		return { rho*cos(thetha), rho*sin(thetha)};
	}
};

/*
int main()
{
	//Point p(2.5, 3.5, PointType::cartesian);
	auto p = PointFactory::NewCartesian(2.5, 3.5);
	//Point::PointFactory::NewPolar(2.5,3.5);
	//Point::Factory::NewPolar(2.5,3.5);
	cout << p;
	return 0;
}*/
