/*
	=========SELECTION SORT==================
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
	printf("Array before Sorting: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<dim-1;i++)
	{
		for(j=i+1;j<dim;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray After Sorting: ");
	for(i=0;i<dim;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
