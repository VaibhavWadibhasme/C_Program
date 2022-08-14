/*	The policy followed by a company to process customer orders
	is given by the following rules:
	(a) If a customer order is less than or equal to that in stock
	and has credit is OK, supply has requirement.
	(b) If has credit is not OK do not supply. Send him
	intimation.
	(c) If has credit is Ok but the item in stock is less than has
	order, supply what is in stock. Intimate to him data the
	balance will be shipped.
	Write a C program to implement the company policy.
	
	inputs:-
	1)customer order
	2)stock available
	3)Credit (OK||not OK)
	
*/
#include <stdio.h>

int main()
{
	int co,c,sa=1000;
	printf("Enter the amount of Customer order: ");
	scanf("%d",&co);
	printf("Enter Credit of Customer order OK(1) or Not OK(0): ");
	scanf("%d",&c);
	if(co<=sa&&c==1)
		printf("Process customer Order.");
	else
	{
		if(co<=sa&&c==0)
			printf("Credit is not OK.");
		else
		{
			if(c==1&&sa<co)
				printf("Dear customer stock %d is delivered and remaining %d will be delivered soon",sa,(co-sa));
		}
	}
	return 0;
}

