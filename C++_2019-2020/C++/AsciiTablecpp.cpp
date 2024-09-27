/* 
Ascii Table
*/

#include <iostream>
using namespace std;

int main()
{
	short int a = 0; int b = 0; long double c = 0;
	cout << "\n Ascii Table:"; 
	unsigned char table = 0; a = 0; b = 0; c = 0;
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

