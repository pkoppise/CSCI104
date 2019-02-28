#include <iostream>
#include <stdexcept>
#include <cassert>
#include <string>

using namespace std;

/*
struct NumError {};
struct DenomError {};

int divide(int num, int denom)
{
   //assert(denom != 0); //next piece of code will not be executed
   if(denom == 0) { throw DenomError();}
   else if (num == 0) {
       //throw string("Num is 0...Bad!");
       //throw NumError();
	   throw std::invalid_argument("Invalid number given");
   }
   cout << "Normal case" << endl;
   return(num/denom);
}

int f1(int x)
{
    int res = -1;
	res = divide(x, x-2);
	return res;
}

int main()
{
   int res = -1, a;
   cout << "Enter: " << endl;
   cin >> a;
   while(true)
   {
	   try
	   {
		   res = f1(a);
	   }
	   catch(string& error)
	   {
		   cout << error << endl;    //------>primitive types
		   cin >> a;
	   }
	   catch(NumError& a)
	   {
		   cout << "Num is zero" << endl;

	   }
	   catch(DenomError& b)
	   {
		   cout << "Denom is zero" << endl;

	   }
	   catch(std::invalid_argument& ia)
	   {
		   cout << ia.what() << endl;
	   }
   }

   cout << res << endl;
   return 0;
}*/
