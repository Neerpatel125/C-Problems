/*
	Added classrooms with different information
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
				fstream classroom1("classroom1.txt",ios::in);
				string sfn[100]; string sln[100]; string ssn1[100]; string ssn2[100]; string ssn3[100]; string sID[100]; string sfinal[100];
				while (!classroom1.eof())
					{
						classroom1 >> sfn[i] >> sln[i] >> ssn1[i] >> ssn2[i] >> ssn3[i] >> sID[i] >> sfinal[i]; 
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
								classroom1.close();
							}
						else
						{
						  
							{
								string sfn2[100]; string sln2[100]; string ssn12[100]; string ssn22[100]; string ssn32[100]; string sID2[100]; string sfinal2[100];
								fstream classroom2("classroom2.txt",ios::in);
								i =0; 
								while (!classroom2.eof())
									{
										classroom2 >> sfn2[i] >> sln2[i] >> ssn12[i] >> ssn22[i] >> ssn32[i] >> sID2[i] >> sfinal2[i]; 
										i++;
									}
								for (i =0; i < 100; i++)
										{
											if (sn == sfn2[i] && sn2 == sln2[i])
											{
												cout << sfn2[i] << " " << sln2[i] << " " << ssn12[i] << " " << ssn22[i] << " " << ssn32[i] << " " << sID2[i] << " " << sfinal2[i] << endl; 
												classroom2.close();
											}
										}
							}	
						
							{
								string sfn3[100]; string sln3[100]; string ssn13[100]; string ssn23[100]; string ssn33[100]; string sID3[100]; string sfinal3[100];
								fstream classroom3("classroom3.txt", ios::in);
								i =0; 
								while (!classroom3.eof())
									{
										classroom3 >> sfn3[i] >> sln3[i] >> ssn13[i] >> ssn23[i] >> ssn33[i] >> sID3[i] >> sfinal3[i]; 
										i++;
									}
								for (i =0; i < 100; i++)
										{
											if (sn == sfn3[i] && sn2 == sln3[i])
											{
												cout << sfn3[i] << " " << sln3[i] << " " << ssn13[i] << " " << ssn23[i] << " " << ssn33[i] << " " << sID3[i] << " " << sfinal3[i] << endl; 
												classroom3.close();
											}
										}
							}
						}
					}
				break;
			}
		case (2):
				{
					cout << "Please enter a classroom number (1-3):\n";
					int classroom = 0; cin >> classroom;
					
					if (classroom == 1)
						{
							fstream classroom1("classroom1.txt", ios::app);
							int z = 0; 	string a; string b; string c; string d; string e; string f; string g;
							while (z == 0)
							{
							cout << "Pleaser enter you first and last name:\n";
							cin >> a; cin >> b;
							classroom1 << a << " "<< b << " " << endl;
							cout << "\nPlease enter your high school's name:\n";
							cin >> c; cin >> d; cin >> e;
							classroom1 << c << " " << d << " " << e << endl;
							cout << "\nPlease enter your school ID:\n";
							cin >> f; 
							classroom1 << f << " " << endl;
							cout << "\nPlease enter your final grade:\n";
							cin >> g;
							classroom1 << g << endl;
							cout << "If you want to continue in class 1, press 0, to quit, press 1:\n";
							cin >> z;
							}

							classroom1.close();	
							break;
						}
					if (classroom == 2)
						{
							fstream classroom2("classroom2.txt", ios::app);
							int z = 0; 	string a; string b; string c; string d; string e; string f; string g;
							while (z == 0)
							{
							cout << "Pleaser enter you first and last name:\n";
							cin >> a; cin >> b;
							classroom2 << a << " "<< b << " " << endl;
							cout << "\nPlease enter your high school's name (include high school to it):\n";
							cin >> c; cin >> d; cin >> e;
							classroom2 << c << " " << d << " " << e << endl;
							cout << "\nPlease enter your school ID:\n";
							cin >> f; 
							classroom2 << f << " " << endl;
							cout << "\nPlease enter your final grade:\n";
							cin >> g;
							classroom2 << g << endl;
							cout << "If you want to continue in class 2, press 0, to quit, press 1:\n";
							cin >> z;
							}

							classroom2.close();	
							break;
						}
					if (classroom == 3)
						{
							fstream classroom3("classroom3.txt", ios::app);
							int z = 0; 	string a; string b; string c; string d; string e; string f; string g;
							while (z == 0)
							{
							cout << "Pleaser enter you first and last name:\n";
							cin >> a; cin >> b;
							classroom3 << a << " "<< b << " " << endl;
							cout << "\nPlease enter your high school's name:\n";
							cin >> c; cin >> d; cin >> e;
							classroom3 << c << " " << d << " " << e << endl;
							cout << "\nPlease enter your school ID:\n";
							cin >> f; 
							classroom3 << f << " " << endl;
							cout << "\nPlease enter your final grade:\n";
							cin >> g;
							classroom3 << g << endl;
							cout << "If you want to continue in class 3, press 0, to quit, press 1:\n";
							cin >> z;
							}

							classroom3.close();	
							break;
						}

				}
							default:
								{
									cout << "";
								}
				
			}	

		
 return 0;
}



