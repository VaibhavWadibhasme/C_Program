/*
	According to a study, the approximate level of intelligence of
	a person can be calculated using the following formula:
	i = 2 + ( y + 0.5 x )
	Write a program, which will produce a table of values of i, y
	and x, where y varies from 1 to 6, and, for each value of y, x
	varies from 5.5 to 12.5 in steps of 0.5.
*/
#include <stdio.h>

int main()
{
	float i,y,x=5.5;
	printf("i\tx\ty\n");
	for(y=1;y<=6;y++)
	{
		i=2+(y+0.5*x);
		printf("%.2f  %.2f  %.2f\n",i,x,y);
		x=x+0.5;
	}
	return 0;
}
