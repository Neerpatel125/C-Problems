/*
Excersise: Data Types and Operators
*/

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    // Short int max value: 
	short int a = 0; int b = 0; long double c = 0; double d = 0; // d will be used to convert a into bytes and output it
	for (c = 0; b == 0; c++)
		{
			a = c;
			if (a != c)
				{
					a = a - 1;
					b = 1;
					d = log(a)/log(2);
					cout << "\n The max value for a short int is " << a <<" (" << d << " bits)"; 
				}
		}
	// Short unsigned int max value: 
	short unsigned int e = 0; a = 0; b = 0; c = 0; d = 0;
	for (c = 0; b == 0; c++)
		{
			e = c;
			if (e != c)
				{
					e = e-1;
					b = 1;
					d = log(e)/log(2);
					cout << "\n The max value for a short unsigned int is " << e << " (" << d << " bits)"; 
				}
		}
	// Int max value:
	int f = 0; a = 0; b = 0; c = 0; d = 0;
	for (c = 0; b == 0; c++)
		{
			f = c; 
			if (f != c)
				{
					f = f - 1;
					b = 1;
					d = log(f)/log(2);
					cout << "\n The max value for an int is " << f << " (" << d << " bits)";  
				}
		}
	// Long int max value: 
	long int g = 0; a = 0; b = 0; c = 0; d = 0;
	for (c = 0; b == 0; c++)
		{
			g = c;
			if (g != c)
				{
					g = g - 1;
					b = 1;
					d = log(g)/log(2);
					cout << "\n The max value for a long int is " << g << " (" << d << " bits)";  
				}
		}
	// Printing Ascii Tabble:
	cout << "\n \n Ascii Table:"; 
	 unsigned char table = 0; a = 0; b = 0; c = 0; d = 0;
        for (c = 0; b == 0; c++)
            {
                table = c; 
                cout << table  << " ";
                if (table % 20 == 0)
                    {
                        cout << "\n";
                    }
                if ( table != c)
                    {
                        b = 1; 
                    }
            }
	
	return 0;
}
