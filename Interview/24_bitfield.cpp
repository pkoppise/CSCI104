#include <iostream>
using namespace std;

int main()
{
	int number = 3;

	//set one bit(0-->1) --use bitwsie OR operator--0011(3)--> 0111(7)
    int bitPos = 2;
	number = number | (1<<bitPos);  // 0001 -->0100
	cout << number << endl;         //       | 0011 
	                                //         0111

	//unset one bit(1-->0) --use bitwise AND operator--0011(3)  --->0001(1)
	number = 3;
	bitPos = 1;
	number = number & ~(1<<bitPos); // 0001-->0010-->1101
	                                //             & 0011
		                            //               0001 
	cout << number << endl;


	//Toggle one bit (0->1 and 1->0) --use XOR operator--0011(3)  --->0010(2)
	number = 3;
	bitPos = 0;
	number = number ^ (1<<bitPos);  //              0011
	                                //          XOR 0001
		                            //              0010      
	cout << number << endl;

	//check a bit
	number = 3;
	bitPos = 2;
	int bitVal = (number>>bitPos) & 1;
	cout << bitVal << endl;

	//change a single bit 
	number = 3;
	bitPos = 2;
    bitVal = 1;
	number = number & ~(1<<bitPos) | (bitVal<<bitPos);
	cout << number << endl;


	return 0;
}