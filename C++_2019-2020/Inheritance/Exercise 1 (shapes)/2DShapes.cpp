
#include <iostream>
#include <string.h>
using namespace std;

class TwoDShape{
	public:
		double width; 
		double height; 
		
		void ShowDim(){
			cout << "Dimenstions: " << width << " x " << height << endl;
		}
		TwoDShape(){
			cout << "TwoDShape Constructor without parameters" << endl;
			width = 2; height = 2; 
		}
		TwoDShape(double w, double h){ // constructor of base class. Always called if an object of a child class is made (if no paramaters)
			cout << "TwoDShape Constructor with parameters" << endl; 
			width = w; 
			height = h; 
		}
};

class Triangle: public TwoDShape{
	public: 
		char style[20];
		
		double area(){
			return (width*height)/2; 
		}
		void ShowStyle(){
			cout << "Triangle Style: " << style << endl;
		}
		Triangle(): TwoDShape(){
			cout << "Triangle Constructor without parameters" << endl; 
		}
		Triangle (double w, double h): TwoDShape(w, h){
			cout << "Triangle Constructor with parameters" << endl;
		}
};


class Rectangle: public TwoDShape{
	public:
		bool isSquare(){
			if (width == height){
				//cout << "Rectangle is a square" << endl;
				return true;  
			}
			else{
				//cout << "Rectangle is not a square" << endl;
				return false;  
			}
	}
		double area(){
			return width*height; 
		}
		
		Rectangle(): TwoDShape(){
			cout << "Rectangle Constructor without parameters" << endl; 
		}
		Rectangle(double w, double h): TwoDShape(w, h){ 
			cout << "Recangle Constructor with parameters" << endl; 
		}
	
};




int main()
{
	
	Triangle tri(3,4);
	cout << "Triangle's Area: " << tri.area() << endl; 
	Rectangle rec1; 
	cout << "Rectangle1's Area: " << rec1.area() << endl;
	Rectangle rec2(4,6);
	cout << "Rectangle2's Area: " << rec2.area() << endl; 
 	return 0;
}

