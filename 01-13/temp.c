#include <stdio.h>

void main() {
	double temp;
	int opt = 10,i;
	scanf("%lf",&temp);
	int tr[5] = {100,357,1187,2193,2660};
	for (i = 0, i <5, i++) {
		if (temp<tr[i]+tr[i]*(5/100) && temp>tr[i]-tr[i]*(5/100))
			opt = i;
	
	}
	printf("\n The substance is : \n");
	switch(opt) {
	case '0':
		printf("Water");
		break;
	case '1':
		printf("Mercury");
		break;
	case '2':
		printf("Copper");
		break;
	case '3':
		printf("Silver");
		break;
	case '4':
		printf("Gold");
		break;
	case '10':
		printf("Invalid");
		break;
	};
}
