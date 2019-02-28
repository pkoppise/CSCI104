int i = 7;  // i: lvalue (memor allocated and address is there for that memory)
int *pi = &i;  // i is addressable
i = 10;  // we can modify it

class cat {};
cat c;   // c is an lvalue for a user defined type

//====================================================================================
// rvalue examples
int i = 7;  // i: lvalue but 7 is rvalue

int k = i+3;  // (i+3) is an rvalue 
int *pi = &(i + 3); // error, it's not addressable
i + 3 = 10;   // error - cannot assign a value to it
3 = i;        // error - not assignable

class cat {};
c = cat();   // cat() is an rvalue

int sum(int x, int y) { return x+y; }
int p = sum(3,4)

//rvalues: 7, i+3, cat(), sum(3,4)
//lvalues: i, k, pi, c, p
//=========================================================================================

int i = 5;
int &r = i; //&r is an r-value bcoz we cannot assign anything to it.

int &r = 5; //error
const int &r = 10; //special case where r value can be assigned.

int  square(int& x) { return x*x; };
square(i) -->OK
sqaure(10) -->not ok since &x is rvalue.

int  square(const int& x);
square(i);  --->OK
square(10);  --->OK
//============================================================================================

l used to create r

int i = 1;
int x = i+2

int x = i; i is implicitly converted to r value but not the other way around

r used to create l
int v[3];
*(v+2) = 10; // v+2 is r value
//============================================================================================

Mis conecptions about l and r values:
---------------------------------------
