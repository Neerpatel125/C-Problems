/*
	creates searchFile
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a=0; string b; string c;
	fstream searchFile("searchFile.txt", ios::in | ios::app);
	while (a == 0)
		{
			cout << "Please enter the student's name:\n";
			cin >> b;
			searchFile >> b;
			cout << "Please enter the student's grade:\n";
			cin >> c;
			searchFile >> c;
			cout << "If you'd like to exit the program now, enter 1, to continue, enter 0";
			cin >> a;
		}

 return 0;
}

