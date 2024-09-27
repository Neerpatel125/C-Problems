
#include <iostream>
using namespace std;

/* 
From standard C: 
-> struct can replace class, but the defual accessor type would be public by default and doesn't have member functions. 
-> Union can replace class: default is public and all data members use the same memory allocation. Chaning one changes the other. Can't use string in union, not standard. 
*/  

class Vehicle{ 
		int passengers; 
		int fuelcap;
		int mpg;
	public:
		string make,model;
		int year; 
		
		Vehicle(); // This lets us create an object without paramters. This is a constructor as well. Can be done for any function.
		Vehicle(string ma);
		Vehicle(string ma, string mo);
		Vehicle(int p, int f, int m);
		Vehicle(string ma, string mo, int y);
		Vehicle(double p, double f, double m, string ma, string mo, int y); // Constructor
		~Vehicle(); // Destructor
		
		int g_pass();
		void s_pass(int np);
		int g_fuelcap();
		void s_fuelcap(int nf);
		int g_mpg();
		void s_mpg(int nm);
		
		
		int range();
		int rangekm();
};

int Vehicle::range(){
	return fuelcap*mpg;
}

int Vehicle::rangekm(){
	return range()*1.61; 
}

int Vehicle::g_pass(){
	return passengers; 
}

void Vehicle::s_pass(int np){
	passengers = np;
}

int Vehicle::g_fuelcap(){
	return fuelcap; 
}

void Vehicle::s_fuelcap(int nf){
	fuelcap = nf;
}

int Vehicle::g_mpg(){
	return mpg; 
}

void Vehicle::s_mpg(int nm){
	mpg = nm; 
}

Vehicle::Vehicle(double p, double f, double m, string ma, string mo, int y){
	passengers = p;
	fuelcap = f;
	mpg = m;
	make = ma;
	model = mo;
	year = y;
}

Vehicle::Vehicle(){
	passengers = 4;
	fuelcap = 5;
	mpg = 20;
	make = "Toyota";
	model = "Carolla";
	year = 2017; 
}
Vehicle::Vehicle(string ma){
	passengers = 4;
	fuelcap = 5;
	mpg = 20 ;
	make = ma;
	model = "Carolla";
	year = 2017;
}
Vehicle::Vehicle(string ma, string mo){
	passengers = 4;
	fuelcap = 5;
	mpg = 20;
	make = ma;
	model = mo;
	year = 2017;
}
Vehicle::Vehicle(string ma, string mo, int y){
	passengers = 4;
	fuelcap = 5;
	mpg = 20;
	make = ma;
	model = mo;
	year = y;
}
Vehicle::Vehicle(int p, int f, int m){
	passengers = p;
	fuelcap = f;
	mpg = m;
	make = "Toyota";
	model = "Carolla";
	year = 2017; 
}
Vehicle::~Vehicle(){
	cout << endl << "Vehicle has been destroyed!" << endl;
}
void display(Vehicle v){
	cout << v.g_pass() << " " << v.g_fuelcap() << " " << v.g_mpg() << " " << v.make << " " << v.model << " " << v.year << endl; 
}
Vehicle CreateCar(){
	Vehicle v(3,10,50);
	return v; 
}
int main()
{
	Vehicle truck;
 	truck = CreateCar();
 	display(truck); 
	return 0;
}
