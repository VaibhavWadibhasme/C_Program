/*
	Take input of total marks and Display pass or failed with Grade for no of student
	provided by user.
*/

#include <stdio.h>

int main()
{
	int n,tm,i=1;
	float p;
	printf("\nEnter number of Student for which you want to check result: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n\nEnter Total marks out of 500 of student %d : ",i);
		scanf("%d",&tm);
		p=tm/5.0;
		if(p>=0&&p<=500)
		{
			if(p>=60)
				printf("Student %d Pass with Grade A.",i);
			else if(p>=50)
				printf("Student %d Pass with Grade B.",i);
			else if(p>=40)
				printf("Student %d Pass with Grade c.",i);
			else if(p<40)
				printf("Student %d Failed.",i);
		}
		else
			printf("Check Enter marks.")
		i++;
	}
	printf("\n\tTHANK YOU!");
	return 0;
}
