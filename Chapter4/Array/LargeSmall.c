/*
	largest and smallest element in array.
*/
#include <stdio.h>

int main()
{
	int a[25],i,j,small,large,dim;

	printf("\nEnter the Diamension of array: ");
	scanf("%d",&dim);
	printf("Enter array Element: ");
	for(i=0;i<dim;i++)
		scanf("%d",&a[i]);
	large=a[0];
	
	for(i=1;i<dim;i++)
	{
		if(large<a[i])
			large=a[i];	
	}
	small=a[0];
	for(j=1;j<dim;j++)
	{
		if(small>a[j])
			small=a[j];	
	}
	printf("Largest Number in Array is %d.",large);
	printf("\nSmallest Number in Array is %d.",small);
	return 0;
}
