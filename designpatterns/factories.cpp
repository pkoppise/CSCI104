#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y): x(x),y(y) {}
	friend ostream& operator<<(ostream& out, Point& coor)
	{
		out << coor.x << " " << coor.y << endl;
		return out;
	}
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
	auto p = PointFactory::NewCartesian(2.5, 3.5);
	cout << p;
	return 0;
}*/
