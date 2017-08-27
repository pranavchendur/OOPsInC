#include<stdio.h>

int n=0,acd[20];

void read() {
	int i;
	printf("Enter number of Days : ");
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		printf("Enter number of accidents on day %d : ", i+1);
		scanf("%d",&acd[i]);
	}
}

int mean() {
	int i,sum=0,mean=0;
	for (i=0; i<n; i++) {
		sum = sum + acd[i];
	}
	mean = sum/n;
	return mean;
}

int difference(int i) {
	return abs(acd[i] - mean(n));
}

void print() {
	int i;
	printf("\nThe average accidents in %d days is %d.\n",n,mean());
	for (i=0; i<n; i++) {
		printf("\nDay %d's difference from Average : %d\n", i+1,difference(i));
	}
}

void main() {
	read();
	mean();
	print();
}