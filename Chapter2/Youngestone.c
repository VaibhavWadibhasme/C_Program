/*	If the ages of Ram, Shyam and Ajay are input through the
	keyboard, write a program to determine the youngest of the
	three.*/
	
#include <stdio.h>

int main()
{
	int r,s,a;
	printf("Enter Age of Ram: ");
	scanf("%d",&r);
	printf("Enter Age of Shyam: ");
	scanf("%d",&s);
	printf("Enter Age of Ajay: ");
	scanf("%d",&a);
	if(r<s)
	{
		if(r<a)
			printf("Youngest is ram.");
		else
			printf("Youngest is ajay.");
	}
	else
	{
		if(s<a)
			printf("Youngest is shyam.");
		else
			printf("Youngest is ajay.");
	}

	return 0;
	
}
