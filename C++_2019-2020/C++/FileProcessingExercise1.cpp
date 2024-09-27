/*
	Writes user info into the file
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream exercise1("exercise1.txt", ios::out); // opens file
	if(!exercise1) // checks if file is really created or opened
		{
			cout << "File could not be opened!" << endl;
			exit(1);
		}
	string a; string b; string c; string d; string e;
	cout << "Pleaser enter you first and last name:\n";
	cin >> a; cin >> b;
	exercise1 << a << " " << b << endl;
	cout << "\nPlease enter your school name:\n";
	cin >> c; cin >> d; cin >> e;
	exercise1 << c << " " << d << " "<< e << endl;
	exercise1.close();

 return 0;
}

