/*
	32 bit Release
*/

#include <winbgim.h>
using namespace std;

int main()
{
	initwindow(300,300); // init graphics window with size 300x300
	setbkcolor(1); // set background color 
	cleardevice(); // clear screen
	setcolor(14); // set drawing color
	outtextxy(50,100, "Graphics"); // print text in graphics window at set x and y
	circle (150,150,100); // draw circle at x = 150, y = 150, radius 100
	getch(); // pause screen
	return 0; 
}
