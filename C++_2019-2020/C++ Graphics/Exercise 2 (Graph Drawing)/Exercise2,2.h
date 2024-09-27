/*
	reference:
	outtextxy((x1+x2)/2,y1,"x");
	outtextxy(x1,(y1+y2)/2,"y");  
	line (x1,y1,x1+x2,y1);
	line (x1,y1,x1,y1+y2);
	getch(); 
	return 0; 
*/

#include <winbgim.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


XX(int x)
{
	 return x; 		
}


YY(int y)
{
	return getmaxy() - y;	
}


Draw_Axes(int x, int y, int lx, int ly )
{
	outtextxy((XX(x)+lx), YY(y+10), "x");
	outtextxy(XX(x), (YY(y)-ly), "y");
	line(XX(x), YY(y), XX(x+lx), YY(y)); // x-axis
	line(XX(x), YY(y), XX(x), YY(y+lx)); // y-axis
}

Draw_Triangle(int x, int y, int h)
{
	int a = h/sin(30);
	line (XX(x),YY(y),XX(x+a),YY(y+a));
	line (XX(x), YY(y), XX(x-a), YY(y+a));
	line (XX(x-a), YY(y+a), XX(x+a), YY(y+a));
}

Draw_Gaussian(double a, double u, double sig)
{
	double x; double f;
	for (x = 0; x <= getmaxx(); x++)
		{
			f = a*exp(-1 *((pow((x - u), 2)/(2*pow(sig,2)))));
			Draw_Triangle ( XX(x), f, 2 );
		}	
}

Draw_Graph(int xpos[], double ypos[], int npos)
{
	int i; 
	for (i = 0; i < npos; i++)
		{
			circle(XX(xpos[i]), YY(ypos[i] * 100), 2); 
		}
}

















