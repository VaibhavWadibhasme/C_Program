/*
	A
	A B
	A B C
	A B C D
	A B C D E
*/
#include <stdio.h>

/*int main()
{
	int i,j,c=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}*/

//================================================================================
int main()
{
	int p=65,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",p);
			p++;
		}
		p=65;
		printf("\n");
	}
	return 0;
}
