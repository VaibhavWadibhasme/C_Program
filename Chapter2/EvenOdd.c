/*	Any integer is input through the keyboard. Write a program to
	find out whether it is an odd number or even number.*/

#include <stdio.h>

int main()
{
	int num;
	printf ("Enter any Number to Check Even or Odd: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Your enter Number is EVEN");
	}
	else
	{
		printf("Your enter Number is ODD");
	}
	return 0;
}
