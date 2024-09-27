/*
	input and output (reading and writing data to and from a file) together
	can use: ios::in | ios::out or ios::in | ios::app 
		-> lets you read AND write on the file
	tellg() and tellp(p)
		-> g tells the current reading position of the file. p tells the current position of writing in the file
	seek(offset,dir) and seekp(offset,dir)
		-> Allow one the change the position of the get/put positions
		-> The dir options:
				ios::beg
					-> offset counted from beginning of the stream
				ios::cur
					-> offset counted from the current position
				ios::end
					-> offset counted from the end
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Would you like to read or write on the student data file? Press 1 for reading, press 2 for writing.\n";
	int k = 0; 
	cin >> k;
	switch (k)
		{
			case (1):
				{
					int l =0; 
					string file; 
					ifstream exercise2("exercise2.txt",ios::in); //ios::in reads the file.

	if(!exercise2)
			{
			cout << "File cannot be opened";
			exit(1);
			}
		while(!exercise2.eof()) // This indicates the end of the file, it's a boolean type that's true if the fie is ended fale if otherwise.
			{
			l++;
			exercise2 >> file;
			cout << file;
			if (l%1 == 0)
				{
					cout << " ";
				}
			if (l%7 == 0)
				{
					cout << "\n";
				}
			}
			exercise2.close(); 
			break;
				}
			case (2):
				{
					fstream exercise2("exercise2.txt", ios::app); // opens file
	if(!exercise2) // checks if file is really created or opened
		{
			cout << "File could not be opened!" << endl;
			exit(1);
		}
	int z = 0; 	string a; string b; string c; string d; string e; string f; string g;
	while (z == 0)
		{
				cout << "Pleaser enter you first and last name:\n";
				cin >> a; cin >> b;
				exercise2 << a << " "<< b << " " << endl;
				cout << "\nPlease enter your high school's name:\n";
				cin >> c; cin >> d; cin >> e;
				exercise2 << c << " " << d << " " << e << endl;
				cout << "\nPlease enter your school ID:\n";
				cin >> f; 
				exercise2 << f << " " << endl;
				cout << "\nPlease enter your final grade:\n";
				cin >> g;
				exercise2 << g << endl;
				cout << "If you want to continue, press 0, to quit, press 1:\n";
				cin >> z;
		}

	exercise2.close();	
				}
			default:
				{
					cout << "";
				}
				
		}
		

 return 0;
}

