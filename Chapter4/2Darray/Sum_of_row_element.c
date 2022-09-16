/*
	======WAP to find the sum of all element in each row======
*/

#include <stdio.h>

int main()
{
	int a[5][5],i,j,r,c,sum[5]={0,0,0,0,0};
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			sum[i]=sum[i]+a[i][j];
	}
	printf("\nSum of all element in row \n");
	for(i=0;i<r;i++)
		printf("\n%d\t%d",i,sum[i]);
	
	return 0;
}
