/*
	TicTacToe.
	Author : PranavChendur T K
*/

#include <stdio.h>
#include <string.h>

int gb[3][3],chance=0;

int check() {
	int i=0,j=0,same=0,pdiag[3],sdiag[3];
	if (chance==0) {
		return 0;
	}
	// Make Diagonal
	for (i=0;i<3;i++) {
		pdiag[i]=gb[i][i];
	}
	for (i=0,j=3;i<3;i++,j--) {
		sdiag[i]=gb[i][j];
	}
	// Check PDiag
	for (i=0;i<3;i++) {
		if (pdiag[0]==pdiag[i]) {
			same++;
		}
	}
	if (same==3) {
		return pdiag[0]+1;
	}
	same = 0;
	// Check SDiag
	for (i=0;i<3;i++) {
		if (sdiag[0]==sdiag[i]) {
			same = 1;
		}
		else {
			same = 0;
		}
	}
	if (same==3) {
		return sdiag[0]+1;
	}
	same = 0;
	// Check Rows
	for (j=0; j<3; j++) {
		for (i=0;i<3;i++) {
			if (gb[j][0]==gb[j][i]) {
				same++;
			}
		}
		if (same==3) {
			return gb[j][0]+1;
		}
		same = 0;
	}

	// Check Columns
	for (j=0; j<3; j++) {
		for (i=0;i<3;i++) {
			if (gb[0][j]==gb[i][j]) {
				same++;
			}
		}
		if (same==3) {
			return gb[0][j]+1;
		}
		same = 0;
	}

	return 1;
	
}

void printgb() {
	int i,j;
	printf("\n Showing Game Board \n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("(%d,%d)\t",i,j);
		}
		printf("\n");
		for(j=0;j<3;j++) {
			printf("%d\t",gb[i][j]);
		}
		printf("\n");
	}
}

void placecoin(int x, int y, int player) {
	if (gb[x][y]==0) {
		gb[x][y] = player;
	}
	else {
		printf("\n!!! WARNING : Invalid Position, Please Try Again !!!\n");
		chance--;
	}
}

void main() {
	int xpos,ypos;
	while (check()==0 || check()==1) {
		if (check()==0) {
			printf("\nGame Board is Empty !!!\n");
			printgb();
		}
		if (check()==1) {
			printf("\nGame in Progress\n");
			printgb();
		}
		if ((chance+1)%2==0) {
			printf("Player 2, Enter Position to Place Coin : \n");
			printf("X :");
			scanf("%d",&xpos);
			printf("Y :");
			scanf("%d",&ypos);
			placecoin(xpos,ypos,2);
		}
		else {
			printf("Player 1, Enter Position to Place Coin : \n");
			printf("X :");
			scanf("%d",&xpos);
			printf("Y :");
			scanf("%d",&ypos);
			placecoin(xpos,ypos,1);
		}
		chance++;
	}
	if (check()==2) {
		printgb();
		printf("\nPlayer 1 wins !!!\n");
	}
	if (check()==3) {
		printgb();
		printf("\nPlayer 2 wins !!!\n");
	}
	if (check()==4) {
		printgb();
		printf("\n=== Game Draw ===\n");
	}
}