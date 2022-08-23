/*
	Number is Even or odd, and then if it is even whether it is divisible by 4 or not and if it is odd whether 
	it is divisible by 3 or not will be.
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter number for check: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		if(num%4==0)
			printf("Entered number is even And divisible by 4.");
		else
			printf("Entered number is even but Not divisibal by 4.");
	}
	else if(num%3==0)
		printf("Entered number is odd and divisible by 3.");
	else
		printf("Entered number is odd number and not divisible by 3.");
	return 0;
}


//(num%2==0)?((num%4==0)?printf("Entered number is even And divisible by 4."):printf("Entered number is even but Not divisibal by 4.")):((num%3==0)?printf("Entered number is odd and divisible by 3."):printf("Entered number is odd number and not divisible by 3."));
