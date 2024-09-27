#include <iostream>
#include <cmath>
#include "mygraph.h" 

using namespace std;

int main() 
{ 
initwindow(500,500);
Graph mygraph;
mygraph.CX=50;
mygraph.CY=50;
mygraph.SX=400; 
mygraph.SY=400;
mygraph.Xmin=0;
mygraph.Xmax=100;
mygraph.Ymin=0;
mygraph.Ymax=3;
mygraph.NDivX=10; 
mygraph.NDivY=10;
strcpy(mygraph.TitleX, "X-axis"); 
strcpy (mygraph.TitleY, "Y-axis"); 
double xpos[] = {10,20,30,40,50,60,70,80,90 };
double ypos[] = {.37, .58, .83, 1.15, 1.36, 1.62, 1.9, 2.18, 2.45 }; 


mygraph.Draw_Axes();
mygraph.Draw_Graph(xpos, ypos, 9); 
mygraph.Draw_Chi(xpos, ypos,  0, .15, 0, .04, 9); 
//mygraph.Draw_Gauss(2.5,50,10);  
//mygraph.Draw_Triangle(50,1.5,1);
getch(); 
return 0;
} 
