#include <iostream>
#include <string.h>
using namespace std;

class student {
	char name[20];
	public:
		student() {
			strcpy(name,"ABC");
		}
		virtual void print() {
			cout<<"student";
			cout<<name;
			cout<<endl;
		}
};

class intExam:public student {
	int regNo;
	public:
		intExam() {
			regNo=10;
		}
		virtual void print() {
			cout<<"intExam";
			cout<<regNo;
			cout<<endl;
		}
};

class extExam:public student {
	int regNo;
	public:
		extExam() {
			regNo=11;
		}		
		virtual void print() {
			cout<<"extExam";
			cout<<regNo;
			cout<<endl;
		}
};

class result:public intExam,public extExam {
	int marks;
	public:
		result() {
			marks=100;
		}
		void print() {
			cout<<"result";
			cout<<marks;
			cout<<endl;
		}
};

int main() {
	intExam iE;
	extExam eE;
	result re;

	student *ps;
	intExam *pi;
	result *pr;

	pi = &re;

	pi->print();

	pr = &re;

	pr->print();

	ps = &eE;

	ps->print();

	return 0;
}