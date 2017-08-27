#include <iostream>
using namespace std;

class weight {
	float x;
	public:
		weight() {}
		weight(float x1) {
			x=x1;
		}
		void show() {
			cout<<x<<" kg"<<endl;
		}
		weight operator +(weight&);
		weight operator -(weight&);
};

weight weight::operator +(weight &obj2)	{
	float x1;
	x1=x+obj2.x;
	return weight(x1);
}

weight weight::operator -(weight &obj2)	{
	float x1;
	x1=x-obj2.x;
	return weight(x1);
}

int main() {
	float pack1,pack2;
	cout<<"Enter weight of Package 1 : ";cin>>pack1;
	cout<<"Enter weight of Package 2 : ";cin>>pack2;
	weight p1(pack1),p2(pack2);
	weight p3,p4;
	p3=p1+p2;
	p4=p1-p2;
	cout<<"Package 1 = ";p1.show();
	cout<<"Package 2 = ";p2.show();
	cout<<"Total = ";p3.show();
	cout<<"Difference = ";p4.show();
	return 0;
}