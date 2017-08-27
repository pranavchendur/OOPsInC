#include <stdio.h>
using namespace std;

class measurement {
	int meter;
	int cm;
	public:
		measurement() {
			meter=0;cm=0;
		}
		measurement(int i) {
			meter=i*1000;
			cm=i*100000;
		}
		void display() {
			cout<<"The meter : "<<meter<<"m"<<endl;
			cout<<"The Centimeter : "<<cm<<"cm"<<endl;
		}

};

int main() {
	measurement r1;
	int km = 2;
	r1=km;
	r1.display();
}