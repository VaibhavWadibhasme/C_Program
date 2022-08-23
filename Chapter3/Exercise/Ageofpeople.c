/*
	Write a program to read the age of 100 person and count the number
	of person in the age group 50 to 60. use for And continue statement.
*/
#include <stdio.h>

int main()
{
	int i,age,count=0;
	for(i=1;i<=100;i++)
	{
		printf("Enter the age of person %d: ",i);
		scanf("%d",&age);
		if(age>=50&&age<=60)
			count++;
		printf("\n");
	}
	printf("no of people in between 50 to 60 are: %d",count);
	return 0;
}
