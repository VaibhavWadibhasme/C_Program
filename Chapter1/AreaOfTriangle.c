#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a,b,c,s,A;
	printf("\nEnter The value a, b & c : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of Triangle: %f",A);
	return 0;
}
