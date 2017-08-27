#include <iostream>
using namespace std;

class a {
		int c;
	protected:
		int av;
	public:
		void getVal() {
			cin>>av;
			cin>>c;
		}
		void printVal() {
			cout<<av<<endl;
			cout<<c<<endl;
		}
};

class b:private a {
	protected:
		float b;
	public:
		void getbVal() {
			getVal();
			cin>>b;
		}
		void printbVal() {
			printVal();
			cout<<b<<endl;
		}
};

int main() {
	b b1;
	b1.getbVal();
	b1.printbVal();
	return 0;
}