/*
	sum=x+2x+3x+4x.........+nx
*/
#include <stdio.h>

int main()
{
	int terms, i, sum=0,x;
	printf("\nPlease Enter value of X: ");
	scanf("%d",&x);
	printf("\nPlease Enter number of terms: ");
	scanf("%d",&terms);
	for(i=1;i<=terms;i++)
		sum=sum+i*x;
	printf("Summation of series: %d",sum);
	return 0;
}
