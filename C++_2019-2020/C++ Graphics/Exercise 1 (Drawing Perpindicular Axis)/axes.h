
#include <winbgim.h>
#include <iostream>
using namespace std;



Draw_Axes(int x1, int y1, int x2, int y2)
{
	
	outtextxy((x1+x2)/2,y1,"x");
	outtextxy(x1,(y1+y2)/2,"y");  
	line (x1,y1,x1+x2,y1);
	line (x1,y1,x1,y1+y2);
	getch(); 
	return 0; 
}




