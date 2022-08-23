/*
	===============	BINARY TO DECIMAL===========
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int num,p=0,rem,dec=0,temp;
	printf("Enter Number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;		
		num=num/10;		
		dec=dec+rem*pow(2,p);
		p++;
	}
	printf("Decimal of %d is %d",temp,dec);
	return 0;
}
