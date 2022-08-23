/*
	sum=1+x+x^2/2!+x^3/3!+........x^n/n!
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int terms,i,fact=1,x;
	float sum=1;
	printf("\nPlease Enter value of X: ");
	scanf("%d",&x);
	printf("Enter the no of terms: ");
	scanf("%d",&terms);
	for(i=1;i<=terms;i++)
	{
		fact=fact*i;
		sum=sum+pow(x,i)/fact;
	}
	printf("Sum =%f",sum);
	return 0;
}
