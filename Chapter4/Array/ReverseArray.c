/*
	Reverse the array
*/

#include <stdio.h>

int main()
{
	int a[30],i,j,dim,temp;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Before reverse: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<=dim/2;i++)
	{
		temp=a[i];
		a[i]=a[dim-1-i];
		a[dim-1-i]=temp;
	}
	printf("\nArray After reverse: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

