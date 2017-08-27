#include <iostream>
using namespace std;

main() {
	int gradeList[8]={92,85,75,88,79,54,};
	int *myGrades = gradeList;
	cout<<gradeList[1]<<endl;
	cout<<*myGrades<<endl;
	cout<<*(myGrades+2)<<endl;
	cout<<myGrades[3]<<endl;
}