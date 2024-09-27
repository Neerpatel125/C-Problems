#include <iostream>
using namespace std;



class Temperature{
	public:
	int temp;
	void Show(){
		cout << "Temperature: " << temp << endl; 
	} 
};

int main()
{
	Temperature t, *tt;
	t.temp = 65; 
	t.Show(); 
	
	tt = &t; 
	tt -> temp = 100; 
	tt -> Show();
 return 0;
}

