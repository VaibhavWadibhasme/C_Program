#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x1,x2,y1,y2,D,r,A,P;
	x1=2;
	x2=5;
	y1=2;
	y2=6;
	D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	r=D/2;
	A=3.14*r*r;
	P=2*3.14*r;
	printf("Area of Circle: %f\nPerimeter of circle: %f",A,P);
	return 0;
}
