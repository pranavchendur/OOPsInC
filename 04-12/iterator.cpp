#include <iostream>
#include <vector>

using namespace std;

int main() {	
	vector <int> hello;
	vector <int>::iterator helloIter;
	hello.push_back(202);
	hello.push_back(212);
	hello.push_back(232);
	for (helloIter=hello.begin(); helloIter !=hello.end(); helloIter++)
	{
		cout<<*helloIter<<endl;
	}

	if (!hello.empty()) 
		hello.clear();

	return 0;
}