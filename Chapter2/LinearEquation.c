/*	A set of two linear equations with two unknowns x1 and x2 is given below:
	ax1 + bx2 = m
	cx1 + dx2 = n
	The set has a unique solution
	x1 =(md-bn)/(ad-cb)
	x2 =(na-mc)/(ad-cb)
	provided the denominator ad – cb is not equal to zero.
	Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of
	x1 and x2. An appropriate message should be printed if ad – cb = 0.
*/

#include <stdio.h>

int main()
{
	float a,b,c,d,m,n,dino,x1,x2;
	printf("Enter the value of a,b,c,m,n: ");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
	dino=(a*d)-(c*b);
	if(dino==0)
	{
		printf("Somthing is wrong with input value of a,b,c,d.");
	}
	else
		x1=((m*d)-(b*n))/dino;
		x2=((n*a)-(m*c))/dino;
		printf("The value for x1 is %f and x2 is %f.",x1,x2);
}
