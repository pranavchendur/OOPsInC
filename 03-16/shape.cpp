#include <iostream>
using namespace std;

class dimen {
protected:
	float l,b,s;
};

class square:protected dimen {
	float res;
public:
	void getDim() {
		cin>>s;
		res=s*s;
	}
	void printRes() {
		cout<<res<<endl;
	}
};

class rect:protected dimen {
	float res;
public:
	void getDim() {
		cin>>l>>b;
		res=l*b;
	}
	void printRes() {
		cout<<res<<endl;
	}	
};

int main()
{
	square s; rect r;
	cout<<"Square : \n";
	s.getDim();
	s.printRes();
	cout<<"Rectangle : \n";
	r.getDim();
	r.printRes();
	return 0;
}