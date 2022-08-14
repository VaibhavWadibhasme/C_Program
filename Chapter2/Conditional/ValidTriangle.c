/*	If the three sides of a triangle are entered through the
	keyboard, write a program to check whether the triangle is
	valid or not. The triangle is valid if the sum of two sides is
	greater than the largest of the three sides.
	
*/
#include <stdio.h>

int main()
{
	float s1,s2,s3,ls,l1,l2;
	printf("Enter the three sides of Triangle: ");
	scanf("%f%f%f",&s1,&s2,&s3);

	if(((s1+s2)>s3)||((s2+s3)>s1)||((s1+s3)>s2))
		printf("Triangle is valid.");
	else
		printf("Triangle is Invalid.");
	return 0;
}
