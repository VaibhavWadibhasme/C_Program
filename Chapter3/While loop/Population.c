/*
	Population of town today is 100000.The population has increased steadily at
	the rate of 10% per year for last 10 years.
	write a program to determine the population at the end of each year in the last decade.p 
	
	logic: if population is increasing at 10 % each means 100000 is 110% of last year 
	so find 100% of that we will get last year population.
	
	100000/x=110/100
	
	x=100000*100/110
*/

#include <stdio.h>

int main()
{
	int p=100000, i=1;
	while(i<=10)
	{
		p=p*100/110;
		printf("Population for %d last year %d\n",i,p);
		i++;
	}
}
