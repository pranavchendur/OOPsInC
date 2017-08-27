#include <iostream>
using namespace std;

class student {
	private:
		int rollno;
		char name[20];
		int marks[5];
		float avg;
	public:
		void getDetails() {
			int i,tot=0;
			cout<<"Enter RollNo, Name, Marks";
			cin>>rollno;
			cin>>name;
			for(i=0;i<5;i++) {
				cin>>marks[i];
				tot += marks[i];
			}
			avg=tot/5;
		}
		void dispDetails() {
			int i;
			cout<<"RollNo, Name, Marks : \n";
			cout<<rollno<<endl;
			cout<<name<<endl;
			for(i=0;i<5;i++) {
				cout<<marks[i]<<endl;
			}
			cout<<"Average : "<<avg<<endl;
			cout<<"\n";
		}
};

int main() {
	student s;
	s.getDetails();
	s.dispDetails();
	return 0;
}