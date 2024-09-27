/*
	Stream Manipulators For string Formating
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x =0;
	double y = 100;
	double ratio = 0;
	
	do
		{
			x++;
			y--;
			ratio = x/y;
			cout << left << setw(10) << x
				 << left << setw(10) << y
				 << left << setprecision(3) << ratio << endl;
		}
	while (x<100);
 return 0;
}

