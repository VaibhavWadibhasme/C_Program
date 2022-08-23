/*
	Enter any digit no eg 215 write a program to print two one five
*/

#include <stdio.h>

int main()
{
	int num,rem,rnum=0;
	printf("Enter Number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rnum=rem+rnum*10;
		num=num/10;
	}
	while(rnum>0)
	{
		rem=rnum%10;
		
		rem==0?printf("ZERO "):(rem==1?printf("ONE "):(rem==2?printf("TWO "):(rem==3?printf("THREE "):(rem==4?printf("FOUR "):(rem==5?printf("FIVE "):(rem==6?printf("FOUR "):(rem==7?printf("SEVEN "):(rem==8?printf("EIGHT "):(rem==9?printf("NINE "):printf("MIstake "))))))))));
		
		rnum=rnum/10;	
	}
	return 0;
}
