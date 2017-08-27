/*
	Sum of n Numbers using recursion;
	Author : PranavChendur T K
*/

#include <stdio.h>

int sum(int n) {
	if (n==1) {
		return 1;
	}
	else {
		return n+sum(n-1);
	}
}

void main() {
	int num;
	printf("Enter Nth Number :");
	scanf("%d",&num);
	printf("Sum of 1 to %d is %d\n",num,sum(num));
}