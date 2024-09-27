
#include <winbgim.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Graph
{
	public:
		double CX, CY; // position of the center
		double Xmin, Xmax, Ymin, Ymax; // x and y ranges
		double SX,SY; // size of x and y
		int NDivX, NDivY; // number of divisions
		char TitleX[100]; // X-axis title
		char TitleY[100]; // Y-axis title 
		
		
		double XX(double x);
		double YY(double y);
		void Draw_Axes();
		void Draw_Triangle(double x, double y, double h);
		void Draw_Gauss(double a, double u, double sig);
		void Draw_Graph(double xpos[], double ypos[], double npos);
		void Draw_Chi(double xpos[], double ypos[], double as, double am, double bs, double bm, double n);
		
};
	


double Graph::XX(double x)
{
	 //return (x-Xmin)*getmaxx()/(Xmax-Xmin) + CX; 	
	 return (x-Xmin)* SX/(Xmax-Xmin) + CX;	
}


double Graph::YY(double y)
{
	//return getmaxy() - (y - Ymin)* getmaxy()/(Ymax-Ymin) - CY;	
	return getmaxy() - (y - Ymin) * SY/(Ymax-Ymin) - CY;
}


void Graph::Draw_Axes()
{
	outtextxy(CX+ SX/2, getmaxy() - CY + 30, TitleX); // x-axis title
	settextstyle(0,VERT_DIR,1);
	outtextxy(CX- 40, getmaxy() - CY - SY/2, TitleY); // y-axis title
	settextstyle(0,HORIZ_DIR,1);
	
	line(CX, getmaxy() - CY, CX + SX, getmaxy() - CY); // x-axis
	line(CX , getmaxy() - CY, CX, getmaxy() - CY- SY); // y-axis
	
	double lx = (Xmax-Xmin)/NDivX; 
	double x,y;
	double ly = (Ymax - Ymin)/NDivY;
	char strx[10000]; char stry [10000];
	for ( x = Xmin; x <= Xmax; x = x + lx)
		{
			line (XX(x), YY(-.05), XX(x), YY(.05));
			sprintf(strx, "%2.1f", x);
			outtextxy (XX(x), YY(-.07), strx); // print x-values
		}
	for ( y = Ymin; y <= Ymax; y = y + ly)
		{
			line (XX(-2), YY(y), XX(2), YY(y)); 
			sprintf(stry, "%2.1f", y);
			outtextxy (XX(-8), YY(y), stry); // print y-values
		}
}

void Graph::Draw_Triangle(double x, double y, double h)
{
	double a = (h/sqrt(3)) * 2;
	double hf = YY(y + h - ( a/2/sqrt(3))) - YY( y - (a/2/sqrt(3)));
	double af = (hf/sqrt(3)) * 2;
	line (XX(x) - af/2 , YY(y - (a/2/sqrt(3))), XX(x) + (af/2), YY( y - (a/2/sqrt(3))) );
	line (XX(x) - af/2, YY(y - (a/2/sqrt(3))) , XX(x), YY( y + h - (a/2/sqrt(3))));
	line (XX(x) + af/2, YY(y - (a/2/sqrt(3))) , XX(x), YY( y + h - (a/2/sqrt(3))));
}

void Graph::Draw_Gauss(double a, double u, double sig)
{
	double x; double f;
	for (x = Xmin; x <= Xmax; x = x + .1)
		{
			f = a*exp(-1 *((pow((x - u), 2)/(2*pow(sig,2)))));
			//circle (XX(x) , YY(f), 2 );
			Draw_Triangle(x, f, .03);
		}	
}

void Graph::Draw_Graph(double xpos[], double ypos[], double npos)
{
	int i; 
	for (i = 0; i < npos; i++)
		{
			circle(XX(xpos[i]), YY(ypos[i]), 2); 
			//Draw_Triangle(XX(xpos[i]), YY(ypos[i]), 2);
		}
} 
 
 

void Graph::Draw_Chi(double xpos[], double ypos[], double as, double am, double bs, double bm, double n) // determine ranges for a & b and incriment (a = .11 b = .026) (as = a min and am = a max)
{
	int i = 0; double chi; double lowest = 1000000; long double lowa = 0; long double lowb = 0; long double a,b; 
	cout << "A: " << endl << " a-min: " << as << endl << " a-max: " << am << endl << "B: " <<  endl << " b-min: " << bs << endl << " b-max: " << bm << endl;
	for (a = as; a < am; a = a + (am - as)/1000.0)
		{
				for (b = bs; b < bm ; b = b + (bm - bs)/1000.0)
					{
						chi = 0;
						for (i = 0; i < n; i++ )
							{
								chi = chi + pow(((ypos[i] - a - b*xpos[i])/.05), 2); // gets chi value
							}
						if (chi < lowest)
							{
								lowest = chi;
								lowa = a;
								lowb = b;
							}
					}
		}
	
	cout << "Best estimate b = " << lowb << endl << "Best estimate a = " << lowa << endl << "Lowest Chi = " << lowest << endl; 
	setcolor(1);
	i = 0;
	for (double gc = Xmin; gc < Xmax; gc = gc + .1)  // Draw the line for Chi (needs to be fixed)
		{
			circle(XX(gc), YY(lowb * gc + lowa), 2);
			i++;
		}

	
	// Uncertanties:
	a = 0; b = lowb; long double nchi; 
	for (a = lowa; a < am; a = a + (am - lowa)/1000.0){
		for (i = 0; i < n; i++ ){ // calculate new chi value with changing a 
			nchi = nchi + pow(((ypos[i] - a - b*xpos[i])/.05), 2); // gets chi value
		}
		cout << "New Chi (a changing): " << nchi << endl; 
		if (abs(nchi - lowest) <= 1){ // will never = 1
			cout << endl << "Uncertainty of a: " << a << endl << " Chi = " << nchi << endl; // stops when chi = 1 
			break; 
		}
		nchi = 0; 
	}
	nchi = 0; a = lowa; b = 0; 
	for ( b = lowb; b < bm; b = b + (bm - lowb)/1000.0){
		for (i = 0; i < n; i++ ){ // calculate new chi value with changing b 
			nchi = nchi + pow(((ypos[i] - a - b*xpos[i])/.05), 2); // gets chi value
		}
		cout << "New Chi (b changing)" << nchi << endl; 
		if (abs(nchi - lowest) <= 1){ // will never = 1
			cout << endl << "Uncertainty of b: " << b << endl << " Chi = " << nchi << endl;  // stops when chi = 1
			break;
		}
		nchi = 0; 
	}
 	
}

