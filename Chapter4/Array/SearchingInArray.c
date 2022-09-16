/*
	Enter any element search weather the element is available into an array of size n.
*/

#include <stdio.h>

int main()
{
	int a[30],i,j,dim,search,n=0;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Element for Search: ");
	scanf("%d",&search);
	for(j=0;j<dim;j++)
	{
		if(a[j]==search)
		{
			printf("Element %d is available at %d position.",search,j+1);
			break;
		}
		else
			n++;
	}
	if(n==dim)
		printf("Element %d is not available.",search);
	return 0;
}
