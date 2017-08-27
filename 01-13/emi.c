#include<stdio.h>

void main() {
	double n,i,payment,P;
	printf("Enter Interest Rate : \n");
	scanf("%lf",&i);
	printf("Enter Principal Amount : \n");
	scanf("%lf",&P);
	printf("Enter Number of payments : \n");
	scanf("%lf",&n);
	payment = ((i/100)*P)*(n/12);
	printf("The amount borrowed is : %0.2lf, Payment : %0.2lf\n",P,payment);
}
