/*
	Reading Files:
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a =0; 
	string file; 
	ifstream exercise2("exercise2.txt",ios::in); //ios::in reads the file.
	if(!exercise2)
		{
			cout << "File cannot be opened";
			exit(1);
		}
	while(!exercise2.eof()) // This indicates the end of the file, it's a boolean type that's true if the fie is ended fale if otherwise.
		{
			a++;
			exercise2 >> file;
			cout << file;
			if (a%1 == 0)
				{
					cout << " ";
				}
			if (a%5 == 0)
				{
					cout << "\n";
				}
		}
	exercise2.close(); 
 return 0;
}

