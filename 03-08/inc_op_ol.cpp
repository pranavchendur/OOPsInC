#include <iostream>
using namespace std;

class bunk {
	float x;
	public:
		bunk() {}
		bunk(float x1) {
			x=x1;
		}
		void show() {
			cout<<x<<" Classes"<<endl;
		}
		void operator ++();
		void operator ++(int);
};

//Overloading without a class
void operator --(bunk &a,int) {
	a++;
}

void bunk::operator ++()	{
	x=x+1;
}

void bunk::operator ++(int)	{
	x=x+1;
}

int main() {
	bunk val(6);
	val++;
	++val;
	val--;
	cout<<"Total Bunks = ";val.show();
	return 0;
}