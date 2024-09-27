/*
 Functions 
*/

#include <iostream>
#include "Functions.h"
using namespace std; 


int main()
{
	double volume;
	cout << "Insert length: ";
	double l; cin >> l;
	cout << "Insert Width: ";
	double w; cin >> w;
	cout << "Insert Height: ";
	double h; cin >> h;
	
	volume = CalcVolume (l, w, h);
	return 0;
}
