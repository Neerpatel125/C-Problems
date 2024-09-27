/*
	-> must include header file: <fstream> 
	-> to open a file for output, use: ofstream fileName("filename.txt", file_open_mode);
		-> FileName is the name of the object created fron ofstrean
		-> file_open_mode can be:
			-> ios::out -> creates a new file, deletes all data and writes in it 
			-> ios::app -> doesn't discard existing data, adds to the end
	-> To write in the file
		-> example: myFile << "text wanted in the file..." << endl;
		-> example: myFile.close(); -> closes the file, and empties the space 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream test("test.txt", ios::out); // opens file
	if(!test) // checks if file is really created or opened
		{
			cout << "File could not be opened!" << endl;
			exit(1);
		}
	test << "Yes" << endl;
	test.close();
 return 0;
}

