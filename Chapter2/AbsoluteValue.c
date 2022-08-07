/*	Question:-
	Find the absolute value of a number entered through the
	keyboard.
	
	logic:-
	Absolute Value describes the distance from zero that a number is on 
	the number line, without considering direction.
	
	Example:-
	The absolute value of 5 is 5.
	The absolute vale of -5 is also 5.
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	if(num<0)
		num=-(num);
	printf("The Absolute value of Entered Number is %d",num);
	
	return 0;
}
