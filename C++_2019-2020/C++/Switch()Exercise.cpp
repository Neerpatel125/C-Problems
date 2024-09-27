/* 
	switch() exercise
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Welcome to the vending machine! \n Press 1 for Coke. \n Press 2 for Arizona Iced Tea. \n Press 3 for Sprite. \n Press 4 for Fanta. \n Press 5 for water.\n";
	cin >> a;
	switch (a)
		{
			case (1):
				cout << "\n You have recieved a Coke can";
				break;
			case (2):
				cout << "\n You have recieved an Arizona Iced Tea can";
				break;
			case (3):
				cout << "\n You have recieved a Sprite can";
				break;
			case (4):
				cout << "\n You have recieved a Fanta can";
				break;
			case (5):
				cout << "\n You have recieved a water bottle";
				break;
			default:
				cout << "Please select something from the vending machine next time.";
				
		}

	return 0;
}

