/*	Question:-
	According to the Gregorian calendar, it was Monday on the
	date 01/01/1900. If any year is input through the keyboard
	write a program to find out what is the day on 1st January of
	this year.
	
	Logic:-
	Total days=((year-1)*365+((y-1)/4)-((y-1)/100)+((year-1)/400)+1)
	day=tatal days%7	
*/
#include <stdio.h>

int main()
{
	long int y,td,d;
	printf("Enter the year: ");
	scanf("%ld",&y);
	td=((y-1)*365+((y-1)/4)-((y-1)/100)+((y-1)/400)+1);
	d=td%7;
	
	if(d==0)
		printf("The day is Sunday");
	else
		if(d==1)
			printf("The day is Monday");
		else
			if(d==2)
				printf("The day is Tuesday");
			else
				if(d==3)
					printf("The day is Wednesday");
				else
					if(d==4)
						printf("The day is Thursday");
					else
						if(d==5)
							printf("The day is Friday");
						else
							if(d==6)
								printf("The day is Saturday");
	return 0;
	
}
