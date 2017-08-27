#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

bool GreaterThan5 (double d) {return 4.0<d;}
bool FirstEven(int n) {return !(n%2);}

void f1(vector<double>&v) {
	vector <double>::iterator it = find_if(v.begin(),v.end(),GreaterThan5);
	if (it != v.end())
		cout<<"Found : "<<*it<<endl;	
	else {
		cout << "Not found ";
	}
}

void f2(list<int>&v) {
	list <int>::iterator it = find_if(v.begin(),v.end(),FirstEven);
	if (it != v.end())
		cout<<"Found : "<<*it<<endl;
	else
		cout<<"Could Not Find"<<endl;
}

main() {
	vector <double> new1;
	list <int> new2;
	new1.push_back(3.0);
	new1.push_back(4.0);
	new1.push_back(5.0);
	new2.push_back(4);
	new2.push_back(5);
	new2.push_back(6);
	f1(new1);
	f2(new2);
}