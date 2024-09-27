/*
Arrays Exercise, random numbers
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int numbers[200]; int a = 0; int b = 0; int c =0;  srand(time(0));
	for (a = 0; a < 200; a++)
		{
			numbers[a] = rand() % 11 ;
		}
	double av = 0;
	for (b = 0; b < 200; b++)
		{
			av = av + numbers[b];
		}
	av = av/200; 
	cout << "The random numbers generated are: \n";
	for (c = 0; c < 200; c++)
		{
			cout << numbers[c] << " "; 
		}	

	cout << "\n\nThe average of these random numbers is " << av; 

 return 0;
}

