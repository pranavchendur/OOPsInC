#include <iostream>
#include <string.h>
using namespace std;
class add {
	private:
		char name[20];
		int emp_no;
	public:
		add() {
			strcpy(name,"varsha");
			emp_no=100;
		}
		add(char na[20],int no) {
			strcpy(name,na);
			emp_no=no;	
		}
		add(const add &i) {
			strcpy(name,i.name);
			emp_no=i.emp_no;
		}
		~add() {
			cout<<"Destructor Invoked"<<endl;
		}
		void printValue() {
			cout<<"Name : "<<name<<endl;
			cout<<"Number : "<<emp_no<<endl;
		}
};

int main() {
	add sum;
	sum.printValue();
	add hello("Pooja",102);
	hello.printValue();
	add hi(sum);
	hi.printValue();
	cout<<"Addr Hi : "<<&hi;
	cout<<" Addr Sum : "<<&sum<<endl;
	add hii=hello;
	hii.printValue();
	cout<<"Addr Hii : "<<&hii;
	cout<<" Addr Hello : "<<&hello<<endl;
	return 0;
}