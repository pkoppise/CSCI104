/*
 * facade.cpp
 *
 *  Created on: 31-Aug-2019
 *      Author: 503129832
 */

#include <iostream>
#include <string>

using namespace std;

class USB
{
public:
	bool is_available() { return false; }
	void connect() { cout << "Connecting to USB" << endl;}
	void send(const string &file)
	{
		cout << "Sending the file;" << file << " to USB" << endl;
	}
};

class Bluetooth
{
public:
	bool is_available() { return true; }
	void connect() { cout << "Connecting to Bluetooth" << endl;}
	void authenticate() { cout << "Authenticating device" << endl;}
	void send(const string &file)
	{
		cout << "Sending the file: " << file << " to Bluetooth" << endl;
	}
};

// The Facade
class FileTransfer {
public:
    void sendFile(string fileName)
    {
        USB* u = new USB();
        Bluetooth* b = new Bluetooth();
        if ( u->is_available() ) {
            u->connect();
            u->send(fileName);
        } else if ( b->is_available() ) {
            b->connect();
            b->authenticate();
            b->send(fileName);
        } else {
            cout << "Not sent" << endl;
        }
        delete b;
        delete u;
    }
};

/*
int main()
{
	FileTransfer* f = new FileTransfer();
	f->sendFile("Hello");

	return 0;
}*/

