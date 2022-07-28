#include <stdio.h>
#include <conio.h>

int main()
{
	int num,r1,r2,r3,r4,r5,reverse;
	printf("\nEnter Five Digit Number: ");
	scanf("%d",&num);
	r1=num%10;
	num=num/10;
	r2=num%10;
	num=num/10;
	r3=num%10;
	num=num/10;
	r4=num%10;
	num=num/10;
	r5=num%10;
	reverse=r1*10000+r2*1000+r3*100+r4*10+r5*1;
	printf("\nThe Reverse Number is:%d",reverse);
	return 0;
}
