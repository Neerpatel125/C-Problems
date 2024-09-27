/* 
Arrays: To store larger amounts of data more effectively. Format: is int name [number of items in the array]; OR int name[] = {1.2.3.4};--> computer determines size, only usable if you will declare the numbers, can't use the for loop with it. 
Exercise
*/
#include <iostream>
using namespace std;

int main()
{
	string nameCheck; int pinCheck; 
	int a = 0; int b = 0; int c =0;
	cout << "To login, please enter your name and pin number.\nName:"; 
	cin >> nameCheck; 
	cout <<"\nPin: "; 
	cin >> pinCheck;
	
	string  name[5];
	name[0]= "Bob";
	name[1]= "Sam";
	name[2]= "Tom";
	name[3]= "George";
	name[4]= "Neer";
	
	int pin[5];
	pin[0] = 1111;
	pin[1] = 2222;
	pin[2] = 3333;
	pin[3] = 4444;
	pin[4] = 5555;
		
	for (a = 0; a < 5; a++)
		{
			if (nameCheck == name[a] && pinCheck == pin[a])
				{
					cout << "Login Authorized.";
					return 0;
				}
			else 
				{
					continue;
				}
		}
	cout << "Entered an invalid username and/or pin number.";
	
 return 0;
}

