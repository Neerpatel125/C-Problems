#include <iostream>
#include <string.h>
using namespace std; 
class Vehicle{ 
	private: 
		int passengers; 
	protected: 
		int mpg;
	public:		
		int fuelcap;
		string make,model;
		int year; 
		
		Vehicle(); // This lets us create an object without paramters. This is a constructor as well. Can be done for any function.
		Vehicle(string ma);
		Vehicle(string ma, string mo);
		Vehicle(int p, int f, int m);
		Vehicle(string ma, string mo, int y);
		Vehicle(double p, double f, double m, string ma, string mo, int y); // Constructor
		//~Vehicle(); // Destructor
		
		int g_pass();
		void s_pass(int np);
		int g_mpg();
		void s_mpg(int m); 

		
		
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
int Vehicle::g_mpg(){
	return mpg;
}
void Vehicle::s_mpg(int m){
	mpg = m; 
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
	cout << "Constructing Vehicle Class without parameters" << endl; 
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
	cout << "Constructing Vehicle Class with parameters" << endl; 
	passengers = p;
	fuelcap = f;
	mpg = m;
	make = "Toyota";
	model = "Carolla";
	year = 2017; 
}
/*Vehicle::~Vehicle(){
	cout << endl << "Vehicle has been destroyed!" << endl;
} */

Vehicle CreateCar(){
	Vehicle v(3,10,50);
	return v; 
}

class Engine{
	public:
		int	NCylinder;
		char EngineType[50];
		int CylinderSize; 
		
		Engine(){
			cout << "Constructing Engine without parameters" << endl;
			NCylinder = 4; 
			strcpy(EngineType, "External Combustion");
			CylinderSize = 3;
		}
		Engine (int nc, char e[], int cs){
			cout << "Constructing Engine with parameters" << endl;
			NCylinder = nc; 
			strcpy(EngineType, e);
			CylinderSize = cs; 
		}
};

class Truck: public Vehicle, public Engine{
	public: 
	int CarryCap;
	
	Truck(): Vehicle(){
		cout << "Constructing Truck without parameters" << endl; 
		CarryCap = 1000; 
	} 
	Truck(int p, int f, int m, int c ): Vehicle(p,f,m){
		cout << "Constructing Truck with Vehicle parameters" << endl; 
		CarryCap = c; 
	}
	Truck(int nc, char e[], int cs): Engine(nc, e, cs){
		cout << "Constructing Truck with Engine parameters" << endl;
	}
	Truck (int p, int f , int m, int c, int nc, char e[], int cs): Vehicle(p,f,m), Engine(nc,e,cs){
		cout << "Constructing Truck with Vehicle and Engine parameters" << endl;
	}
	int get_mpg(){
		return mpg; 
	}
	void set_mpg (int m){
		mpg = m; 
	}

};


class MineTruck: public Truck{
	public:
		char MineType[50];
		
		MineTruck(): Truck(){
			cout << "Constructing MineTruck without parameters" << endl;
			strcpy(MineType,"Plutonium");
		}
		MineTruck(int p, int f, int m, int c): Truck(p,f,m,c){
			cout << "Constructing MineTruck with parameters" << endl;
			strcpy(MineType, "Plutonium");
		}
};


int main()
{
	Truck one;
	cout <<endl << /*"Type: " << strcpy(one.MineType,"Gold") << endl << */ "Carrying Capacity: " << one.CarryCap << endl << "Passengers: " << one.g_pass() << endl << "MPG: " << one.get_mpg() << endl << "Fuel Capacity: " << one.fuelcap << endl << endl; 
	Truck two(6, 20, 40, 2302);
	cout <<  endl << /*"Type: " << strcpy(two.MineType,"Diamond") << endl <<*/ "Carrying Capacity: " << two.CarryCap << endl << "Passengers: " << two.g_pass() << endl << "MPG: " << two.get_mpg() << endl << "Fuel Capacity: " << two.fuelcap << endl << endl; 
	return 0; 
}
