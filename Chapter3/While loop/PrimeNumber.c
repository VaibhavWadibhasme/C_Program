/*
	Write a program to determine the number is prime or not.
	
	output:
	Input a number: 13
	13 is a prime number.
*/
#include <stdio.h>

int main()
{
	int n,i=1,count=0;
	printf("Input a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
			count++;
		i++;
	}
	if(count==2)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);
	return 0;
}
