/*	A five-digit number is entered through the keyboard. Write a
	program to obtain the reversed number and to determine
	whether the original and reversed numbers are equal or not.*/
	
#include <stdio.h>

int main()
{
	int num,n1,n2,n3,n4,n5,rnum,onum;
	printf("Enter Five Digit number: ");
	scanf("%d",&num);
	onum=num;
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	num=num/10;
	rnum=(n1*10000)+(n2*1000)+(n3*100)+(n4*10)+(n5*1);
	if(onum==rnum)
	{
		printf("Original Number(%d) and Reverse Number(%d) are Equal.",onum,rnum);
	}
	else
	{
		printf("Original Number(%d) and Reverse Number(%d) are Not Equal.",onum,rnum);
	}
	return 0;
}
