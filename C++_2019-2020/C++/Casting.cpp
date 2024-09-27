/*  
OPERATORS:
&& = And  || = OR ! = Not -> Ex: if(!(c > d) 
Casting = forcing a number to change its data type --> Ex: cout << (double) 1/2 << endl; --> outputs .5 because it is a double
Casting must include the "()"
*/ 



#include <iostream>
using namespace std;

int main() 
{
	cout << " Without Double: " << 1/2;
	cout << "\n With Double: " << (double) 1/2; 
	return 0; 
}
