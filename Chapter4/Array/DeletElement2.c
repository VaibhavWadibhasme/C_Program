
/*
	Enter array with dimension n WAP to delet an element in an array.
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
//------------------ By using element------------------------------------
	printf("Enter the element you want to delet: ");
	scanf("%d",&ele);
	for(i=0;i<dim;i++)
	{
		if(a[i]==ele)
			p=i;
	}
	for(i=p;i<dim;i++)
	{
		a[i]=a[i+1];
	}
//-----------------------------------------------------------------------
	printf("Updated Array is:");
	for(j=0;j<dim-1;j++)
	{
		printf("%d ",a[j]);
	}
	
	return 0;
}
