#include <stdio.h>

struct rain{
	int dd,mm,yy;
	int cm;	
};

struct res{
	int mm,yy;
	int cm;
	struct res *next;
};

// int cal_rain(rain *r,month) {
	
// }

struct res * add(int mm,int yy) {
	struct res *temp;
	temp = {mm,yy,0};
	last<-next=temp;
	last = temp;
	return temp;
}

struct res * search(int mm,int yy,struct res *last) {
	struct res *tl;
	tl = last;
	while (tl!='\0') {
		if ((tl<-mm==mm)&&(tl<-yy==yy)) {
			return tl;
		}
		else {
			return add(mm,yy);
		}
	}
}

void main() {
	struct res *last,*temp,*tl;
	int num,i=0;
	struct rain *r;
	printf("Number of Days : ");
	scanf("%d",&num);
	r = (struct rain*)malloc(num*sizeof(struct rain*));
	for (i=0; i<num; i++) {
		printf("Enter Date (dd/mm/yyyy) : ");
		scanf("%d/%d/%d",&r[i].dd,&r[i].mm,&r[i].yy);
		printf("Amount of Rainfall : ");
		scanf("%d",&r[i].cm);
	}
	for (i=0; i<num; i++) {
		printf("Date (dd/mm/yyyy) : %d/%d/%d \n",r[i].dd,r[i].mm,r[i].yy);
		printf("Amount of Rainfall : %d\n",r[i].cm);
	}
	// Each Month
	for (i=0; i<num; i++) {
		temp = search(r[i].mm,r[i].yy,last);
		temp->cm+=r[i].cm;
	}
	tl = last;
	while (tl!='\0') {
		printf("Month (mm/yyyy) : %d/%d \n",tl->mm,tl->yy);
		printf("Amount of Rainfall : %d\n\n",tl->cm);
	}
}