#include <iostream>
using namespace std;

float finalV(float v,float a, float t) {
	return v+a*t;
}

int main() {
	float v,a,t;
	cin>>v>>a>>t;
	try 
	{
		if (v!=0&&a!=0&&t!=0) {
			if (finalV(v,a,t)>0)
				cout<<finalV(v,a,t);
			else
				cout<<"The car has come to a complete stop";
		}
		else
		{
			throw "Invalid Input";
		}
	}
	catch(const char * a) {
		cout<<a;
	}
	return 0;
}