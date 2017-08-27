#include<stdio.h>

void main() {
	char c;
	printf("Enter the char : ");
	scanf("%c",&c);
	switch(c)
	{
	case 'a':
		printf("Apple");
		break;
	case 'g':
		printf("Grapes");
		break;
	case 'm':
		printf("Mango");
		break;
	}
}
