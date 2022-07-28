#include <stdio.h>
#include <conio.h>				
								

int main()
{
	int num,r1,r2,r3,r4,r5,n1,n2,n3,n4,n5,num1;
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
	
	n1=(r1+1)%10;
	n2=(r2+1)%10;
	n3=(r3+1)%10;
	n4=(r4+1)%10;
	n5=(r5+1)%10;
	
	num1=n5*10000+n4*1000+n3*100+n2*10+n1*1;

	printf("\nThe Number is:%d",num1);
	return 0;
}
