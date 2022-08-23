/*
	Write a program to find out Simple Intrest for Five customer
*/
#include <stdio.h>

int main()
{
	float p,n,r,si;
	int i=1;
	while(i<=5)
	{
		printf("\nEnter Principle Amount, Rate of Intrest, & No. of years for Customer no %d: ",i);
		scanf("%f%f%f",&p,&r,&n);
		si=p*r*n/100;
		printf("\nSimple Intrest for Customer no %d=%f\n\n",i,si);
		i++;
	}
	return 0;
}
