

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a,b,c,x,n = 0;
	cout << "What is e being raised to? "; cin >> x;
	
	for (n = 0; n <= 100; n++)
		{	
			
				c = 1;
				for (b = n ; b >= 1; b--)
					{
						c = c * b;	
					}
		
			a = a + pow(x,n)/c;
			cout << "e^x = " << a << endl;
		}
	
 return 0;
}

