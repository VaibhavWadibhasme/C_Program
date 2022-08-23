/*
	    *
	   ***
	  *****
	 *******
	*********
	 *******
	  *****
	   ***
	    *
*/

#include <stdio.h>

int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(l=1;l<i;l++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=i;k++)
			printf(" ");
		for(j=4;j>=i;j--)
			printf("*");
		for(l=3;l>=i;l--)
			printf("*");
		printf("\n");
	}
	return 0;
}
