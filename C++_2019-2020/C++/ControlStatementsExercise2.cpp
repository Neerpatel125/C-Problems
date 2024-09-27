/* 
	Converts uppercase/lowercase
*/

#include <iostream>
using namespace std;

int main()
{
	int c,b; b=0;
	char a;
	do
	{
		cout<< "\nEnter a character: ";
		start;
		cin >> a; 
		if(a >= 65 && a <= 90)
			{
				cout << "\nThe lower case letter is "; 
				a= a +  32;
				cout << a;
				b = b +1;
			}
		else if ( a >= 97 && a <= 122)
			{
				cout << "\nThe upper case letter is "; 
				a= a - 32; 
				cout << a;
				b = b+1;
			}
		else if ( a == 0)
			{
				break;
			}
		else if (a != 48)
			{
				cout << "\nPlease enter a character ";
				goto start; 
			}
	}
	while (a >= 65 && a <= 122);	
	cout << "\nNumber of conversions was " << b; 
return 0;
}

