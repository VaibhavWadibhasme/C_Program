/*
	Enter array with dimension n WAP to delet an element in an array.
*/

#include <stdio.h>

int main()
{
	int a[30],i,j,dim,p;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
//----------------- By using position ----------------------------------
	printf("Enter the position of Element you want to delet: ");
	scanf("%d",&p);
	
	for(i=p-1;i<dim;i++)
	{
		a[i]=a[i+1];
	}
	
	printf("Updated Array is:");
	for(j=0;j<dim-1;j++)
	{
		printf("%d ",a[j]);
	}
	
	return 0;
}
