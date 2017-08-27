#include <iostream>
#include <exception>
using namespace std;

class DivByZeroExc : public exception {
public:
	const char* what() const throw() {
		return "Divide By Zero Exception !!!\n";
	}
};

int main() {
	try {
		int a,b;
		cin>>a>>b;
		if (b==0) {
			DivByZeroExc d;
			throw d;
		}
		else 
			cout<<"Division : "<<a/b<<"\n";
	}
	catch (exception &e) {
		cout<<"Exception : "<<e.what()<<endl;
	}
	return 0;
}