/*
	Allows user to enter repeated entries into the text file
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream exercise2("exercise2.txt", ios::app); // opens file
	if(!exercise2) // checks if file is really created or opened
		{
			cout << "File could not be opened!" << endl;
			exit(1);
		}
	int z = 0; 	string a; string b; string c; string d; string e;
	while (z == 0)
		{
				cout << "Pleaser enter you first and last name:\n";
				cin >> a; cin >> b;
				exercise2 << a << " "<< b << " " << endl;
				cout << "\nPlease enter your school name:\n";
				cin >> c; cin >> d; cin >> e;
				exercise2 << c << " " << d << " " << e << endl;
				cout << "If you want to continue, press 0, to quit, press 1:\n";
				cin >> z;
		}

	exercise2.close();

 return 0;
}

