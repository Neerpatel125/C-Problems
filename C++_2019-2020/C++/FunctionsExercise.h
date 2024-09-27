/* 
Header file for excercise
*/

#include <iostream>
#include <cmath>
using namespace std;

double Add(double a, double b)
{
	double add;
	cout << "Instert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	add = a + b; 
	cout << a << " + " << b << " is " << add;
	return add;
}

double Subtract(double a, double b)
{
	double sub; 
	cout << "Instert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	sub = a - b; 
	cout << a << " - " << b << " is " << sub; 
	return sub; 
}

double Multiply(double a, double b)
{
	double mult;
	cout << "Instert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	mult = a*b;
	cout << a << " x " << b << " is " << mult; 
	return mult;
}

double Divide(double a, double b)
{
	double div;
	cout << "Instert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	div = a/b; 
	cout << a << "/" << b << " is " << div;
	return div; 
}

double Power(double a, double b)
{
	double p; 
	cout << "Instert the base: ";
	cin >> a;
	cout << "Insert the power: ";
	cin >> b;
	p = pow(a,b);
	cout << a << " to the " << b << " power is " << p;
	return p;
}

double SqaureRoot(double a)
{
	double sqr; 
	cout << "Instert the number: ";
	cin >> a;
	sqr = sqrt(a);
	cout << "Square root of " << a << " is " << sqr; 
	return sqr; 
}
