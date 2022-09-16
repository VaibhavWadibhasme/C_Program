/*
	[ 1,2,3,11,12,13,14,15,16,8,9,21,22,23,24,10,17,18,19,20,25,26,27,28,29,30]
*/
#include <stdio.h>

int main()
{
	int a[30],count[]={0,0,0},i,j,dim;
	printf("Enter The number of Element: ");
	scanf("%d",&dim);
	printf("Enter The numbers: ");
	for(i=0;i<dim;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<dim;j++)
	{
		if(a[j]>=1&&a[j]<=10)
			++count[0];
		else if(a[j]>=11&&a[j]<=20)
			++count[1];
		else
			++count[2];
	}
	printf("There are %d number in Between 1 and 10.\n",count[0]);
	printf("There are %d number in Between 11 and 20.\n",count[1]);
	printf("There are %d number in Between 21 and 30.\n",count[2]);
	return 0;
}
