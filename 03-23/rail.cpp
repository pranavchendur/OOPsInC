#include <iostream>
#include <string.h>
using namespace std;

class person {
	char name[20];
	public:
		person() {
			strcpy(name,"ABC");
		}
		virtual void print() {
			cout<<"person";
			cout<<name;
			cout<<endl;
		}
};

class passenger:public person {
	int resNo;
	public:
		passenger() {
			resNo=10;
		}
		virtual void print() {
			cout<<"passenger";
			cout<<resNo;
			cout<<endl;
		}
};

class employee:public person {
	int empNo;
	public:
		employee() {
			empNo=11;
		}		
		virtual void print() {
			cout<<"employee";
			cout<<empNo;
			cout<<endl;
		}
};

class priv:public employee,public passenger {
	int stat;
	public:
		priv() {
			stat=1;
		}
		void print() {
			cout<<"priv";
			cout<<stat;
			cout<<endl;
		}
};

int main() {
	employee iE;
	passenger eE;
	priv re;

	person *ps;
	employee *pi;
	passenger *pr;

	pi = &re;
	pi->print();

	pr = &re;
	pr->print();

	ps = &eE;
	ps->print();
	return 0;
}