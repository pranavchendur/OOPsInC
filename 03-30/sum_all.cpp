#include <iostream>
using namespace std;

template <class T, class U>
T add(T a,U b) {
	T temp;
	temp = a+b;
	return temp;
}

int main() {
	int a=3,b=2,e;
	float c=3.5,d=4.25,f;
	cout<<"The values to be added are :"<<endl;
	cout<<a<<" and "<<b<<"\n";
	cout<<c<<" and "<<d<<"\n";
	e=add(a,b);	//e=add<int>(a,b);
	f=add(c,d);	//f=add<float>(c,d);
	cout<<"The sum are : "<<endl;
	cout<<e<<" and "<<f<<"\n";
	return 0;
}