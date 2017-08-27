#include <iostream>
#include <vector>

using namespace std;

int main() {	
	vector <int> hello;
	hello.push_back(202);
	hello.push_back(212);
	hello.push_back(232);
	for (int i = 0; i < hello.size(); ++i)
	{
		cout<<hello[i]<<endl;
	}
	if (!hello.empty()) 
		hello.clear();
	vector <int> hi;
	hi.push_back(11);
	hello.push_back(11);
	if (hi==hello) {
		hello.push_back(22);
	}
	for (int i = 0; i < hello.size(); ++i)
	{
		cout<<hello[i]<<endl;
	}
	return 0;
}