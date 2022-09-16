/*
	Remove all duplicate element from array
*/

#include <stdio.h>

int main()
{
	int a[30],i,j,k,dim;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Before Deleting Duplicate element: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<dim;i++)
	{
		for(j=i+1;j<dim;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<dim;k++)
				{
					a[k]=a[k+1];
				}
				dim--;
			}
		}
	}
	printf("\nArray After Deleting Duplicate element: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
