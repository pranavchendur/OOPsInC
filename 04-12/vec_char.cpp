#include <iostream>
#include <vector>

using namespace std;

int main() {	
	vector <char> hello;
	hello.push_back('w');
	hello.push_back('t');
	hello.push_back('f');
	for (int i = 0; i < hello.size(); ++i)
	{
		cout<<hello[i]<<endl;
	}
	if (!hello.empty()) 
		hello.clear();
	vector <char> hi;
	hi.push_back('n');
	hello.push_back('n');
	if (hi==hello) {
		hello.push_back('y');
	}
	for (int i = 0; i < hello.size(); ++i)
	{
		cout<<hello[i]<<endl;
	}
	return 0;
}