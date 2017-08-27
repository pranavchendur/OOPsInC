#include <stdio.h>

int main() {
	int i,n; 
	float sum=0;
	float wb[8] = {15,60,18,20,0.0333,75,45,30}, sb[8]={20,60,33,30,0.0333,75,35,30};
	char brt,bat,s;
	scanf("%c\n%c\n%c",&brt,&s,&bat);
	if (bat=='m') n=5; else n=8;
	if (brt=='w') {
		for (i=0;i<n;i++) {
			sum += wb[i];
		}
	}
	else {
		for (i=0;i<n;i++) {
			sum += sb[i];
		}
	}
	sum = sum*60;
	if (s=='d') sum += sum*0.5;
	printf("%0.0f",sum);
}