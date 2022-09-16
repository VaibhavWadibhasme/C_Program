/*
	======WAP to find the Addition of two matrix======
*/

#include <stdio.h>

int main()
{
	int a[5][5],b[5][5],c[5][5],i,j,r1,c1,r2,c2;
//--------------------------------------------------------------------------------------------
	printf("\nEnter the row & column of Matrix 1: ");
	scanf("%d%d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the element at a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
//--------------------------------------------------------------------------------------------	
	printf("\nEnter the row & column of Matrix 2: ");
	scanf("%d%d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the element at b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
//--------------------------------------------------------------------------------------------
	printf("\nMatrix 1 is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\nMatrix 2 is\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			printf("%4d",b[i][j]);
		printf("\n");
	}
//--------------------------------------------------------------------------------------------
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				c[i][j]=a[i][j]+b[i][j];
		}
		printf("\nAddition of two Matrix is\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				printf("%4d",c[i][j]);
			printf("\n");
		}
	}
	else
		printf("Can not perform addition.");

	return 0;
}
