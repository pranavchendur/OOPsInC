#include <iostream>
using namespace std;

class a {
	protected:
		int av;
	public:
		void getaVal() {
			cin>>av;
		}
		void printaVal() {
			cout<<av<<endl;
		}
};

class c {
	protected:
		int c;
	public:
		void getcVal() {
			cin>>c;
		}
		void printcVal() {
			cout<<c<<endl;
		}
};

class b:private a,private c {
	protected:
		float b;
	public:
		void getbVal() {
			getaVal();
			cin>>b;
			getcVal();
		}
		void printbVal() {
			printaVal();
			cout<<b<<endl;
			printcVal();
		}
};

int main() {
	b b1;
	b1.getbVal();
	b1.printbVal();
	return 0;
}