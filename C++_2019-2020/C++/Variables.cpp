/* 
Shows how variables are used
*/

#include <iostream>
using namespace std;

int main()
{
	double width,length,area;
	string message1, message2, message3;
	message1 = "The calculated area is ";
	message2 = "Please input the length and width";
	message3 = " squared meters.";
	cout << message2;
	cin >> width;
	cin >> length;
	area = length*width; 
	cout << message1;
	cout << area; 
	cout << message3;
	
	if (length == width)
		{
			cout << " The shape of this object is a square";
		}
	else
		{
			cout << " The shape of this object is a rectangle";
		}
	return 0;
}
