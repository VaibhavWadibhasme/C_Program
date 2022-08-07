/*	Question:-
	Given the length and breadth of a rectangle, write a program to
	find whether the area of the rectangle is greater than its
	perimeter. For example, the area of the rectangle with length = 5
	and breadth = 4 is greater than its perimeter.
	
	logic:-
	(Area=l*b)>(Perimeter=2(l+b)
*/

#include <stdio.h>

int main()
{
	float l,b;
	printf("Enter the length & breadth of Rectangle: ");
	scanf("%f%f",&l,&b);
	if((l*b)>(2*(l+b)))
	{
		printf("The Area of the rectangle with length %f and breadth %f is GREATER than its perimeter.",l,b);
	}
	else
	{
		printf("The Area of the rectangle with length %f and breadth %f is LESS than its perimeter.",l,b);
	}
	return 0;
}
