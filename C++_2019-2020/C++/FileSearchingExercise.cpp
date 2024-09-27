/*
	Searches through the student data file from the previous exercise2.txt
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "Would you like to read or write on the student data file? Press 1 for reading, press 2 for writing.\n";
	int k = 0; int i=0; 
	cin >> k;
	switch (k)
	{
		case (1):
			{
				string file;
				ifstream exercise2("exercise2.txt",ios::in);
				string sfn[100]; string sln[100]; string ssn1[100]; string ssn2[100]; string ssn3[100]; string sID[100]; string sfinal[100];
				while (!exercise2.eof())
					{
						exercise2 >> sfn[i] >> sln[i] >> ssn1[i] >> ssn2[i] >> ssn3[i] >> sID[i] >> sfinal[i]; 
						i++;
					}
				cout << "Enter the first name of the student you are seeking:\n"; string sn;
				cin >> sn;
				cout << "Enter the last name of the student you are seeking:\n"; string sn2;
				cin >> sn2;
				for (i =0; i < 100; i++)
					{
						if (sn == sfn[i] && sn2 == sln[i])
							{
								cout << sfn[i] << " " << sln[i] << " " << ssn1[i] << " " << ssn2[i] << " " << ssn3[i] << " " << sID[i] << " " << sfinal[i] << endl; 
							}
					}
				exercise2.close();
				break;
			}
		case (2):
				{
					cout << "Please enter a classroom number (1-3):\n";
					int classroom = 0; cin >> classroom;
					
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
							break;
						}
							default:
								{
									cout << "";
								}
				
			}	

		
 return 0;
}

