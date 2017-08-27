/*

Check Prime

Author : PRANAVCHENDUR T K (15BCE1097)

*/
#include <stdio.h>
int checkprime(int num) {
	int i;
	for (i=2;i<=10;i++) {
		if (num%i==0)
			count++;
	}
	if (count<=1)
		return 1;
	else
		return 0;
}

void main() {
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	num = abs(num);
	if (checkprime(num)==1) {
		printf("It is Prime !!");
	}
	else {
		printf("It is not Prime !!");
	}
}