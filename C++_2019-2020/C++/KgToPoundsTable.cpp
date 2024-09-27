/*  
Kilogram to Pounds table
*/
#include <iostream>
using namespace std; 

int main()
{
	cout << "Kilogram to Pounds table:";
	int table;
	for (table = 0; table < 100; table++) 
		{
			double kg, lb; 
			kg = kg + 1;
			if (table % 10 == 0)
				{
					cout << "\n \n";
				}
			lb = 2.2046*kg;
			cout << "\n Kilograms = ";
			cout << kg;
			cout << "  Pounds = ";
			cout << lb;
		}
	
	return 0;
}

	
