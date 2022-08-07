/*	Given a point (x, y), write a program to find out if it lies on the
	x-axis, y-axis or at the origin, viz. (0, 0).
	
	if x=0 then point is on y axis
	if y=0 then point is on x axis
*/

#include <stdio.h>

int main()
{
	float x,y;
	printf("Enter the value of x & y : ");
	scanf("%f%f",&x,&y);
	if(x==0)
		printf("Point is on Y-Axis.");
	else
		if(y==0)
			printf("Point is on X-Axis.");
		else
			if(x==0&&y==0)
				printf("Point is At the circle.");
	return 0;
}
