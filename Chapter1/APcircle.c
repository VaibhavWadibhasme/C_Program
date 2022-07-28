#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x1,x2,y1,y2,r,A,P;
	x1=0;
	x2=4;
	y1=0;
	y2=5;
	r=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	A=3.14*r*r;
	P=2*3.14*r;
	printf("Area of Circle: %f\nPerimeter of circle: %f",A,P);
	return 0;
}
