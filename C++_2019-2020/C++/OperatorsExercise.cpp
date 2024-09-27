/*
Operators Excersise
*/

#include <iostream>
using namespace std; 

int main ()
{
	int a = 0;
	for (a = 1; a <= 100 ; a++)
		{
			if (a%3 == 0 && a%5 ==0)
				{
					cout << a << " Can be divided by 3 and 5. \n";
				}
		}
	return 0;
}
