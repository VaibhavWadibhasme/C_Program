/*
	======print the diagonal only======
*/

#include <stdio.h>

int main()
{
	int a[5][5],i,j,r,c;
	printf("\nEnter the row & column of Matrix: ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element at a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\nMatrix Diagonal are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
				printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
