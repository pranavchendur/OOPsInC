#include <iostream>
using namespace std;

class employee {
	private:
		int id;
		char name[20];
		float salary;
		char address[3][20];
	public:
		void getDetails() {
			int i;
			cout<<"Enter Employee ID, Name, Salary"<<endl;
			cin>>id;
			cin>>name;
			cin>>salary;
			for (i=0;i<3;i++) {
				cout<<"Address Line "<<i+1<<" : ";cin>>address[i];
			}
		}
		void dispDetails() {
			int i;
			cout<<"Enter Employee ID, Name, Salary"<<endl;
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<salary<<endl;
			for (i=0;i<3;i++) {
				cout<<"Address Line "<<i+1<<" : "<<address[i]<<endl;
			}
			cout<<"\n";
		}
};

int main() {
	employee s;
	s.getDetails();
	s.dispDetails();
	return 0;
}