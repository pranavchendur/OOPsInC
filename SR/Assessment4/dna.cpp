#include<iostream>
using namespace std;
#include<string.h>
class text
{
    protected:
    char str[30];
    public:
    //function to get values
    void get();
    //return length of text
    int length();
    //function to compare two text
    int count_Substr(text&);
};
void text::get() {
	cin>>str;
}

int text::length() {
	return strlen(str);
}

int text::count_Substr(text &a) {
	int i,j,k,count=0,ret=0;
	for (i=0;i<=(length()-a.length());i++) {
		for (j=0,k=i;j<a.length();j++,k++) {
			if (str[k]==a.str[j])
				count++;
		}
		if (count==a.length())
			ret++;
		count=0;
	}
	return ret;
}

class dna:public text {
	public:
		void checkValid() {
		 int i,j,count=0;
			for (i=0;i<length();i++) {
					if (str[i]=='a'||str[i]=='t'||str[i]=='c'||str[i]=='g')
						count++;
			}
			if (count==length())
				cout<<"Valid"<<endl;
			else
				cout<<"Invalid"<<endl;
		}
};

int main() {
	dna s1,s2;
	s1.get();
	s2.get();
	cout<<s1.length()<<endl;
	cout<<s1.count_Substr(s2)<<endl;
	s1.checkValid();
	s2.checkValid();
	return 0;
}