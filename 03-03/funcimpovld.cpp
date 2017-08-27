#include <iostream>
using namespace std;

void printChar(char a) {
	cout<<a<<endl;
}

void printChar(int a) {
	cout<<a<<endl;
}

int main() {
	int a;
	cin>>a;
	printChar(a);
}