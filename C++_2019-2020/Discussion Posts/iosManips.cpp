#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	for (int i = 0; i <= 20; i++){
		cout.setf(ios::dec);
		if (i < 10)
			cout << i << setw(4) << "| ";
		else 
			cout << i << setw(3) << "| ";
		cout.unsetf(ios::dec);
		cout.setf(ios::oct);
		cout << std::oct << i << setw(3) << "| ";
		cout.unsetf(ios::oct);
		cout.setf(ios::hex);
		cout << i << endl;
	}
	return 1; 
}