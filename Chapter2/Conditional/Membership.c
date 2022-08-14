/*	A library charges a fine for every book returned late. For first
	5 days the fine is 50 paise, for 6-10 days fine is one rupee and
	above 10 days fine is 5 rupees. If you return the book after 30
	days your membership will be cancelled. Write a program to
	accept the number of days the member is late to return the
	book and display the fine or the appropriate message.

	logic:-
	1-5		0.5 Rs
	6-10	1Rs
	11-30	5Rs
	30<		membership cancle
*/
#include <stdio.h>

int main()
{
	int n;
	float x;
	printf("Enter the No of Days late to return book: ");
	scanf("%d",&n);
	if(n==0)
		printf("Your fine is Rs 0.");
	else
	{
		if(n>=1&&n<=5)
			printf("Your fine is Rs %f",n*0.5);
		else
		{
			if(n>=6&&n<=10)
			{
				x=((n-5)*1)+2.5;
				printf("Your fine is Rs %d",x);
			}
			else
			{
				if(n>=11&&n<=30)
				{
					x=((n-10)*5)+7.5;
					printf("Your fine is Rs %d",x);
				}
				else
					printf("Your membership cancelled.");
			}
		}
	}
	return 0;
}
