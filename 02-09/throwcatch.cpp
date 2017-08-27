#include <iostream>
using namespace std;

typedef int zeroException;
float computeVoltage(int V2,int N1, int N2) {
	int V1;
	if (N2==0)
		throw(0);
	else {
		V1 = N1*V2/N2;
		return V1;
	}
}
int main() {
	int n,N1,N2,V2,V1,i;
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>V2>>N1>>N2;
		try {
			V1 = computeVoltage(V2,N1,N2);
		}
		catch(zeroException n) {
			cout<<"N2 cannot be Zero"<<endl;
			continue;
		}	
		if (V1<230)
			cout<<"less";
		else
			cout<<"more";
	}	
	return 0;
}
