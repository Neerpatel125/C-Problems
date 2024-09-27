/* prints out odd number
*/

#include <iostream>
using namespace std;

int main()
{
int x = 0;

do 
{
	x++;
	if (!(x%2)) continue;	
	cout << x << "\n";	
}
	while (x < 100);	
	return 0;
}

