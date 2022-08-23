/*
	Enter any Integer, write a program to find out factorial of given Integer.
*/

#include <stdio.h>

int main()
{
	int i=1,f=1;
	long num;
	printf("Enter any Integer: ");
	scanf("%ld",&num);
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	printf("\nFactorial of integer %ld is %d.\n",num,f);
	return 0;
}
