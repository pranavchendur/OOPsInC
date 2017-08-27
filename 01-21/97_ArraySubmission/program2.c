/*

An Electronic sales company has the following sales details for laptops and mobile phones from the month of January to May. Write a C program to 
Find the total Number of electronic goods sold for each month  
Find the Number of Laptops, Number of Mobiles sold for all the months

Author : PRANAVCHENDUR T K (15BCE1097)

*/
#include <stdio.h>

void main() {
	int i,lapsum=0,mobsum=0; 
	char month[5][20] = {"January","February","March","April","May"};
	int electronics[2][5] = {{20,12,32,22,15},{10,11,12,21,34}};

	// Total each month
	printf("Total Electronic Sales in :\n");
	for (i=0;i<5;i++) {
		printf("%s : %d\n",month[i],electronics[0][i]+electronics[1][i]);
	}

	// Total Number Sold
	printf("\nTotal Number January-May Sales : \n");
	for (i=0;i<5;i++) {
		lapsum += electronics[0][i];
		mobsum += electronics[1][i];
	}
	printf("Laptops : %d.\n",lapsum);
	printf("Mobiles : %d.\n",mobsum);
}