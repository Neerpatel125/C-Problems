
#include <iostream>
using namespace std;

int main()
{	
	double hours, payrate, taxrate, overtimehours, gre, goe, taxwitheld, tne;
	cout << "How many hours did you work this week? ";
	cin >> hours;
	cout << "What is your hourly pay rate? ";
	cin >> payrate;
	cout << "What is your tax rate? ";
	cin >> taxrate;
	
	if (hours > 40)
		{
			hours = 40;
			overtimehours = (hours - 40); 
			gre = payrate*hours;
			goe = (overtimehours*(1.5*payrate));
			taxwitheld = (goe + gre)*taxrate;
			tne = (gre + goe - taxwitheld);
		}
	else
		{
			hours = hours;
			overtimehours = 0;
			gre = hours*payrate;
			goe = 0;
			taxwitheld = gre*taxrat;
			tne = gre - taxwitheld
		}
	
	cout << "Normal hours = ", hours;
	cout << 
}
