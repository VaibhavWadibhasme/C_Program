/*
	Enter array with dimension n WAP to insert an element in an array.
*/

#include <stdio.h>

int main()
{
	int a[30],i,j,dim,p,ele;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position and Element: ");
	scanf("%d%d",&p,&ele);
	
	for(i=dim-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=ele;
	printf("Updated Array is:");
	for(j=0;j<dim+1;j++)
	{
		printf("%d ",a[j]);
	}
	
	return 0;
}
