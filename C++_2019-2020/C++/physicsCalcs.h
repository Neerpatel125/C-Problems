/* 
Header File for the main code
*/

#include <iostream>
#include <math.h>
using namespace std;

double rK() 
{
	double a = 0; double c = 0; double y = 0; double k = 0; double m = 0; double v = 0; double classic = 0;
	m = .001; 
	c = 3E8;
	for (a = .01; a <= 0.9; a = a + .01)
		{
			v = a*c;
			y = (1)/(sqrt(1-(pow(v, 2)/pow(c, 2))));
			k = m*pow(c,2)*(y-1);
			classic = .5 * m * pow(v,2);
			if (classic/k > 0.9)
				{	
					cout << v/c << "          ||          " << k << "          ||          " << classic << "          ||          Classical is sufficient.\n";
				}
			else 
				{
					cout << v/c << "          ||          " << k << "          ||          " << classic << "          ||          Relativistic is required.\n";
				}
		}
	return 0; 
}

double rM()
{
	double a = 0; double c = 0; double y = 0; double mom = 0; double m = 0; double v = 0; double classic = 0;
	m = .001; 
	c = 3E8;
	for (a = .01; a <= 0.9; a = a + .01)
		{
			v = a*c;
			y = (1)/(sqrt(1-(pow(v, 2)/pow(c, 2))));
			mom = y*m*v;
			classic = m*v;
			if (classic/mom > 0.9)
				{
					cout << v/c << "          ||          " << mom << "          ||          " << classic << "          ||          Classical is sufficient.\n";
				}
			else 
				{
					cout << v/c << "          ||          " << mom << "          ||          " << classic << "          ||          Relativistic is required.\n";
				}
		}
	return 0; 
}



