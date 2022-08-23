/*
	Enter any two integer write a program to find one rest to power another.
*/

#include <stdio.h>

int main()
{
	int a,b,p=1,i=1;
	printf("Enter any 2 Integer: ");
	scanf("%d%d",&a,&b);
	while(i<=b)
	{
		p=p*a;
		i++;
	}
	printf("\nThe value of %d rest to power %d is %d.\n",a,b,p);
	return 0;
}
