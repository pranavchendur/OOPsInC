/*
	Length of String using recursion;
	Author : PranavChendur T K
*/

#include <stdio.h>

int lenstr(char *a) {
	if (*a=='/0') {
		return 1;
	}
	else {
		a++;
		return 1+lenstr(&a);
	}
}

void main() {
	char str[100];
	printf("Enter the String :");
	scanf("%s",&str);
	printf("Number of characters in String :\n",lenstr(&str[0]));
}