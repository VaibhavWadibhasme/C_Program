/*	Write a program that will read the value of x and evaluate the following function
	
	y=1	if x>0
	y=0	if x=0
	y=-1 if x<0
	
	using
	(a) nested if statements,
	(b) else if statements, and
	(c) conditional operator ? :
	*/
	
#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter the Value of x: ");
	scanf("%d",&x);
	if(x<0)
		y=-1;
	else if(x>0)
		y=1;
	else if(x=0)
		y=0;
	
	printf("Value of X is %d and Y is %d.",x,y);
	return 0;
}
/*		Nested if:
	if(x>=0)
	{
		if(x=0)
			y=0
		else
			y=1
	}
	else
		y=-1
*/
