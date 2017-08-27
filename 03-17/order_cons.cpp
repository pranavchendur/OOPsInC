#include <iostream>
using namespace std;

class base {
	int x;
	public:
		base() {
			cout<<"Base class constructor called"<<endl;
		}

		base (int n) {
			x=n;
			cout<<"Base class parameterized constructor called "<<x<<endl;
		}
};

class derived:public base {
	int y;
	public:
		derived() {
			cout<<"Derived class constructor called"<<endl;
		}

		derived(int n):base(n) {
			y=n;
			cout<<"Derived class parameterized constructor called "<<y<<endl;
		}
};

int main() {
	base a;
	base a1(5);
	derived b;
	derived b1(10);
	return 0;
}