#include <stdio.h>
#include <conio.h>

int main()
{
	int num,r,q,sum;
	printf("\nEnter Four Digit Number: ");
	scanf("%d",&num);
	r=num%10;
	q=num/1000;
	sum=r+q;
	printf("\nThe sum of first & last digit of Number is:%d",sum);
	return 0;
}
