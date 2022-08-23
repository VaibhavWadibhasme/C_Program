/*	An employee can apply for a loan at the beginning of every six months, but
	he will be sanctioned the amount according to the following company rules:
	Rule 1 : An employee cannot enjoy more than two loans at any point of time.
	Rule 2 : Maximum permissible total loan is limited and depends upon the category of the employee.
	A program to process loan applications and to sanction loans
	
	(condition)?(Expression1):(Expression2)
	
	if condition is true Expression1 will Evaluate
	if condition is false Expression2 will Evaluate
	
	*/
	
#include <stdio.h>
#define MAXLOAN 50000

main()
{
	long int loan1, loan2, loan3, sancloan, sum23;
	printf("Enter the values of previous two loans: \n");
	scanf("%ld %ld",&loan1, &loan2);
	printf("\nEnter the value of new loan:\n");
	scanf("%ld",&loan3);
	sum23=loan2+loan3;
	sancloan=(loan1>0)?0:((sum23>MAXLOAN)?MAXLOAN-loan2:loan3);
	printf("\n\n");
	printf("Previous loans pending:\n%ld %ld\n",loan1,loan2);
	printf("Loan requested = %ld\n", loan3);
	printf("Loan sanctioned = %ld\n",sancloan);
	
}
