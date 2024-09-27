/*
Calculates the income of five employees
*/

#include <iostream>
using namespace std;

int main()
{
	double hours, payrate, taxrate, overtimehours, gre, goe, taxwitheld, tne;
	int emp;
	int n=0;
	int m=0;
	for (emp = 0; emp < 5; emp++)
		{
	 
	cout << "\n \n How many hours did you work this week? ";

	cin >> hours;


	cout << "\n What is your hourly pay rate? ";

	cin >> payrate;
		

	cout << "\n What is your tax rate? (Please insert this as a decimal number and not a percentage). ";

	cin >> taxrate;



	if (hours > 40)

		{
			
			overtimehours = hours - 40; 

			gre = payrate*hours;

			goe = overtimehours*(1.5*payrate);

			taxwitheld = (goe + gre)*taxrate;

			tne = gre + goe - taxwitheld;
			
			cout << "\n Normal Hours = 40";

		}

	else 

		{

			hours = hours;

			overtimehours = 0;

			gre = hours*payrate;

			goe = 0;

			taxwitheld = gre*taxrate;

			tne = gre - taxwitheld;
			
			cout << "\n Normal hours = ";
            cout << hours;

		}

	
	cout << "\n Overtimehours = ";
	cout << overtimehours;
	cout << "\n Gross Regular Earnings = ";
	cout << gre;
	cout << "\n Gross Overtime Earnings = ";
	cout << goe;
	cout << "\n Taxwitheld = ";
	cout << taxwitheld;
	cout << "\n Total Net Earnings = ";
	cout << tne;
		}

	
	return 0;
}
