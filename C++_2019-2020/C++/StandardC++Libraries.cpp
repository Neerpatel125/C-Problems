/* 
C++ libraries
*/

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	double n; double sqr;
	cout << "Insert number: ";
	cin >> n;
	
	sqr = sqrt(n);
	cout << "The square root of " << n  << " is " << sqr;
	
	return 0;
}
