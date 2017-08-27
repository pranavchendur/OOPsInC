#include <iostream>
using namespace std;

class person {
	protected:
		char name[20],gender[10];
	public:
		void getPerson() {
			cout<<"\n Name :";
			cin>>name;
			cout<<"\n Gender :";
			cin>>gender;
		}
		void printPerson() {
			cout<<"\n Name and Gender : ";
			cout<<name<<"\t"<<gender<<endl;
		}
};

class student:public person {
	protected:
		int stdId;
		char branch[20];
	public:
		void getStudent() {
			cout<<"\n Student ID Num :";
			cin>>stdId;
			cout<<"\n Branch :";
			cin>>branch;
		}
		void printStudent() {
			cout<<"\n Student ID and Branch :";
			cout<<stdId<<"\t"<<branch<<endl;
		}
};

class gateScore {
	protected:
		int score;
	public:
		void getScore() {
			cout<<"\n GATE Score :";
			cin>>score;
		}
		void printScore() {
			cout<<"\n GATE Score :";
			cout<<score<<endl;
		}
};

class pgStudent:public student,public gateScore {
	protected:
		char school[20];
	public:
		void getPGs() {
			getPerson();
			getStudent();
			getScore();
			cout<<"\n School :";
			cin>>school;
		}
		void printPGs() {
			printPerson();
			printStudent();
			printScore();
			cout<<"\n School :";
			cout<<school<<endl;
		}
};

int main() {
	pgStudent one;
	cout<<"\n Enter Details :";
	one.getPGs();
	cout<<"\n Stored Details :";
	one.printPGs();
	return 0;
}