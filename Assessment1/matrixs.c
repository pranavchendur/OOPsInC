#include <stdio.h>

void main() {
	int m,n,psum=0,ssum=0,i,j,diff=0;
	scanf("%d\n%d",&m,&n);
	if (m>0&&n>0&&m==n) {
					int matrix[n][n];
					for (i=0; i<n; i++) {
						for (j=0; j<n; j++) {
							scanf("%d",&matrix[i][j]);
						}
					}
					// Primary Diagonal
					for (i=0; i<n; i++) {
						psum = psum + matrix[i][i];
					}
					// Secondary Diagonal
					for (i=0, j=(n-1); i<n, j>=0; i++, j--) {
						ssum += matrix[i][j];
					}
					// Absolute Difference
					diff = abs(psum-ssum);
					printf("%d\n",diff);
	}
	else 
		printf("Invalid input");
}