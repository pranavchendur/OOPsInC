#include <iostream>
using namespace std;

class complex {
	float x,y;
	public:
		complex() {}
		complex(float x1,float y1) {
			x=x1;y=y1;
		}
		void show() {
			cout<<x<<"+i*"<<y<<endl;
		}
		complex operator +(complex&);
		complex operator -(complex&);
};

complex complex::operator +(complex &obj2)	{
	float x1,y1;
	x1=x+obj2.x;
	y1=y+obj2.y;
	return complex(x1,y1);
}

complex complex::operator -(complex &obj2)	{
	float x1,y1;
	x1=x-obj2.x;
	y1=y-obj2.y;
	return complex(x1,y1);
}

int main() {
	complex p1(2,4),p2(4,2);
	complex p3,p4;
	p3=p1+p2;
	p4=p1-p2;
	cout<<"Complex 1 = ";p1.show();
	cout<<"Complex 2 = ";p2.show();
	cout<<"Sum = ";p3.show();
	cout<<"Difference = ";p4.show();
	return 0;
}