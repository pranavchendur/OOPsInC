#include <stdio.h>

void main() {
	int a=5,*b,*e;
	float c=6,*d;
	void *ptr;
	b=&a;
	printf("%p\t%d\n",b,*b);
	d=&c;
	printf("%p\t%f\n",d,*d);
	ptr = &a;
	e = ptr;
	printf("%p\t%d\n",e,*e);
	printf("%p\t%d\n",ptr,*((int *)ptr));
}