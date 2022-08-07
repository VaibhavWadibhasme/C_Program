/*	Question:-
	Given the coordinates (x, y) of a center of a circle and it’s radius,
	write a program which will determine whether a point lies inside
	the circle, on the circle or outside the circle.
	(Hint: Use sqrt( ) and pow( ) functions)
	
	logic:-
	d=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1))
	for one point as center of circle
	d=sqrt((x2*x2)+(y2*y2)
*/
#include <stdio.h>
#include <math.h>

int main()
{
	float r,x,y,d;
	printf("Enter The Radius: ");
	scanf("%f",&r);
	printf("Enter The co-ordinate of point: ");
	scanf("%f%f",&x,&y);
	d=sqrt((x*x)+(y*y));
	if(d==r)
		printf("Point lies on the circle.");
	else
		if(d<r)
			printf("Point lies inside the circle.");
		else
			if(d>r)
				printf("Point lies outside the circle.");
	return 0;
}
