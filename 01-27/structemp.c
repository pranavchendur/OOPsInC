#include <stdio.h>
#include <string.h>

struct emp {
	int id;
	char name[20];
	char mobile[20];
	struct pers {
		char email[30];
	}personal;
}e[5];

void main() {
	int i,n=1;
	for (i=0;i<n;i++) {
		printf("Enter (1) ID (2) Name (3) Personal E-Mail (4) Mobile respectively : ");
		scanf("%d",&e[i].id);
		scanf("%s",e[i].name);
		scanf("%s",e[i].personal.email);
		scanf("%s",e[i].mobile);
		if (strlen(e[i].mobile)!=10) {
			printf("Try Again !!!");
			scanf("%s",e[i].mobile);
		}
	}
	for (i=0;i<n;i++) {
		printf("(%d) \n Name : %s \nEmail : %s \nMobile : %s \n",e[i].id,e[i].name,e[i].personal.email,e[i].mobile);
	}
}