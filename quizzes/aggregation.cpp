#include <iostream>
using namespace std;

class Engine {
public:
  void start() const { cout << "Engine started" << endl;}
  void stop() const { cout <<"Engine stopped" << endl; }
  ~Engine() { cout <<"Engine deleted" << endl; }
};

class Car {
private:
  Engine *engine;
public:
  Car(Engine *engine):engine(engine){}
  ~Car()
  {
      cout <<"Car deleted" << endl;
  }

  void startCar()
  {
      engine->start();
  }
};

int main() {
  Engine eng;
  {
      Car car(&eng);
      car.startCar();
  }
  eng.stop();
  return 0;
} 
