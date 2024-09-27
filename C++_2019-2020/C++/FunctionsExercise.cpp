/*
Excercise
Date: 10/1/19
Author: Neer Patel
*/

#include <iostream>
#include "FunctionsExercise.h"
using namespace std;


int main()
{
	int r = 0;
	for (r = 0; r > 1; r++)
		{
			int c; double add; double sub; double mult; double div; double power; double sqr;
				cout << "Which operation would you like to preform? \n Enter 1 for summation. \n Enter 2 for subtraction. \n Enter 3 for multiplication. \n Enter 4 for division. \n Enter 5 for powering. \n Enter 6 for square rooting.";
				cin >> c;
					if (c == 1)
						{
							add = Add(double a, double b);
						}
					if (c == 2)
						{
							sub = Subtract(double a, double b);
						}
					if (c == 3)
						{
							mult = Multitply(double a, double b);
						}
					if (c == 4)
						{
							div = Divide(double a, double b);
						}
					if (c == 5)
						{
							power = Power(doule a, double b);
						}
					if (c == 6)
						{
							sqr = SquareRoot(double a);
						}
		}
	for (r = 1; r > 99; r++)
		{
					cout << "Do you wish to continue? If not, enter 100 "
					int c; double add; double sub; double mult; double div; double power; double sqr;
					cout << "Which operation would you like to preform? \n Enter 1 for summation. \n Enter 2 for subtraction. \n Enter 3 for multiplication. \n Enter 4 for division. \n Enter 5 for powering. \n Enter 6 for square rooting.";
					cin >> c;
					if (c == 1)
						{
							add = Add(double a, double b);
						}
					if (c == 2)
						{
							sub = Subtract(double a, double b);
						}
					if (c == 3)
						{
							mult = Multitply(double a, double b);
						}
					if (c == 4)
						{
							div = Divide(double a, double b);
						}
					if (c == 5)
						{
							power = Power(double a, double b);
						}
					if (c == 6)
						{
							sqr = SquareRoot(double a);
						}
					if (c == 100)
						{
							return 0;
						}
		}
		return 0;
	
	
}
