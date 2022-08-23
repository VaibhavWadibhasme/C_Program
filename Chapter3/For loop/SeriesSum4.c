/*
	sum=(x-1/X)+1/2(x-1/X)^2+1/2(x-1/X)^3+1/2(x-1/X)^4..............
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int terms, x,i;
	float sum;
	printf("Enter number of terms: ");
	scanf("%d",&terms);
	printf("Enter value of x: ");
	scanf("%d",&x);
	sum=((x-1)/x);
	for(i=2;i<=terms;i++)
	{
		sum=sum+(1.0/2.0)*pow(((x-1)/x),i);
	}
	printf("Sum=%f",sum);
	return 0;
}
