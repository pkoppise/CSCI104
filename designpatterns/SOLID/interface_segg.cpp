#include <iostream>
using namespace std;

class Document {};

/*
class IMachine
{
	virtual void print(Document &doc) = 0;
	virtual void scan(Document &doc)  = 0;
	virtual void  fax(Document &doc)  = 0;
};

class MFP:public IMachine
{
	void print(Document &doc) {} //OK
	void scan(Document &doc) {} //OK
	void fax(Document &doc) {} //OK
};

class Scanner:public IMachine
{
	void print(Document &doc) {} //NOT OK
	void scan(Document &doc)  {} //OK
	void fax(Document &doc)   {} //NOT OK
};*/

class IScanner
{
public:
	virtual void scan(Document &doc) = 0;
};

class Scanner:public IScanner
{
public:
	void scan(Document &doc)
	{
		cout << "Scanning the document is done" << endl;
	}
};

class IPrinter
{
public:
	virtual void print(Document &doc) = 0;
};

class Printer:public IPrinter
{
public:
	void print(Document &doc)
	{
		cout << "Printing the document is done" << endl;
	}
};

class IFaxer
{
public:
	virtual void fax(Document &doc) = 0;
};

class Fax:public IFaxer
{
public:
	void fax(Document &doc)
	{
		cout << "Fax of the document is done" << endl;
	}
};

class IMachine
{
public:
	virtual void ScanAndPrint(Document &doc) = 0;
};

class Machine:public IMachine
{
private:
	IScanner &scanner;
	IPrinter &printer;
public:
	Machine(IScanner &s, IPrinter &p):scanner(s),printer(p){}
	void ScanAndPrint(Document &doc)
	{
		cout << "--------" << endl;
		scanner.scan(doc);
        printer.print(doc);
	}
};


int main()
{
	Document d;

	IPrinter *p = new Printer;
	p->print(d);

	IScanner *s = new Scanner;
	s->scan(d);

	IFaxer *f = new Fax;
	f->fax(d);

	IMachine *m = new Machine(*s,*p);
	m->ScanAndPrint(d);

	return 0;
}