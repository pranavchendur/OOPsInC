#include <iostream>
using namespace std;

class base {
	public:
	void disp() {
		cout<<"Base Disp called";
	}
};

class derived:public base {
	public:
	void display() {
		cout<<"Derived Display called";
	}
	void disp() {
		cout<<"Derived Disp called";	
	}
};

int main() {
	derived d;
	base b;
	b.disp();
	d.display();	
	d.disp();
	return 0;
}