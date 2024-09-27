

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	cout << "Hello and welcome to my five question game. None of the letters will be capitalized and they will all be one word answers with no spaces. Enjoy!\n ";
	int a = 0; 
	cout << "\nEinstein discovered that gravity is what?\n";
	char answer1[11] = "spacetime";
	char usera1[11]; 
	for (a=0; a < 10; a++)
		{
			cin >> usera1;
			if (strcmp(answer1,usera1) == 0)
				{
					cout << "Correct!\n";
					break; 
				}
				else if (a == 9)
				{
					cout << "\nThe answer is spacetime";
				}
			else 
				{
					cout << "Incorrect! Here's a hint.\n";
					cout << "\nOne of the letters is: " << answer1[a] << "\n";
				}
		}
	a = 0; 
	cout << "\nWhich coding language is the best?\n";
	char answer2[4] = "c++";
	char usera2[4]; 
	for (a=0; a < 3; a++)
		{
			cin >> usera2;
			if (strcmp(answer2,usera2) == 0)
				{
					cout << "Correct!\n";
					break; 
				}
							else if (a == 2)
				{
					cout << "\nThe answer is c++";
				}
			else 
				{
					cout << "Incorrect! Here's a hint.\n";
					cout << "\nOne of the letters is: " << answer2[a] << "\n";
				}
		}
	a = 0; 
	cout << "\nWhat is the name of the person who created this program?\n";
	char answer3[5] = "neer";
	char usera3[5]; 
	for (a=0; a < 4; a++)
		{
			cin >> usera3;
			if (strcmp(answer3,usera3) == 0)
				{
					cout << "Correct!\n";
					break; 
				}
							else if (a == 3)
				{
					cout << "\nThe answer is neer";
				}
			else 
				{
					cout << "Incorrect! Here's a hint.\n";
					cout << "\nOne of the letters is: " << answer3[a] << "\n";
				}
		}
	a = 0; 
	cout << "\nWhat is the opposite of opposite?\n";
	char answer4[5] = "same";
	char usera4[5]; 
	for (a=0; a < 4; a++)
		{
			cin >> usera4;
			if (strcmp(answer4,usera4) == 0)
				{
					cout << "Correct!\n";
					break; 
				}
						else if (a == 3)
				{
					cout << "\nThe answer is same";
				}
			else 
				{
					cout << "Incorrect! Here's a hint.\n";
					cout << "\nOne of the letters is: " << answer4[a] << "\n";
				}
		}
	a = 0; 
	cout << "\nWhat is the last name of the person who made this program?\n";
	char answer5[6] = "patel";
	char usera5[6]; 
	for (a=0; a < 5; a++)
		{
			cin >> usera5;
			if (strcmp(answer5,usera5) == 0)
				{
					cout << "Correct!\n";
					break; 
				}
								else if (a == 5)
				{
					cout << "\nThe answer is patel";
				}
			else 
				{
					cout << "Incorrect! Here's a hint.\n";
					cout << "\nOne of the letters is: " << answer5[a] << "\n";
				}
		}

 return 0;
}

