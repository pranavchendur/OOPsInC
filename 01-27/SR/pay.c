#include <stdio.h>

void main() {
	int id,rate,qty;
	float pay;
	scanf("%d\n%d\n%d",&id,&rate,&qty);
	if (qty>40)
		pay = (40*rate) + (qty-40)*rate*1.5;
	else
		pay = (40*rate);
	pay -= pay*(0.03625);
	printf("%0.02f",pay);
}