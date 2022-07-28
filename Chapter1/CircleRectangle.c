/*-----Program to calculate parameter of circle and rectangle-----*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float r,l,b,ac,cf,ar,p;
	printf("\nEnter the Value of radius: ");
	scanf("%f",&r);
	printf("\nEnter the Value of Length & Breadth: ");
	scanf("%f%f",&l,&b);
	ac=3.14*r*r;
	cf=2*3.14*r;
	ar=l*b;
	p=2*(l+b);
	printf("\nThe area of circle is: %f\nThe circumfurance of circle is: %f\nThe area of rectangle is: %f\nThe perimeter of rectangle is: %f",ac,cf,ar,p);
	return 0;
}
