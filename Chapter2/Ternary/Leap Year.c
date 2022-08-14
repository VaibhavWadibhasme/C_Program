/* Write a program using conditional operators to determine
	whether a year entered through the keyboard is a leap year or
	not.
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
	printf("Enter the Year: ");
	scanf("%d",&year);
	
	(year%4==0)?((year%100==0)?((year%400==0)?printf("%d is leap year.",year):printf("%d is not leap year.",year)):(printf("%d is leap year.",year))):printf("%d is not leap year.",year);
	return 0;	
}
