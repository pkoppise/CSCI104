//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///Composition is generally used when you want the features of an existing class inside your new class, 
// but not its interface. That is, you embed an object to implement features of your new class, 
///but the user of your new class sees the interface you’ve defined rather than the interface from the original class.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class Engine {
public:
  void start() const { cout << "Engine started" << endl;}
  ~Engine() { cout <<"Engine deleted" << endl; }
};

class Car {
private:
  Engine* engine;
public:
  Car()
  {
      engine = new Engine;
  }
  ~Car()
  {
      cout <<"Car deleted" << endl;
      delete engine;
  }

  void startCar()
  {
      engine->start();
  }
};

int main() {
  Car *car = new Car;
  car->startCar();
  delete car;
  return 0;
} 
