/*	If the three sides of a triangle are entered through the
	keyboard, write a program to check whether the triangle is
	isosceles, equilateral, scalene or right angled triangle.
	
	Equilateral Triangle:-	All side are equal.(s1==s2==s3)
	Isoscales Triangle:-	two side are equal.(s1==s2 || s2==s3 || s1==s3)
	Scalene Triangle:-		all side are unequal(s1!=s2!=s3)(s1!=s2&&s2!=s3&&s3!=s1)
	Right Angled Triangle:-	Hypotenuse^2=Base^2+Hight^2
	
	if(s1!=s2&&s2!=s3&&s3!=s1)
				printf("The Triangel is Scalene Triangle.");
*/
#include <stdio.h>

int main()
{
	float s1,s2,s3,ls,l1,l2;
	printf("Enter the sides of Triangle.");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if(s1==s2==s3)
		printf("The Triangel is Equilateral Triangle.");
	else
	{
		if(s1==s2||s2==s3||s1==s3)
			printf("The Triangel is Isoscales Triangle.");
		else
		{
			
			if((s1*s1==(s2*s2)+(s3*s3))||(s3*s3==(s2*s2)+(s1*s1))||(s2*s2==(s1*s1)+(s3*s3)))
				printf("The Triangel is Right angled Triangle.");
			else
			{
				if(s1!=s2&&s2!=s3&&s3!=s1)
					printf("The Triangel is Scalene Triangle.");
			}
		}
	}
	return 0;
	
}
