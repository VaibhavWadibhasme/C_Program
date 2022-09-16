/*
	largest1 and largest2 element in array.
*/
#include <stdio.h>

int main()
{
	int a[25],i,largest1,largest2,dim,temp;

	printf("\nEnter the Diamension of array: ");
	scanf("%d",&dim);
	printf("Enter array Element: ");
	for(i=0;i<dim;i++)
		scanf("%d",&a[i]);
	largest1=a[0];
	largest2=a[1];
	if(largest1<largest2)
	{
		temp=largest1;
		largest1=largest2;
		largest2=temp;
	}
	
	for(i=2;i<dim;i++)
	{
		if(a[i]>largest1)
		{
			largest2=largest1;
			largest1=a[i];
		}
		else if(a[i]>largest2&&a[i]!=largest1)
		{
			largest2=a[i];
		}
	}
	printf("The First Largest=%d\n",largest1);
	printf("The Second Largest=%d\n",largest2);
	return 0;
}
