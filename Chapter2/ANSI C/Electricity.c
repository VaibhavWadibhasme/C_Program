/*	An electricity board charges the following rates for the use of electricity:
	for first 200 units:80 P per unit
	For the next 100 units: 90 P per unit
	Beyond 300 units: Rs 1.00 per unit
	All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.
	400, then an additional surcharge of 15% of total amount is charged.
	Write a program to read the names of users and number of units consumed and print out the
	charges with names.*/
	
#include <stdio.h>

int main()
{
	int unit;
	float bill;
	printf("Enter the No. of Units: ");
	scanf("%d",&unit);
	//bill according to unit
	if(unit<=200)
		bill=unit*0.8;
	else if(unit<=300)
		bill=160+(unit-200)*0.9;
	else if(unit>300)
		bill=250+(unit-300)*1;
		
	if(bill<100)		//if bill is less than 100 then take minimum 100
		bill=100;
	else if(bill>400)	//if bill is more than 400 then add 15% surcharge
		bill=bill+(bill*0.15);
	
	printf("Your consume units are %d and charges are %f.2",unit,bill);	
		
	return 0;
}
