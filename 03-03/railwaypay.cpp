#include <iostream>
using namespace std;

float grossPay(float basic,float hra,float dap) {
	return basic+hra+(dap/100)*basic;
}

float grossPay(float wage,float hours) {
	return wage*hours;
}

float grossPay(float pay) {
	return pay;
}

void printPay(float pay) {
	cout<<"The gross pay for this employee is "<<pay<<endl;
}

int main() {
	float basic,hra,dap,wage,hrs,amt;
	int opt;
	cout<<"Railway Gross Pay Calculator \n";
	cout<<"Select Employee Type \n";
	cout<<" 1.Regular \n 2.Daily Wage \n 3.Consolidated \n";
	cout<<"Enter Option : ";
	cin>>opt;
	cout<<"Enter details \n";
	switch(opt) {
		case 1:
			cout<<"Basic Pay : ";
			cin>>basic;
			cout<<"HRA : ";
			cin>>hra;
			cout<<"Percentage of DA : ";
			cin>>dap;
			printPay(grossPay(basic,hra,dap));
			break;
		case 2:
			cout<<"Wage (per hour) : ";
			cin>>wage;
			cout<<"Number of Hours : ";
			cin>>hrs;
			printPay(grossPay(wage,hrs));
			break;
		case 3:
			cout<<"Amount : ";
			cin>>amt;
			printPay(grossPay(amt));
			break;
	}
	return 0;
}