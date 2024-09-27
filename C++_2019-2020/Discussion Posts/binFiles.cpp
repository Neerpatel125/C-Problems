#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream myfile;
	int x; int a = 1;
	cout << "Do you want to enter characters into the file (1) or read the file (2)?" << endl;
	cin >> x;

	switch(x){
		case(1):
			cout << "You are now writing into the file: " << endl;
			myfile.open("Example.bin", ios::app | ios::binary);
			while(a == 1){
				char p;
				cin >> p;
				myfile.put(p);
				cout << "Continue (1) or exit (2)? ";
				cin >> a;
			}
			myfile.close();
			break;
		case(2):	
			cout << "You are now reading the file: " << endl;
			myfile.open("Example.bin", ios::in | ios::binary);
			while (myfile){
				char c;
				myfile.get(c);
				cout << c;
			}
			myfile.close();
			break;
		default:
			cout << "Please enter one of the options" << endl;
			myfile.close();
	}
	return 0;
}