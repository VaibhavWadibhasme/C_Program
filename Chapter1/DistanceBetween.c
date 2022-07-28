#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x1,x2,y1,y2,D;
	printf("Enter Co-ordinate x1 &y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter Co-ordinate x2 &y2 : ");
	scanf("%f%f",&x2,&y2);
	D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("Distance between two point is : %f",D);
	return 0;
}
