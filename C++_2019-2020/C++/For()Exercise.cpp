/*
for() exercise with mutliple variables
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	 double a, x, y;
	for (x=0, y=10; x <= 10, y >= 0; x++, y--)
		{
			a = a + pow(x,3)/(pow (y,2)+1);
		}
	cout <<  a;

 return 0;
}

