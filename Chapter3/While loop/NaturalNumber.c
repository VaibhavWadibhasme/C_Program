/*
	Write a program in c to display n term of natural number and their sum.
	
	output:
	Enter no of natural number term you want: 7
	The First 7 natural number is:
	1 2 3 4 5 6 7
	The sum of Natural Number upto 7 terms: 28
*/
#include <stdio.h>

int main()
{
	int n,num,sum=0,i=1;
	printf("Enter no of natural number term you want: ");
	scanf("%d",&n);
	printf("The First %d natural number is:\n",n);
	while(i<=n)
	{
		num=i;
		printf("%d ",i);
		sum=sum+num;
		i++;
	}
	printf("\nThe sum of Natural Number upto %d terms: %d",n,sum);
	return 0;
}
