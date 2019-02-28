#include <iostream>
#include <string.h>
using namespace std;

/*
void print(char* str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		printf("%c",str[i]);
		i++;
	}
	cout << endl;
}

void modifyString(char *c)
{
	*(c + 0) = 'C';
}

int main()
{
	char c[20];
	c[0] = 'J';
	c[1] = 'O';
	c[2] = 'H';
	c[3] = 'N';
	c[4] = '\0';
	//In case of int array c just prints address of first element
	cout << c << " " << strlen(c) << " " << sizeof(c) << endl;

	char d[6] = "HELLO";
	cout << d << " " << strlen(d) << " " << sizeof(d)<< endl;

	char e[6] = {'P','H','A','N','I','\0'};
	cout << e << " " << strlen(e) << " " << sizeof(e)<< endl;

	const char* str = "PHANINDRA";
	str = "CHANGED";
	cout << str << " " << strlen(str) << " " << sizeof(str) <<  endl;
	cout << str[3] << endl;
	cout << *(++str) << endl;

	cout << "---------------" << endl;

	char* str2 = d; // not a copy; just a pointer to first element of d
	cout << str2 << " " << strlen(str2) << " " << sizeof(str2) <<  endl;
	str2[0] = 'D';
	cout << str2 << " " << strlen(str2) << " " << sizeof(str2) <<  endl;
	cout << d << " " << strlen(d) << " " << sizeof(d)<< endl;

	print(e);
	modifyString(e);
	cout << e << " " << strlen(e) << " " << sizeof(e) <<  endl;

	return 0;
}*/
