/*
	Name sorting in File
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i =0; string a;
	fstream namesort;
	
	namesort.open("namesort.txt", ios::in | ios::out) ;
	for (i= 1; i <= 10; i++)
		{
			cout << "Please enter only the first name for person " << i << " in lowercased letters:" << endl; 
			cin >> a; 
			namesort >> a;
		}
	namesort.close();
	namesort.open ("namesort.txt", ios::in);
	i = 0;
	string fn[100];
	while (!namesort.eof())
		{
			namesort >> fn[i];  
			i++;
		}
	namesort.close();
	string sort;
	
		// lexicographically compare
 
	namesort.open ("namesort.txt", ios::out);
	
		for (i= 1; i <= 10; i++)
		{ 
			namesort << fn[i];
		} 
	namesort.close();
		

 return 0;
}

