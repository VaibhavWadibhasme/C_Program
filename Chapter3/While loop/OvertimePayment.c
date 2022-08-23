/*
	Enter Working hour for 10 Employee. if the working hour is Greater 8 hour then employee gets
	Rs 20 per hour as overtime Write a program to print overtime payment of employee.
*/
#include <stdio.h>

int main()
{
	int hr;
	int i=1;
	
	while(i<=10)
	{
		printf("\nEnter Working hour of Employee %d: ", i);
		scanf("%d",&hr);
		if(hr>8)
		{
			printf("Overtime payment for employee %d is Rs%d.",i,((hr-8)*20));
		}
		else
			printf("No Overtime payment for employee %d.",i);
		i++;
	}
	return 0;
}
