/*-----Program to calculate the Gross Salary-----*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float bs,da,hra,gs;
	printf("\nEnter the basic salary: ");
	scanf("%f",&bs);
	da=0.90*bs;
	hra=0.20*bs;
	gs=bs+da+hra;
	printf("The Gross salary is:%f",gs);
	return 0;
}
