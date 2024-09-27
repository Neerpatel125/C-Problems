/*
Header File:
Draw_Axes(int x1, int y1, int x2, int y2)
{
	setbkcolor(1); // set background color 
	cleardevice(); // clear screen
	setcolor(14); // set drawing color
	outtextxy(x2/2,y2,"x");
	outtextxy(x1,y2/2,"y");  
	line (x1,y1,x2,y1);
	line (x1,y1,x1/,y2);
	getch(); 
	return 0; 
}
*/

#include "axes.h"
#include <winbgim.h>
#include <iostream>
using namespace std;

int main()
{
	 
	int x1; int y1; int x2; int y2; int sizex; int sizey;
	
	cout << "Enter the desired center x-coordinate:\n";
	cin >> x1;
	cout << "Enter the desired center y-coordinate:\n";
	cin >> y1;
	
	cout << "Enter the desired x-axis length:\n";
	cin >> x2;
	cout << "Enter the desired y-axis length:\n";
	cin >> y2;
	
	cout << "Enter the window size (x):\n";
	cin >> sizex;
	cout << "Enter the window size (y):\n";
	cin >> sizey;
	
	initwindow(sizex,sizey); // init graphics window with size 300x300
	setbkcolor(1); // set background color 
	cleardevice(); // clear screen
	setcolor(14); // set drawing color
	Draw_Axes(x1,y1,x2,y2);
	return 0;
	
}
