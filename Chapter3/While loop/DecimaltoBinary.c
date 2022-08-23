/*
	===============	DECIMAL TO BINARY===========
*/
#include <stdio.h>

int main()
{
	int num,p=1,rem,dec=0,temp;
	printf("Enter Number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%2;
		num=num/2;
		dec=dec+rem*p;
		p=p*10;
	}
	printf("Binary of %d is %d",temp,dec);
	return 0;
}
