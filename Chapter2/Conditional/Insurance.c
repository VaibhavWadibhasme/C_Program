/*
	An Insurance company follows following rules to calculate
	premium.
	(1) If a person’s health is excellent and the person is between
	25 and 35 years of age and lives in a city and is a male
	then the premium is Rs. 4 per thousand and his policy
	amount cannot exceed Rs. 2 lakhs.
	(2) If a person satisfies all the above conditions except that
	the sex is female then the premium is Rs. 3 per thousand
	and her policy amount cannot exceed Rs. 1 lakh.
	(3) If a person’s health is poor and the person is between 25
	and 35 years of age and lives in a village and is a male
	then the premium is Rs. 6 per thousand and his policy
	cannot exceed Rs. 10,000.
	(4) In all other cases the person is not insured.
	Write a program to output whether the person should be
	insured or not, his/her premium rate and maximum amount
	for which he/she can be insured.

	factor to consider:-
	1. person’s health (excellent/poor)
	2. age(25-35)
	3. Lived (city/village)
	4. male/female
	
*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int age;
	char health,loc,gender;
	float pamt,premium;
	printf("Enter the Age of Person: ");
	scanf("%d",&age);
	printf("\nPerson Health Excellent(e) or Poor(p): ");
		health=getche();									
	printf("\nPerson Location in city(c) or village(v): ");
		loc=getche();
	printf("\nPerson Gender male(m) or female(f): ");
		gender=getche();
	if((health=='E'||health=='e')&&(age>=25&&age<=35)&&(loc=='C'||loc=='c')&&(gender=='M'||gender=='m'))
	{
		printf("\nCongratulation You are eligible for insurance.");
		printf("\nThe premium is Rs. 4 per thousand and policy amount cannot exceed Rs. 2 lakhs.");
		printf("\nEnter the Policy amount: ");
		scanf("%f",&pamt);
		if(pamt<=200000)
		{
			premium=pamt*4/1000;
			printf("Your Premium is %f for Amount %f.",premium,pamt);
		}
		else
		{
			printf("Dear customer please check preamium amount.");
		}
	}
	else if((health=='E'||health=='e')&&(age>=25&&age<=35)&&(loc=='C'||loc=='c')&&(gender=='F'||gender=='f'))
	{
		printf("\nCongratulation You are eligible for insurance.");
		printf("\nThe premium is Rs. 3 per thousand and policy amount cannot exceed Rs. 1 lakhs.");
		printf("\nEnter the Policy amount: ");
		scanf("%f",&pamt);
		if(pamt<=100000)
		{
			premium=pamt*3/1000;
			printf("Your Premium is %f for Amount %f.",premium,pamt);
		}
		else
		{
			printf("Dear customer please check preamium amount.");
		}
	}
	else if((health=='P'||health=='p')&&(age>=25&&age<=35)&&(loc=='V'||loc=='v')&&(gender=='M'||gender=='m'))
	{
		printf("\nCongratulation You are eligible for insurance.");
		printf("\nThe premium is Rs. 6 per thousand and policy amount cannot exceed Rs. 10000.");
		printf("\nEnter the Policy amount: ");
		scanf("%f",&pamt);
		if(pamt<=10000)
		{
			premium=pamt*6/1000;
			printf("Your Premium is %f for Amount %f.",premium,pamt);
		}
		else
		{
			printf("Dear customer please check preamium amount.");
		}
	}
	else
		printf("Dear customer, The person is not insured.");
	return 0;
	
}

