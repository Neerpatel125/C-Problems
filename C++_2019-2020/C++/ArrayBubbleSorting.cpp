/*
	Sorting Algorithims: 
	Quick sort
		-> C++ standard ibrary command qsort()
	The Shaker Sort, The Shell Sort, The bubble sort (one we will study). 
	Bubble Sort: 
		-> Compares [0] to [1] etc and keeps going
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int numbers[200]; int a =0; int b = 0; int c = 0; int d = 0; int e =0; srand(time(0));
	
	for (a=0; a < 200; a++)
		{ 
			numbers[a] = rand()%201;
		}
		
	cout << "The random numbers are:\n";
	
	for (b=0; b < 200; b++)
		{
			cout << numbers[b];
			cout << " ";
		}
		
	cout << "\nThe sorted random numbers are (least to greatest):\n";
	
	int sort;
	for (c=1; c < 200; c++)
		{
			for (d=200; d >= 1; d--)
				{
					if (numbers[d] < numbers[d-1])
						{
							sort = numbers[d];
							numbers[d] = numbers[d-1];
							numbers[d-1] = sort;
						}

				}
		}
	for (e=0; e < 200; e++)	
		{
			cout << numbers[e] << " ";
		}

		
 return 0;
}

