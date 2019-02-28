#include <stdio.h>

/*
// A normal function with an int parameter and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	//void (*fun_ptr)(int) = &fun;
	void (*fun_ptr)(int) = fun;

	// Invoking fun() using fun_ptr
	//(*fun_ptr)(10);
	fun_ptr(10);
	return 0;
}*/

// A simple C program to show function pointers as parameter
// Two simple functions
/*
static void fun1() { printf("Fun1\n"); }
static void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
	(*fun)();
}

int main()
{
	void (*ptr)() = fun1;
	wrapper(ptr);
	wrapper(fun2);
	return 0;
}*/





