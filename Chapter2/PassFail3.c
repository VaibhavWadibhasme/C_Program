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
	int s1,s2,s3,s4,s5,tm;
	float p;
	printf("Enter the marks of subject1: ");
	scanf("%d",&s1);
	printf("Enter the marks of subject2: ");
	scanf("%d",&s2);
	printf("Enter the marks of subject3: ");
	scanf("%d",&s3);
	printf("Enter the marks of subject4: ");
	scanf("%d",&s4);
	printf("Enter the marks of subject5: ");
	scanf("%d",&s5);
	
	//check that marks enter are greater than equal to Zero And less than or equal to 100
	if(s1<0||s1>100||s2<0||s2>100||s3<0||s3>100||s4<0||s4>100||s5<0||s5>100)
		printf("\nDear user please check the Marks.");
	else
	{
		//check that if student passed in individul subject or not
		if(s1>=40&&s2>=40&&s3>=40&&s4>=40&&s5>=40)
		{
			tm=s1+s2+s3+s4+s5;
			p=tm/5;
			printf("Total Marks Obtained are %d.\n",tm);
			printf("Percentage Obtainred %f %%.\n",p);
			printf("Result: Passed\n");
			
			//check which grade student get according to percentage
			if(p>=75)
				printf("Grade: Distinction.");
			else
				if(p>=60&&p<75)
					printf("Grade: A.");
				else
					if(p>=50&&p<60)
						printf("Grade: B.");
					else
						if(p>=40&&p<50)
							printf("Grade: C.");
		}
		else
		{
			tm=s1+s2+s3+s4+s5;
			p=tm/5;
			printf("Total Marks Obtained are %d.\n",tm);
			printf("Percentage Obtainred %f %%.\n",p);
			printf("Result: Failed");
		}
	}
	return 0;
}
