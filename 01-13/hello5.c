#include<stdio.h>

void main() {
	int neg = 0, zer = 0, pos =0;
	float num = 0;
	int con = 1;
	do {
		scanf("%f",&num);
		if (num<0)
			neg++;
		else if (num == 0)
			zer++;
		else 
			pos++;
		printf("\n Continue ?");
		scanf("%d",&con);
	} while (con==1);

	printf("\nPositive : %d , Zero : %d , Negative : %d\n",pos,zer,neg);
}
