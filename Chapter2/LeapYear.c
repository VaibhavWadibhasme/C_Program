/*	Question:-
	Any year is input through the keyboard. Write a program to
	determine whether the year is a leap year or not.
	(Hint: Use the % (modulus) operator)

	LOGIC:-
	1) Divisible by 4 = leap year
	2) Divisibal by 4 & not divisibal by 100 = Leap year
	3) Divisibal by 100 & divisibal by 400 = Leap year
	4) Divisibal by 100 & not divisibal by 400 = Not Leap year

	Example:-
	Leap year= 1904 1908 1912 1916 2000
	Not Leap year=1700 1800 1900 1903 1905 
*/

#include <stdio.h>

int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);								
	if(year%100==0)
		if(year%400==0)
			printf("%d is a LEAP YEAR",year);
		else
			printf("%d is NOT a LEAP YEAR",year);
	else
		if(year%100!=0)
			if(year%4==0)
				printf("%d is a LEAP YEAR",year);
		else
			printf("%d is NOT a LEAP YEAR",year);
	
	return 0;
}
