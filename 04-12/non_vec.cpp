#include <iostream>
#include <vector>

using namespace std;

int main() {	
	vector <char> hello;
	hello.push_back('w');
	hello.push_back(1);
	hello.push_back('f');
	for (int i = 0; i < hello.size(); ++i)
	{
		cout<<hello[i]<<endl;
	}
	if (!hello.empty()) 
		hello.clear();
	return 0;
}