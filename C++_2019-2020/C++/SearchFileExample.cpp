/*
	Search a file for a specific name
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string st_name;
	int strudent_grade[25];
	string strudent_name[25];
	int i =0;
	fstream searchFile("searchFile.txt", ios::in | ios::app );
	while(!searchFile.eof())
		{
			searchFile >> student_name[i] >> student [i];
			i++;
		}	
	cout << "Enter student's name you want to find:\n";
	cin >> st_name;
	for (int i =0; i < 25; i++)
		{
			if (st_name == student_name[i])
				{
					cout << student_name[i] << " " << student_grade[i] << endl; 
				}
		}		
 return 0;
}

