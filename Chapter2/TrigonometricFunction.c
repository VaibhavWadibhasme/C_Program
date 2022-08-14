/*	Write a program to read a double-type value x that repre sents angle in radians and a charactertype
	variable T that represents the type of trigonometric function and display the value of
	(a) sin(x), if s or S is assigned to T,
	(b) cos (x), if c or C is assigned to T, and
	(c) tan (x), if t or T is assigned to T
	using (i) if......else statement
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	char T;
	printf("Enter the angle in radian : ");
	scanf("%lf",&x);
	printf("Enter function sin(s),cos(c),tan(t): ");
	T=getche();
	if(T=='s'||T=='S')
		printf("\nThe Value for Function is %lf",sin(x));
	else if(T=='c'||T=='C')
		printf("\nThe Value for Function is %lf",cos(x));
	else if(T=='t'||T=='T')
		printf("\nThe Value for Function is %lf",tan(x));
	return 0;
}
