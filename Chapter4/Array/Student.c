/*
	10 student mark ,their avg &sum;
*/
#include <stdio.h>

int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Markes of Student %d: ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of Marks of 10 student: %d.",sum);
	printf("\nAverage Marks of 10 student: %d.",sum/10);
	return 0;
}
