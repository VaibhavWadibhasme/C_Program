/*
	1
	0 1
	0 1 0
	1 0 1 0
*/
#include <stdio.h>

int main()
{
	int p=1,i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			p=p%2;
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
	return 0;
}
