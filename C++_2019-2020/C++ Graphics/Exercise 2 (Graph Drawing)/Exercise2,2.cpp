#include "Exercise2,2.h"
#include "winbgim.h"
#include <iostream>
using namespace std;
 
int main() 
{
	
	int x; int y; int lx; int ly; int tx; int ty; int h; double a; double u; double sig; int windowx; int windowy; int i; int count; 
/*	
	cout << "Enter the origin of the axis (x):\n";
	cin >> x;
	cout << "Enter the origin of the axis (y):\n";
	cin >> y;
	cout << "Enter the desired x-axis length:\n";
	cin >> lx;
	cout << "Enter the desired y-axis length:\n";
	cin >> ly;
*/
	/*
	Paramaters for Draw_Triangle
	cout << "Enter the origin of the trianlge (x):\n"; 
	cin >> tx;
	cout << "Enter the origin of the triangle (y):\n";
	cin >> ty;
	cout << "Enter the height of the triangle: \n";
	cin >> h; 
	*/
	
	/*
	Paramaters for Draw_Gaussian
	cout << "Enter A:\n";
	cin >> a; 
	cout << "Enter mu:\n";
	cin >> u;
	cout << "Enter sigma:\n";
	cin >> sig;
	*/
	
	int xpos[] = {10,20,30,40,50,60,70,80,90};
	double ypos[] = {.37,.58,.83,1.15,1.36,1.62,1.90,2.18,2.45};
	
	// Paramaters for Draw_Graph
/*	cout << "Enter the number of x-values you want to enter: \n";
	cin >> i; 
	int xpos[i]; int ypos[i];
	for (count = 0; count < i; count ++ )
		{
			cout << "Enter x-value(s): \n";
			cin >> xpos[count];
			cout << "Enter the corresponding y-value:\n";
			cin >> ypos[count];
		}
	cout << "Enter window size (x): \n";
	cin >> windowx;
	cout << "Enter window size (y): \n";
	cin >> windowy; */
	initwindow(500,500);
	setbkcolor(1); // set background color
	cleardevice(); // clear screen
	setcolor(14); // set drawing color
	Draw_Axes(0,0,300,300);
	//Draw_Triangle (tx,ty,h);
	//Draw_Gaussian(a,u,sig);
	Draw_Graph (xpos,ypos,9);
	getch(); // keeps the drawing program open 
	return 0;
	
}
