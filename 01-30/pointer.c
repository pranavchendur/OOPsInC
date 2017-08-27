#include <stdio.h>
#include <stdlib.h>

void main() {
	float data = 50.8;
	float *ptr;
	ptr = &data;
	printf("&f\t%f\n",ptr,*ptr);
	*ptr = 27.4;
	printf("&f\t%f\n",ptr,*ptr);
	printf("%f\n",data);
	printf("Address of Pointer Variable : &f\n",&ptr);
}