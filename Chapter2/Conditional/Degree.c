/*	A university has the following rules for a student to qualify
	for a degree with A as the main subject and B as the
	subsidiary subject:
	(a) He should get 55 percent or more in A and 45 percent or
	more in B.																(A>=55&&B>=45) Qualified for a Degree
	(b) If he gets less than 55 percent in A he should get 55 percent or
	more in B. However, he should get at least 45 percent in
	A.																		(A>=45&&B>=55) Qualified for a Degree
	(c) If he gets less than 45 percent in B and 65 percent or more
	in A he is allowed to reappear in an examination in B to
	qualify.																(B<45&&A>=65) Reappear in exam B
	(d) In all other cases he is declared to have failed.					(all other) Failed for degree
	
	Write a program to receive marks in A and B and Output
	whether the student has passed, failed or is allowed to
	reappear in B.
	
*/
#include <stdio.h>

int main()
{
	int A,B;
	printf("Enter the marks of main subject A: ");
	scanf("%d",&A);
	printf("Enter the marks of subsidiary subject B: ");
	scanf("%d",&B);
	if(A>=55&&B>=45)
		printf("Student is qualified for a Degree.");
	else
	{
		if(A>=45&&B>=55)
			printf("Student is qualified for a Degree.");
		else
		{
			if(B<45&&A>=65)
				printf("Student is allowed to reappear in an examination in B to qualify.");
			else
				printf("Failed.");
		}
	}
	return 0;
}
