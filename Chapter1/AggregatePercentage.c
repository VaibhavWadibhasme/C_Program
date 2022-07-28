#include <stdio.h>
#include <conio.h>

int main()
{
	float s1,s2,s3,s4,s5,am,p;
	printf("Enter marks of five subject: ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	am=s1+s2+s3+s4+s5;
	p=am/5;
	printf("Aggregate marks: %f\nPercentage: %f",am,p);
	return 0;
}
