/*
	-> "const" variable type; locks the value of  the variable. Ex: const int x=4;
	This program made a function that will bubble sort an array of any size, and can be called in the main function.1
	
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

string bubble_sort(int size)
	{
	  
	int numbers[size]; int a =0; int b = 0; int c = 0; int d = 0; int e =0; srand(time(0));
	
	for (a=0; a < size; a++)
		{ 
			numbers[a] = rand()%201;
		}
		
	cout << "The random numbers are:\n";
	
	for (b=0; b < size; b++)
		{
			cout << numbers[b];
			cout << " ";
		}
		
	cout << "\nThe sorted random numbers are (least to greatest):\n";
	
	int sort;
	for (c=1; c < size; c++)
		{
			for (d=size; d >= 1; d--)
				{
					if (numbers[d] < numbers[d-1])
						{
							sort = numbers[d];
							numbers[d] = numbers[d-1];
							numbers[d-1] = sort;
						}

				}
		}
		for (e=0; e < size; e++)	
		{
			cout << numbers[e] << " ";
		}

	}
int main()
{
	cout << "Enter the size if the array: ";
	 int size;
	cin >> size; 
	bubble_sort(size); 
	
		
 return 0;
}
