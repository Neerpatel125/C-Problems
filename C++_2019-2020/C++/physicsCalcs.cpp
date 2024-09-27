/* 
The main file
*/

#include <iostream>
#include <cmath>
#include "physicsCalcs.h"
using namespace std;

int main()
{
	int num = 0; 
	cout << "Please enter your choice:\n1 for Reletavistic Energy.\n2 for Relatvistic Momentum,\n0 to quit.\n";
	cin >> num;
	switch (num)
		{
			case (1):
				cout << "Speed (v/c) || Relativistic Energy || Classical Energy || Message\n" << "-----------------------------------------------------------------\n";
				cout << rK();
				break;
			case (2):
				cout << "Speed (v/c) || Relativistic Energy || Classical Energy || Message\n" << "-----------------------------------------------------------------\n";
				cout << rM();
				break;
			case (0):
				return 0;	
			default:
				cout << "Please select one of the options next time.";		
		}

 return 0;
}

