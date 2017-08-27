#include <stdio.h>

int factorial(int n) {
	if (n==0||n==1) {
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
	// int i,factorial=1;
	// for (i=1; i<=n; i++) {
	// 	factorial *= i;
	// }
	// return factorial;
}

void main() {
	int num;
	printf("Enter the number to find factorial : ");
	scanf("%d",&num);
	printf("The factorial of %d is %d.\n",num,factorial(num));
}