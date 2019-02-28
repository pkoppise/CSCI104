#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       Area();
       Area(int, int);
       int AreaCalculation() {  return (length * breadth);  }
       void DisplayArea(int temp) { cout << "Area: " << temp << endl; }
};

Area::Area():length(5),breadth(2) {
	cout <<"Default Constructor" << endl;
}

Area::Area(int length, int breadth) {
    this->length = length;
    this->breadth = breadth;
    cout <<"Parameterized constructor" << endl;
}

int main()
{
    Area A1;
    int area;

    area = A1.AreaCalculation();
    A1.DisplayArea(area);

    Area A2(7,8);
    area = A2.AreaCalculation();
    A2.DisplayArea(area);

    return 0;
}
