#include <iostream>
#include <list>

using namespace std;

main() {
	list <int> list1;
	list1.push_front(11);
	list1.push_front(22);
	list1.push_front(33);
	list1.push_front(44);
	list1.push_back(99);
	list1.pop_front();
	list <int>::iterator l1it;
	l1it=list1.begin();
	list1.insert(++l1it,5);
	list1.insert(++l1it,6);

	for (l1it=list1.begin();l1it!=list1.end();l1it++) {
		cout<<*l1it<<"\t";
	}
	cout<<endl;
	list1.sort();
	cout<<"After Sorting : "<<endl;
	for (l1it=list1.begin();l1it!=list1.end();l1it++) {
		cout<<*l1it<<"\t";
	}
	cout<<endl;
}