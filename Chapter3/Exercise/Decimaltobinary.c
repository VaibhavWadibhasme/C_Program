/*
	DECIMAL TO BINARY
*/
#include <stdio.h>

int main()
{
	int i,p=1,num,rem=0,dec=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	for(i=1;num>0;i++)
	{
		rem=num%2;
		num=num/2;
		dec=dec+rem*p;
		p=p*10;
	}
	printf("%d",dec);
	return 0;
}
