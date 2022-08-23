/*
	sum=1+1/2!+1/3!+........1/n!
*/

#include <stdio.h>

int main()
{
	int terms,i,fact=1;
	float sum=0.0;
	printf("Enter the no of terms: ");
	scanf("%d",&terms);
	for(i=1;i<=terms;i++)
	{
		fact=fact*i;
		sum=sum+1.0/fact;
	}
	printf("Sum =%f",sum);
	return 0;
}
