/*
		S S S S S S S S 
		S			  S
		S			  S
		S			  S
		S             S
		S             S
		S             S
		S S S S S S S S
*/
#include <stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if(i>=2&&j>=2&&i<=7&&j<=7)
				printf("  ");
			else
				printf("%c ",83);
		}
		printf("\n");
	}
	return 0;
}
