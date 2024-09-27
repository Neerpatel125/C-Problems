#include <iostream>
using namespace std;

class Vehicle 
{
	public:
		int passengers;
		int fuelcap;
		int mpg; 
		int weight;
		int load;
		
	int range();
	int rangekm();
	int TotalWeight();
};

Vehicle::range() 
		{
			return fuelcap*mpg;
		}
Vehicle::rangekm()
	{
		return range()*1.61; 
	}
Vehicle::TotalWeight()
	{
		return weight + load; 
	}
		
		
int main()
{		
	Vehicle Minivan; 
	Vehicle Sportscar;
	Vehicle Poormobile;
	
	Minivan.passengers = 20;
	Minivan.fuelcap = 50;
	Minivan.mpg = 15;
	Minivan.weight = 5000;
	Minivan.load = 1000;
	
	
	Sportscar.passengers = 4;
	Sportscar.fuelcap = 15;
	Sportscar.mpg = 35;
	Sportscar.weight = 3000;
	Sportscar.load = 500;
	
	Poormobile.passengers = 1;
	Poormobile.fuelcap = 1;
	Poormobile.mpg = 1;
	Poormobile.weight = 1000;
	Poormobile.load = 160; 
	
	cout << "The minivan carries " << Minivan.passengers << " passengers, travels " << Minivan.range() << " miles (" << Minivan.rangekm() << " km) with a full gas tank, and weighs " << Minivan.TotalWeight() << " km" << endl;
	cout << "The sportscar carries " << Sportscar.passengers << " passengers, travels " << Sportscar.range() << " miles (" << Sportscar.rangekm() << " km) with a full gas tank, and weighs " << Sportscar.TotalWeight() << " km" << endl;
	cout << "The Poormobile carries " << Poormobile.passengers << " passenger, travels " << Poormobile.range() << " mile (" << Poormobile.rangekm() << " km) with a full gas tank, and weights " << Poormobile.TotalWeight() << " km" << endl;
 return 0;
}
