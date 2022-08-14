/*	In a company, worker efficiency is determined on the basis of
	the time required for a worker to complete a particular job. If
	the time taken by the worker is between 2 – 3 hours, then the
	worker is said to be highly efficient. If the time required by
	the worker is between 3 – 4 hours, then the worker is ordered
	to improve speed. If the time taken is between 4 – 5 hours, the
	worker is given training to improve his speed, and if the time
	taken by the worker is more than 5 hours, then the worker has
	to leave the company. If the time taken by the worker is input
	through the keyboard, find the efficiency of the worker.
	
	2-3		Highly efficient
	3-4		Ordered to improve speed
	4-5		Training to improve speed
	5<		Leave the company
	*/
	
#include <stdio.h>

int main()
{
	//problem with less than two hour 
	int n;
	printf("Enter the No of Hours to complete Work: ");
	scanf("%d",&n);
	if(n>=2&&n<=3)
		printf("Worker is Highly efficient.");
	else
	{
		if(n>3&&n<=4)
			printf("Ordered worker to Improve his speed.");
		else
		{
			if(n>4&&n<=5)
				printf("Give Training to improve speed.");
			else
				printf("The worker has to leave the company.");
		}
	}
	return 0;
}
