#include <stdio.h>
#include <string.h>

int num_letters(char l, char s[]) {
	int i,count=0;
	for (i=0;i<strlen(s);i++) {
		if (l==s[i]) count++;
	}
	return count;
}

int check(char s[], char r[]) {
	int i,j,flag=0;
	for (i=0;i<strlen(s); i++) {
		for (j=0;j<4;j++) {
			if (s[i]==r[j]) flag+=1;
		}
		if (flag!=1) {
		 return 0;
		}
		flag = 0;
	}
	return 1;
}

void main() {
	int i; 
	char dna[50];
	char r[4] = {"ACTG"};
	scanf("%[^\n]s",dna);
	if (check(dna,r)==1) {
		for (i=0;i<4;i++) {
			printf("%c\n%d\n",r[i],num_letters(r[i],dna));
		}
	}
	else {
		printf("Invalid input");
		return;
	}
}