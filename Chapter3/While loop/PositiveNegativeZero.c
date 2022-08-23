/*
	Write a program to enter the numbers till the user wants and
	at the end it should display the count of positive, negative and
	zeros entered.
*/
#include <stdio.h>

int main()
{
	int num, pc=0,nc=0,zc=0;
	char ch='y';
	while(ch=='y'||ch=='Y')						
	{
		printf("\nEnter number: ");
		scanf("%d",&num);
		if(num>0)
			pc++;
		else if(num<0)
			nc++;
		else if(num==0)
			zc++;
		printf("Do you want to continue Yes(Y) or No(n):");
		ch=getche();
		/*if(ch=='Y'||ch=='y')			
			continue;
		else if(ch=='N'||ch=='n')
			break;*/
	}
	
	printf("\nNo.of times Positive number appear:%d",pc);
	printf("\nNo.of times Negative number appear:%d",nc);
	printf("\nNo.of times Zero appear:%d",zc);
	return 0;
}
