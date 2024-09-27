/*
	Sums 200 random numbers
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int numbers[200]; int a = 0; int b = 0; int c =0;  srand(time(0));
	cout << "The random numbers are:\n";
	for (a = 0; a < 200; a++)
		{
			numbers[a] = rand() % 11 ;
			cout << numbers[a]; 
			cout << " ";
		}
	double sum = 0;
	for (b = 0; b < 200; b++)
		{
			sum = sum + numbers[b];
		}
	cout << "\n\nThe sum of these random numbers is " << sum;
 return 0;
}

