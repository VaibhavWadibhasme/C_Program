/*
	reverse the number using for loop 
	example 1234 will print 54321
*/
#include <stdio.h>

int main()
{
	int num,i,rem;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=num;num>0;num=num/10)
	{
		rem=num%10;
		printf("%d",rem);
	}
	return 0;
}
