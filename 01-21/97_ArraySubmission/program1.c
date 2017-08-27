/*

Read in tnum numbers, each of which is between 10 and 100, inclusive. As each number is read, validate and store it in the list only if it isn’t a duplicate of a number already read. After reading all the values, display only the unique values that the user entered.

Author : PRANAVCHENDUR T K (15BCE1097)

*/

#include <stdio.h>
#define tnum 20

int array[tnum];

int checkdup(int a, int num) {
	int i;
	if (num<10 || num>100) {
		return 1;
	}
	for (i=0;i<a;i++) {
		if (array[i]==num)
			return 1;
	}
	return 0;
}
void main() {
	int i,num=0;
	for (i=0; i<tnum; i++) {
		printf("%d out of %d\n",i+1,tnum);
		printf("Enter a number (10-100) : ");
		scanf("%d",&num);
		if (checkdup(i,num)==0) {
			array[i] = num;
		}
		else {
			printf("\nYou entered a wrong (or) duplicate number, Try Again !!!\n");
			--i;
		}
	}
	printf("The values entered are : \n");
	for (i=0; i<tnum; i++) {
		printf("%d\t",array[i]);
	}
	printf("\n");
}