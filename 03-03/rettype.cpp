#include <iostream>
using namespace std;

int getVal() {
	return 5;
}

float getVal() {
	return 10.01;
}

int main() {
	cout<<getVal();
	return 0;
}