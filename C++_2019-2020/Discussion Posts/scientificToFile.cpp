#include <iostream>
#include <fstream>
using namespace std;


int main(){
	fstream myfile;
	myfile.open("Exercise.txt", ios::out);
	for (double i = 1; i <= 20; i ++){
		myfile.width(20);
		myfile.fill('-');
		myfile.setf(ios::scientific);
		myfile << 1/i << " ";
		myfile.unsetf(ios::scientific);
		myfile.precision(1);
		myfile.width(20);
		myfile.fill('-');
		myfile << 1/i << " ";
		myfile.precision(3);
		myfile.width(20);
		myfile.fill('-');
		myfile << 1/i;
		myfile << endl;
	}
	myfile.close();
	return 0;
}