/*
Making our own Header File
*/

#include <iostream>
using namespace std;

double CalcVolume (double width, double length, double height)
{
	double volume; 
	volume = length * width * height;
	cout << "The volume is: " << volume;
	return volume;
}
