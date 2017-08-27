// Pseudo
// Begin
// 1. Initialize loop, count and flag variables
// 2. Get no of rows
// 3. Get no of columns
// 4. Get elements of the n*n matrix
// 5. Check Boundary Conditions, if not Print Invalid Input
// 6. Initialize Matrix as Integer Array
// 7. Calculate sum of primary diagonal using incrementing FOR loop.
// 8. Calculate sum of secondary diagonal using incrementing FOR loop for for row and decrementing FOR loop for columns.
// 9. Find absolute difference between primary diagonal and secondary diagonal.
// 10. Display the result.
// End

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
						printf("P:%d,%d Adding %d to %d\n",i,i,matrix[i][i],psum);
						psum = psum + matrix[i][i];
					}
					printf("PSUM : %d\n",psum);
					// Secondary Diagonal
					for (i=0, j=(n-1); i<n, j>=0; i++, j--) {
						printf("S:%d,%d Adding %d to %d\n",i,j,matrix[i][j],ssum);
						ssum += matrix[i][j];
					}
					printf("SSUM : %d\n",ssum);
					// Absolute Difference
					diff = abs(psum-ssum);
					printf("%d\n",diff);
	}
	else 
		printf("Invalid input");
}