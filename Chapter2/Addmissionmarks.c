/*	Admission to a professional course is subject to the following conditions:
	(a) Marks in Mathematics >= 60
	(b) Marks in Physics >= 50
	(c) Marks in Chemistry >= 40
	(d) Total in all three subjects >= 200 or
	Total in Mathematics and Physics >= 150
	Given the marks in the three subjects, write a program to process the applications to list the
	eligible candidates.
*/
#include <stdio.h>

int main()
{
	float m,p,c,total,mp;
	printf("Enter the marks of Mathematic, Physics, Chemistry: ");
	scanf("%f%f%f",&m,&p,&c);
	total=m+p+c;
	mp=m+p;
	if(m>=60)
	{
		if(p>=50)
		{
			if(c>=40)
			{
				if(total>=200||mp>150)
					printf("Candidate is Eligible of Application.");
			}
			else
				printf("Candidate is Not Eligible of Application.");
		}
		else
				printf("Candidate is Not Eligible of Application.");
	}
	else
		printf("Candidate is Not Eligible of Application.");
	return 0;
	
}
