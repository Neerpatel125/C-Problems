/*
	-> 2 Dimensional Arrays
		-> row-column matrix; first index = row; Second index = column 
			-> Row = y-axis; Column = x-axis
	-> 3+ dimensional array. 
		-> Just adds another array onto it (like adding another plane)
	-> Array dimensions are just added distinctions. Ex: Student's grades = 1d -> Students' Grades = 2D -> Students' Grades from multiple schools = 3D
	-> DON'T FORGET SEMICOLON AFTER CREATING ARRAY
*/

#include <iostream>
using namespace std;
int main()
{
	string students[] = {"Robin", "Arthur", "Cinderella", "Snow White"};
	int grades[4][5]= { 
			88, 93, 55, 75, 99,
			93, 89, 95, 75, 88, 
			25, 33, 95, 75, 42, 
			75, 78, 81, 71, 92		
		};
		int a=0; int b=0; double final;
		for ( a = 0; a < 4; a++)
			{
				final = 0;
				final = (grades[a][0] + grades[a][1])/2 *.2 + (grades[a][2]+grades[a][3])/2 *.1 + grades[a][4]*.7;
				cout << students[a] << "'s final grade is: " << final << endl;			
			}
	
 return 0;
}

