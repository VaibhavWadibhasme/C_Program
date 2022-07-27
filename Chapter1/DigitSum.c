#include <stdio.h>
#include <conio.h>

int main()
{
	int num,r1,r2,r3,r4,r5,sum;
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
	sum=r1+r2+r3+r4+r5;
	printf("\nThe sum of digit of Number is:%d",sum);
	return 0;
}
