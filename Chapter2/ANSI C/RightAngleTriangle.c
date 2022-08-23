/*	Write a program to read three integer values from the keyboard and displays the output stating
	that they are the sides of right-angled triangle.*/
	
#include <stdio.h>

int main()
{
	int s1,s2,s3;
	printf("Enter the sides of Triangle: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1*s1==s2*s2+s3*s3)||(s2*s2==s1*s1+s3*s3)||(s3*s3==s2*s2+s1*s1))
		printf("They are the sides of Right-angled triangle.");
	else
		printf("They are Not the sides of Right-angled triangle.");
	return 0;
}
