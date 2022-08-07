/*
	Take input mark of 5 subject, print total mark
	& percentage.if pass then print grade 
	if greater than 75 grade distinction
	if betn 60 to 75 grade A
	if betn 50 to 60 grade B
	if betn 40 to 50 grade C
	if less than 40 failed

*/
#include <stdio.h>

int main()
{
	float s1,s2,s3,s4,s5,tm,p;
	printf("Enter the marks of 5 subject: ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	tm=s1+s2+s3+s4+s5;
	p=tm/5;
	printf("Total Marks Obtained are %.2f.\n",tm);
	printf("Percentage Obtainred %.2f %%.\n",p);
	if(p>=75)
		printf("Passed with Distinction.");
	else
		if(p>=60)
			printf("Passed with Grade A.");
		else
			if(p>=50)
				printf("Passed with Grade B.");
			else
				if(p>=40)
					printf("Passed with Grade C.");
				else
					if(p<40)
						printf("Failed.");
	return 0;
}
