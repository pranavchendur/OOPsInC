#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		int * mar = new int[100000000000000000];	
	}catch (exception &e) {
		cout<<"Standard Exception"<<endl;
	}
	return 0;
}