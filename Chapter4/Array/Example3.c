#include <stdio.h>

int main()
{
	int a[5],i,j;
	for(i=0;i<5;i++)
	{
		printf("Element no %d:",i);
		scanf("%d",&a[i]);
		}	
	for(j=0;j<5;j++)
		printf("Element no %d %d\n",j,a[j]);
	return 0;
}
