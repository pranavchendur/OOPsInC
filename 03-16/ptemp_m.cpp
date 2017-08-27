#include <iostream>
using namespace std;

class person {
	protected:
		char name[20],gender[10];
	public:
		void getPerson() {
			cin>>name;
			cin>>gender;
		}
		void printPerson() {
			cout<<name<<endl<<gender<<endl;
		}
};

class employee {
	protected:
		int empId;
		char desg[20];
	public:
		void getEmployee() {
			cin>>empId;
			cin>>desg;
		}
		void printEmployee() {
			cout<<empId<<endl<<desg<<endl;
		}
};

class ptEmployee:public employee,public person {
	protected:
		float hours;
	public:
		void getPTE() {
			getPerson();
			getEmployee();
			cin>>hours;
		}
		void printPTE() {
			printPerson();
			printEmployee();
			cout<<hours<<endl;
		}
};

int main() {
	ptEmployee one;
	one.getPTE();
	one.printPTE();
	return 0;
}