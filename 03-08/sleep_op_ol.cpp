#include <iostream>
using namespace std;

class sleep {
	float x,y;
	public:
		sleep() {
			x=0;y=0;
		}
		sleep(float x1, float y1) {
			x=x1;y=y1;
		}
		void show() {
			cout<<"Morning : "<<x<<" Hours"<<endl;
			cout<<"Evening : "<<y<<" Hours"<<endl;
		}
		void operator ++();
		void operator ++(int);
};

void sleep::operator ++() {
	x=x+1;y=y+1;
}

void sleep::operator ++(int) {
	x=x+1;y=y+1;
}

void main() {

}