/*
	Generate 20 random numbers
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int numbers[20]; int a =0; int b = 0; srand(time(0));
	
	for (a=0; a < 20; a++)
		{
			numbers[a] = rand()%11;
		}
	for (b=0; b <= 20; b++)
		{
			cout << numbers[b];
			cout << " ";
		}

 return 0;
}

