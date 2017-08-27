/*
	Tower Of Hanoi.
	Author : PranavChendur T K
*/

#include <stdio.h>

void hanoi(int num,char current,char final,char extra,int a[], int b[], int c[]) {
	if (num==1) {
		printf("Move Disk %d from %c to %c.\n",num,current,final);
		return;
	}
	hanoi(num-1,current,extra,final);

	printf("Move Disk %d from %c to %c.\n",num,current,final);

	hanoi(num-1,extra,final,current);
}

void main() {
	int num;

	printf("Enter number of disks : ");
	scanf("%d",&num);
	int a[num],b[num],c[num];
	hanoi(num,'A','B','C',a,b,c);
}