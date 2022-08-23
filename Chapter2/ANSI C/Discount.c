/*A cloth showroom has announced the following seasonal discounts on purchase of items:
	Purchase amount 							Discount
									Mill cloth 			Handloom items
	0 – 100  							-					5%
	101 – 200 							5% 					7.5%
	201 – 300 							7.5% 				10.0%
	Above 300						 10.0% 					15.0%
	Write a program using switch and if statements to compute the net amount to be paid by a
	customer.*/
	
#include <stdio.h>
#include <conio.h>

int main()
{
	float pam,pah,total;
	
	printf("Enter the purchase amount of mill cloth: ");
	scanf("%f",&pam);
	printf("Enter the purchase amount of Handloom item: ");
	scanf("%f",&pah);
	total=pam+pah;
	if(total>0&&total<=100)
	{
		pam=pam;							//can be written as
		pah=pah-(pah*0.05);					//total=pam+(pah-(pah*0.05))
	}
	else if(total>=101&&total<=200)
	{
		pam=pam-(pam*0.05);
		pah=pah-(pah*0.075);				//total=(pam-(pam*0.05))+(pah-(pah*0.075))
	}
	else if(total>=201&&total<=300)
	{
		pam=pam-(pam*0.075);
		pah=pah-(pah*0.1);					//total=(pam-(pam*0.075))+(pah-(pah*0.1))
	}
	else if(total>300)
	{
		pam=pam-(pam*0.1);
		pah=pah-(pah*0.15);					//total=(pam-(pam*0.1))+(pah-(pah*0.15))
	}
	
	printf("Total amount after discount is %f",(pam+pah));
	return 0;
	
	
}
