#include <iostream>
using namespace std;

class A{
	public: 
		virtual void WhichClass(){
			cout << "Base Class A" << endl;
		}
};

class B: public A{
	public:
		void WhichClass(){
			cout << "Derived Class B" << endl; 
		}
};

class C: public B{
	public:
		void WhichClass(){
			cout << "Derived Class C" << endl;
		}
};

class Z{
	public:
		virtual void WhatClass(){
			cout << "Base Class Z" << endl; 
		}
};

class D: public A, public Z{
	public:
		void WhichClass(){
			cout << "Derived Class D (from A)" << endl; 
		}
		void WhatClass(){
			cout << "Derived Class D (from Z)" << endl; 
		}
};

class E: public D{
	public: 
};

class Oven{
	public:
		virtual void Cook(){
			cout << "Oven is cooking" << endl; 
		}

};

class MicrowaveOven: public Oven{
	public:
		void Cook(){
			cout << "Microwave oven is cooking" << endl; 
		}
};

class ConventionalOven: public Oven{
	public:
		void Cook(){
			cout << "Gas/Electric oven is cooking" << endl; 
		}
};

int main(){
/*	A a;
	B b; 
	C c;
	D d;
	E e; 
	Z z;
	
	a.WhichClass();
	b.WhichClass();
	c.WhichClass();
	z.WhatClass(); 
	d.WhichClass(); d.WhatClass();
	e.WhichClass(); e.WhatClass(); */
	
	Oven o; MicrowaveOven m; ConventionalOven c; 
	o.Cook(); m.Cook(); c.Cook(); 
	
	
	
	return 0; 
}
