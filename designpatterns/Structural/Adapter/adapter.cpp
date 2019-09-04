#include <iostream>
#include <string>
using namespace std;

typedef int Cable;

class EuropeanSocketInterface
{
public:
	virtual int voltage() = 0;
	virtual Cable live() = 0;
	virtual Cable neutral() = 0;
	virtual Cable earth() = 0;
    virtual ~EuropeanSocketInterface() = default;
};

class Socket: public EuropeanSocketInterface
{
public:
	int voltage() override { return 230; }
	Cable live() override { return 1; }
	Cable neutral() override { return -1; }
	Cable earth() override { return 0; }
};

class USASocketInterface
{
public:
	virtual int voltage() = 0;
	virtual Cable live() = 0;
	virtual Cable neutral() = 0;
	virtual ~USASocketInterface() = default;
};

class Adapter: public USASocketInterface
{
private:
	EuropeanSocketInterface* socket;
public:
    void plugIn(EuropeanSocketInterface* outlet)
    {
        socket = outlet;
    }

	int voltage() override { return 110; }
	Cable live() override { return socket->live(); }
	Cable neutral() override { return socket->neutral(); }
};

class ElectricKettle
{
private:
	USASocketInterface* power;
public:
	void plugIn(USASocketInterface* supply)
	{
		power = supply;
	}

	void boil()
	{
        if (power->voltage() > 110)
        {
            std::cout << "Kettle is on fire!" << std::endl;
            return;
        }

        if (power->live() == 1 && power->neutral() == -1)
        {
            std::cout << "Coffee time!" << std::endl;
        }
	}
};

/*
int main()
{
	Socket* socket = new Socket;
	Adapter* adapter = new Adapter;
	ElectricKettle* kettle = new ElectricKettle;

	adapter->plugIn(socket);
	kettle->plugIn(adapter);
	kettle->boil();

	delete socket;
	delete adapter;
	delete kettle;

	return 0;
}*/
