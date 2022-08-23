/*
	Write a program to read 10 numbers from keyboard and find their sum and average.
	
	output:
	Number 1: 10
	Number 2: 10
	Number 3: 2
	Number 4: 20
	Number 5: 40
	Number 6: 89
	Number 7: 45
	Number 8: 76
	Number 9: 98
	Number 10: 78
	The sum of 10 number is: 468
	The Average is: 46.799999
*/
#include <stdio.h>

int main()
{
	int n,sum=0,i=1;
	float avg;
	while(i<=10)
	{
		
		printf("Number %d: ",i);
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	avg=sum/10.0;
	printf("The sum of 10 number is: %d\nThe Average is: %f",sum,avg);
	return 0;
}
