/*
	Program to count number of times each character is repeated.
	Author : PranavChendur T K
*/

#include <stdio.h>
#include <string.h>

void rem(char a[],int pos,int s) {
	int i;
	for (i=pos; i<s; i++) {
		a[i] = a[i+1];
	}
}

void main() {
	int i,count=0,c=0,num=0,a=0,current=0,chc[100],j=0;
	char ch[100],str[100];

	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	for (i=0; i<strlen(str); i++) {
		str[i]=tolower(str[i]);
	}
	while (str[0]!='\0') {
		current = str[0];
		for (i=0; i<strlen(str); i++) {
			if (str[i]==current) {
				count++;
			}
		}
		for (j=0; j<count; j++) {
			for (i=0; i<strlen(str); i++) {
				if (str[i]==current) {
					rem(str,i,strlen(str));
				}
			}
		}
		ch[num] = current;
		chc[num] = count;
		++num;
		count=0;
	}

	for (i=0; i<num; i++) {
		printf("The number of character %c in String is %d.\n",toupper(ch[i]),chc[i]);
	}
}