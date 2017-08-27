#include <iostream>
using namespace std;

template <class T, class U>
void swap(T a,U b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// void swap(int &a,int &b) {
// 	int temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// void swap(float &a,float &b) {
// 	float temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// void swap(char &a,char &b) {
// 	int temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

int main() {
	int a=3,b=2;
	float c=3.5,d=4.5;
	char e='b',f='c';
	cout<<"Before Swap"<<endl;
	cout<<a<<" "<<b<<"\n";
	cout<<c<<" "<<d<<"\n";
	cout<<e<<" "<<f<<"\n";
	swap(a,b);
	swap(c,d);
	swap(e,f);
	cout<<"After Swap"<<endl;
	cout<<a<<" "<<b<<"\n";
	cout<<c<<" "<<d<<"\n";
	cout<<e<<" "<<f<<"\n";
	return 0;
}