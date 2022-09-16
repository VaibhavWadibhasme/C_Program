/*
	largest and smallest element in array.
*/
#include <stdio.h>

int main()
{
	int a[]={1,2,3,4,5},i,j,small,large;
	large=a[0];
	small=a[0];
	for(i=1;i<5;i++)
	{
		if(large<a[i])
			large=a[i];	
	}
	for(j=1;j<5;j++)
	{
		if(small>a[j])
			small=a[j];	
	}
	printf("Largest Number in Array is %d.",large);
	printf("\nSmallest Number in Array is %d.",small);
	return 0;
}
