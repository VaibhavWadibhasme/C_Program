/*	Question:-
	Given three points (x1, y1), (x2, y2) and (x3, y3), write a
	program to check if all the three points fall on one straight line.
	
	logic:-
	if slop between point1 & point2 is equal to slop between point2 and point3
	then the point is on same line.
	
	formula for slop of line:-
	slop1=(y2-y1)/(x2-x1)
	slop2=(y3-y2)/(x3-x2)
	check slop1==slop2	
*/
#include <stdio.h>

int main()
{
	float x1,x2,x3,y1,y2,y3,s1,s2;
	printf("Enter value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter value of x2 and y2 : ");
	scanf("%f%f",&x2,&y2);
	printf("Enter value of x3 and y3 : ");
	scanf("%f%f",&x3,&y3);
	s1=(y2-y1)/(x2-x1);
	s2=(y3-y2)/(x3-x2);
	if(s1==s2)
	{
		printf("All the three points Fall on one straight line.");
	}
	else
	{
		printf("All the three points NOT on one straight line.");
	}
	return 0;
}
