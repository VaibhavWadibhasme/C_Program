/*
	enter any digit number write the program to sum of all digits; 
*/
#include <stdio.h>

int main()
{
	int num,rem,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digit of Number: %d",sum);111
}

