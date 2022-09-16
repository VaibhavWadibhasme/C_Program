/*
	======WAP to find LOWER TRIANGULAR MATRIX======
*/

#include <stdio.h>

int main()
{
	int a[5][5],i,j,r,c,sum=0;
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
	printf("\nMatrix Before conversion\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
				a[i][j]=0;
		}
	}
	printf("\nMatrix After conversion\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	
	return 0;
}
