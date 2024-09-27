/* 
Converts Kilograms to Pounds
*/

#include <iostream>
using namespace std;

int main()
{
	double kilograms, pounds; 
	string message1,message2;
	message1 = "Kilograms = ";
	cout << message1;
	cin >> kilograms; 
	pounds = 2.2046*kilograms;
	message2= "Pounds = ";
	cout << message2;
	cout << pounds;
	
	if (pounds > 200)
		{
			cout << " Whoa! You are too fat, lose some weight!";
		}
	return 0;
}

 

