
#include <iostream>
using namespace std;

int main()
{	
	long unsigned int a = 0; long double b = 0;
	do 
		{
			cout << a << " ";
			b= b+1;
			a = b;
		}
	while (a = b);
		
	return 0;
}
