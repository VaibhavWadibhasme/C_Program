/*
	* * * * *
	  * * * *
	    * * *
	      * *
	        *
*/
#include <stdio.h>

int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
			printf("  ");
		for(j=5-i;j>0;j--)
			printf(" *");
		printf("\n");
	}
	return 0;
}
