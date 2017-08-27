#include <iostream>
#include <string.h>
using namespace std;

int main()
{
		char *i;
		int j,k,count=0;
		char vow[6]="aeiou";
		i = new char[50];
		cout<<"Enter string : \n";
		cin.getline(i,49);
		for (k=0;k<strlen(i);k++)  {
			for (j=0;j<strlen(vow);j++) {
				if (vow[j]==i[k])
					count += 1;
			}
		}
		cout<<"The count is : "<<count<<endl;
		delete i;
}