/*

Swap (Call By Value)

Author : PRANAVCHENDUR T K (15BCE1097)

*/
#include <stdio.h>
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("Swapped : a=%d, b=%d.\n",a,b);
}

void main() {
	int a=5,b=10;
	printf("Values Before Function Call : a=%d,b=%d.\n",a,b);

	swap(a,b);

	printf("Values After Function Call : a=%d,b=%d.\n",a,b);	
}