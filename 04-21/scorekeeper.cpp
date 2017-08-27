#include <iostream>
#include <string.h>

using namespace std;

class ScoreKeeper
{
	char courseName[30];
	int *iptr,numTests;
public:
	ScoreKeeper(char *a,int numItems) {
		int i;
		strcpy(courseName,a);
		numTests = numItems;
		iptr = new int[numItems];
		int *itmp = iptr;
		for (i = 0; i < numTests; ++i)
		{
			cout<<"Enter Marks Scored in Test No."<<i+1<<endl;
			do {
				cin>>*itmp;
			} while (*itmp>100 || *itmp<0);
			itmp++;
		}
	};
	~ScoreKeeper() {};
	friend ostream& operator<<(ostream &o,ScoreKeeper&);
	ScoreKeeper operator=(ScoreKeeper&);
};

ostream& operator<<(ostream& o,ScoreKeeper &a) {
	int i,*itmp;
	itmp = a.iptr;
    o<<"Course Name : "<<a.courseName<<endl<<"Number Of Tests : "<<a.numTests<<endl;
    for (i=0;i<a.numTests;i++) {
    	cout<<"Score in Test "<<i+1<<" is "<<*itmp<<endl;
    	itmp++;
    }
}

ScoreKeeper ScoreKeeper::operator=(ScoreKeeper &a) {
	int i;
	cout<<"Copying Data from "<<a.courseName<<" to "<<courseName<<" !!!\n";
   	strcpy(courseName,a.courseName);
   	numTests = a.numTests;
   	iptr = new int[numTests];
   	for (i=0;i<numTests;i++)
   		iptr[i]=a.iptr[i];
}

int main() {
	char aname[30],bname[30];
	int an,bn;
	//Getting Data for creation of Two Objects
	cout<<"Enter Two Course Names : (One by One) \n";
	cin>>aname>>bname;
	cout<<"Enter Num. Of tests in each course : (One by One) \n";
	cin>>an>>bn;
	//Creating Two Objects
	ScoreKeeper aObj(aname,an),bObj(bname,bn);
	//Assigning One Object to Another
	aObj = bObj;
	cout<<"Printing First Object : \n";
	cout<<aObj;
	return 0;
}