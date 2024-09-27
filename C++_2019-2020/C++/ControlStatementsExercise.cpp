/* 
Control Statements:
Selection: if(), switch() -> switch statements end in break; and uses case (); and default(); It's an alternative to if statements, can be used to check an expressions value to a list of constants etc. Can only use int or char. Does not use blocks, can be nested. 
Iteration: for(), while (), do-while() --> basically for loop but checks the condition with while (); at the end of the first itteration.
Jump: break, continue, goto
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	double a = rand()%10 +1; double b = rand()%10 +1; int c; int ans;
	cout << "What is " << a << " multiplied by " << b << "?: ";
	cin >> c;
	ans = a*b;
	if (c == a*b)
		{
			cout << "\n Congratulations";
		}
	else 
		{
			cout << "\n Really?";
			if (c > a*b )
				{
					cout << " Too high,";
				} 
			else 
				{
					cout << " Too low,";	
				}
			if ( 0 <= ans && ans <= 10)
				{ 
					cout << " the answer is in the range of 0 and 10.";
				}
			else if ( 11 <= ans && ans <= 20)
				{
					cout << " the answer is in the range of 11 and 20.";
				}
			else if ( 21 <= ans && ans <= 30)
				{
					cout << " the answer is in the range of 21 and 30.";
				}
			else if ( 31 <= ans && ans <= 40)
				{
					cout << " the answer is in the range of 31 and 40.";
				}
			else if ( 41 <= ans && ans <= 50)
				{
					cout << " the answer is in the range of 41 and 50.";
				}
			else if ( 51 <= ans && ans <= 60)
				{
					cout << " the answer is in the range of 51 and 60.";
				}
			else if ( 61 <= ans && ans <= 70)
				{
					cout << " the answer is in the range of 61 and 70.";
				}
			else if ( 71 <= ans && ans <= 80)
				{
					cout << " the answer is in the range of 71 and 80.";
				}
			else if ( 81 <= ans && ans <= 90)
				{
					cout << " the answer is in the range of 81 and 90.";
				}
			else if ( 91 <= ans && ans <= 100)
				{
					cout << "  the answer in the range of 91 and 100.";
				}
		}
	return 0;
}
		
