/*
	Write a program in c to display n term of even natural number and their sum.
	
	output:
	Input number of term: 8
	The even natural number are: 2 4 6 8 10 12 14 16
	The sum of Even Natural Number upto 8 terms: 72
*/
#include <stdio.h>

int main()
{
	int n,num,sum=0,i=1;
	printf("Input number of term: ");
	scanf("%d",&n);
	printf("The even natural number are: ");
	while(i<=n)
	{
		num=i*2;
		printf("%d ",num);
		sum=sum+num;
		i++;
	}
	printf("\nThe sum of Even Natural Number upto %d terms: %d",n,sum);
	return 0;
}
