#include <iostream>

using namespace std;

int main(){
	for (double i = 1; i <= 20; i ++){
		cout.width(20);
		cout.fill('-');
		cout.setf(ios::scientific);
		cout << 1/i << " ";
		cout.unsetf(ios::scientific);
		cout.precision(1);
		cout.width(20);
		cout.fill('-');
		cout << 1/i << " ";
		cout.precision(3);
		cout.width(20);
		cout.fill('-');
		cout << 1/i;
		cout << endl;
	}
	return 0;
}