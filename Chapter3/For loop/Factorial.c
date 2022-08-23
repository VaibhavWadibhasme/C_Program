/*
	find factorial of number provided by user.
*/
#include <stdio.h>

int main()
{
	int i,num;
	long fact=1;
	printf("Enter the Number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		fact=fact*i;
	printf("Factorial of is %d.",fact);
	return 0;
	
}
