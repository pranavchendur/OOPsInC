#include <iostream>
#include <string.h>

using namespace std;

class TaxReturn
{
	int taxID,noDep;
	char firstName[25],lastName[25];
	float annualIncome,taxAmount;
	const static float table[4][3];
	void calcTax() {
		int s,t;
		if (noDep==0) s=0; else if(noDep==1) s=1; else s=2;
		if (annualIncome>0 && annualIncome<10000)
			t=0;
		else if (annualIncome>10001 && annualIncome<30000)
			t=1;
		else if (annualIncome>30001 && annualIncome<60000)
			t=2;
		else if (annualIncome>60000)
			t=3;
		taxAmount=annualIncome*table[t][s];
	}
public:
	TaxReturn() {};
	~TaxReturn() {};
	static void dispTaxTable() {
		int i;
		cout<<"Tax Table \n";
		cout<<"Income \t\t 0 dep \t 1 dep \t 2 or more dep \n";
		cout<<"0-10000 \t";
		for (i=0;i<3;i++) cout<<table[0][i]<<"\t";
		cout<<"\n";
		cout<<"10001-30000 \t";
		for (i=0;i<3;i++) cout<<table[1][i]<<"\t";
		cout<<"\n";
		cout<<"30001-60000 \t";
		for (i=0;i<3;i++) cout<<table[2][i]<<"\t";
		cout<<"\n";
		cout<<"60001-up \t";
		for (i=0;i<3;i++) cout<<table[3][i]<<"\t";
		cout<<"\n";
	}
	void setAll(int tid, char *fn, char *ln, int ai, int nd) {
		taxID = tid;
		strcpy(firstName,fn);
		strcpy(lastName,ln);
		annualIncome=ai;
		noDep=nd;
		calcTax();
	}
	void display() {
		cout<<"Details for  Tax : \n";
		cout<<"Tax ID : ";
		cout<<taxID<<endl;
		cout<<"First Name : ";
		cout<<firstName<<endl;
		cout<<"Last Name : ";
		cout<<lastName<<endl;
		cout<<"Annual Income : ";
		cout<<annualIncome<<endl;
		cout<<"No. Of Dependants : ";
		cout<<noDep<<endl;
		cout<<"Tax Amount to be paid is ";
		cout<<taxAmount<<endl;
	}
};

const float TaxReturn::table[4][3] = {
		{0.10,0.08,0.07},
		{0.12,0.11,0.09},
		{0.18,0.15,0.13},
		{0.25,0.22,0.19}
	};

int main() {
	int i;
	TaxReturn tdata[10];
	tdata[0].dispTaxTable();
	int ataxID,anoDep;
	char afirstName[25],alastName[25];
	float aannualIncome;
	for (i=0;i<10;i++) {
		cout<<"Enter Data for Record No."<<i+1<<endl;
		cout<<"Tax ID : ";
		cin>>ataxID;
		cout<<"First Name : ";
		cin>>afirstName;
		cout<<"Last Name : ";
		cin>>alastName;
		cout<<"Annual Income : ";
		cin>>aannualIncome;
		cout<<"No. Of Dependants : ";
		cin>>anoDep;
		//Calling by passing arguments
		tdata[i].setAll(ataxID,afirstName,alastName,aannualIncome,
			anoDep);
	}
	for (i=0;i<10;i++) {
		cout<<"Displaying Data for Record No."<<i+1<<endl;
		tdata[i].display();
	}
	return 0;
}