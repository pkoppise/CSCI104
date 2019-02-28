// C program to demonstrate the use of calloc() and malloc()
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
   int *arr;

   // malloc() allocate the memory for 5 integers containing garbage values
   arr = (int *)malloc(5 * sizeof(int)); // 5*4bytes = 20 bytes

   for(int i = 0; i < 5; i++)
   {
	   cout << (arr + i) << " " << arr[i] << endl;
   }

   // Deallocates memory previously allocated by malloc() function
   free( arr );

   // calloc() allocate the memory for 5 integers and set 0 to all of them
   arr = (int *)calloc(5, sizeof(int));
   //arr = (int *)realloc(arr, 5 * sizeof(int));

   for(int i = 0; i < 5; i++)
   {
	   cout << (arr + i) << " " << *(arr + i) << endl;
   }

   // Deallocates memory previously allocated by calloc() function
   free(arr);

   //malloc + memset = calloc
   //ptr = malloc(size);
   //memset(ptr, 0, size);

   return(0);
}
