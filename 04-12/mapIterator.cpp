#include <iostream>
#include <map>

using namespace std;

main() {
	map <string, int> mark_list;
	mark_list["A"]=10;
	cout<<mark_list["A"]<<endl;
	map <string, int>::iterator ml_It;
	ml_It = mark_list.begin();
	mark_list["B"]=9;
	cout<<mark_list["B"]<<endl;
	mark_list["C"]=8;
	cout<<mark_list["C"]<<endl;
	cout<<"Iterator \n";
	cout<<ml_It->first<<"\t"<<ml_It->second<<endl;
	ml_It++;
	cout<<ml_It->first<<"\t"<<ml_It->second<<endl;
}