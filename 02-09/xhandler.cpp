#include <iostream>
using namespace std;

void xhandler(int test) {
	try {
		if(test) throw test;
		else throw "Value is zero";
	}
	catch(int i) {
		cout<<"Caught Exception # : "<<i<<endl;
	}
	catch(const char *str) {
		cout<<"Caught a string: ";
		cout<<str<<"\n";
	}
}

int main() {
	cout<<"Start\n";
	xhandler(0);
	xhandler(1);
	xhandler(2);
	xhandler(3);
	cout<<"End";
	return 0;
}